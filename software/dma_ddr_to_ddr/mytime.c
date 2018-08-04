
#include "system.h"                   // ϵͳ

#include "altera_avalon_timer_regs.h" // ��ʱ��

#include "sys/alt_irq.h"              // �ж�

//

unsigned int timer_isr_context; // ����ȫ�ֱ����Դ���isr_contextָ��

void Timer_Initial(void);

void Timer_ISR(void* isr_context);
int time_1s=0;
//

// ��ʱ���жϳ�ʼ��

void Timer_Initial(void)

{

  // ��дtimer_isr_contextָ����ƥ��alt_irq_register()����ԭ��

  void* isr_context_ptr = (void*) &timer_isr_context;

  // ����PERIOD�Ĵ���

  // PERIODH << 16 | PERIODL = �������������� * ϵͳʱ��Ƶ������ - 1

  // PERIODH << 16 | PERIODL = 5m*100M - 1 = 499999 = 0x7A11F

  IOWR_ALTERA_AVALON_TIMER_PERIODH(SYS_CLK_TIMER_BASE, (SYS_CLK_TIMER_FREQ-1)>>16);

  IOWR_ALTERA_AVALON_TIMER_PERIODL(SYS_CLK_TIMER_BASE, (SYS_CLK_TIMER_FREQ-1)&0xffff);

 

  // ����CONTROL�Ĵ���

  //    λ�� |  3   |  2   |  1   |  0  |

  // CONTROL | STOP | START| CONT | ITO |

  // ITO   1������IRO��                      0��������IRQ

  // CONT  1����������������ֱ��STOP����һ��   0��������0ֹͣ

  // START 1����������ʼ���У�                0����Ӱ��

  // STOP  1��������ֹͣ���У�                0����Ӱ��

  IOWR_ALTERA_AVALON_TIMER_CONTROL(SYS_CLK_TIMER_BASE,

    ALTERA_AVALON_TIMER_CONTROL_START_MSK | // START = 1

    ALTERA_AVALON_TIMER_CONTROL_CONT_MSK  | // CONT  = 1

    ALTERA_AVALON_TIMER_CONTROL_ITO_MSK);   // ITO   = 1

  // ע�ᶨʱ���ж�

  alt_ic_isr_register(

      SYS_CLK_TIMER_IRQ_INTERRUPT_CONTROLLER_ID, // �жϿ�������ţ���system.h����

      SYS_CLK_TIMER_IRQ,     // Ӳ���жϺţ���system.h����

      Timer_ISR,              // �жϷ����Ӻ���

      isr_context_ptr,        // ָ�����豸����ʵ����ص����ݽṹ��

      0x0);                   // flags������δ��

}

// ��ʱ���жϷ����Ӻ���

void Timer_ISR(void* timer_isr_context)

{

  // Ӧ���жϣ���STATUS�Ĵ�������

  IOWR_ALTERA_AVALON_TIMER_STATUS(SYS_CLK_TIMER_BASE,

      ~ ALTERA_AVALON_TIMER_STATUS_TO_MSK);   // TO = 0

 time_1s=1;

  // �û��жϴ���

}
