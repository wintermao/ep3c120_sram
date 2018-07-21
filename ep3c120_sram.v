//Legal Notice: (C)2008 Altera Corporation. All rights reserved.  Your
//use of Altera Corporation's design tools, logic functions and other
//software and tools, and its AMPP partner logic functions, and any
//output files any of the foregoing (including device programming or
//simulation files), and any associated documentation or information are
//expressly subject to the terms and conditions of the Altera Program
//License Subscription Agreement or other applicable license agreement,
//including, without limitation, that your use is for the sole purpose
//of programming logic devices manufactured by Altera and sold by Altera
//or its authorized distributors.  Please refer to the applicable
//agreement for further details.

// synthesis translate_off
`timescale 1ns / 1ps
// synthesis translate_on

// turn off superfluous verilog processor warnings 
// altera message_level Level1 
// altera message_off 10034 10035 10036 10037 10230 10240 10030 

module ep3c120_sram (
                                       // inputs:
                                        top_HSMB_ADC_DOUT,
                                        top_HSMB_ADC_PENIRQ_N,
                                        top_HSMB_RX_CLK,
                                        top_HSMB_RX_COL,
                                        top_HSMB_RX_CRS,
                                        top_HSMB_RX_D,
                                        top_HSMB_RX_DV,
                                        top_HSMB_RX_ERR,
                                        top_HSMB_TX_CLK,
                                        top_HSMB_UART_RXD,
                                        top_button,
                                        top_clkin_125,
                                        top_clkin_50,
                                        top_reset_n,

                                       // outputs:
                                        top_HSMB_ADC_CS_N,
                                        top_HSMB_ADC_DCLK,
                                        top_HSMB_ADC_DIN,
                                        top_HSMB_DEN,
                                        top_HSMB_ETH_RESET_N,
                                        top_HSMB_HSYNC,
                                        top_HSMB_ID_I2CDAT,
                                        top_HSMB_ID_I2CSCL,
                                        top_HSMB_LCD_DATA,
                                        top_HSMB_LCD_NCLK,
                                        top_HSMB_MDC,
                                        top_HSMB_MDIO,
                                        top_HSMB_SCEN,
                                        top_HSMB_SDAT,
                                        top_HSMB_SD_CLK,
                                        top_HSMB_SD_CMD,
                                        top_HSMB_SD_DAT0,
                                        top_HSMB_SD_DAT1,
                                        top_HSMB_SD_DAT2,
                                        top_HSMB_SD_DAT3,
                                        top_HSMB_TX_D,
                                        top_HSMB_TX_EN,
                                        top_HSMB_UART_TXD,
                                        top_HSMB_VSYNC,
                                        top_cs_n_to_the_max2,
                                        top_ddr2_ck_n,
                                        top_ddr2_ck_p,
                                        top_ddr2bot_a,
                                        top_ddr2bot_ba,
                                        top_ddr2bot_casn,
                                        top_ddr2bot_cke,
                                        top_ddr2bot_csn,
                                        top_ddr2bot_dm,
                                        top_ddr2bot_dq,
                                        top_ddr2bot_dqs,
                                        top_ddr2bot_odt,
                                        top_ddr2bot_rasn,
                                        top_ddr2bot_wen,
                                        top_ddr2top_a,
                                        top_ddr2top_ba,
                                        top_ddr2top_casn,
                                        top_ddr2top_cke,
                                        top_ddr2top_csn,
                                        top_ddr2top_dm,
                                        top_ddr2top_dq,
                                        top_ddr2top_dqs,
                                        top_ddr2top_odt,
                                        top_ddr2top_rasn,
                                        top_ddr2top_wen,
                                        top_flash_cen,
                                        top_flash_oen,
                                        top_flash_resetn,
                                        top_flash_wen,
                                        top_fsa,
                                        top_fsd,
                                        top_led,
                                        top_oe_n_to_the_max2,
                                        top_we_n_to_the_max2
                                     )
;

  output           top_HSMB_ADC_CS_N;
  output           top_HSMB_ADC_DCLK;
  output           top_HSMB_ADC_DIN;
  output           top_HSMB_DEN;
  output           top_HSMB_ETH_RESET_N;
  output           top_HSMB_HSYNC;
  inout            top_HSMB_ID_I2CDAT;
  output           top_HSMB_ID_I2CSCL;
  output  [  7: 0] top_HSMB_LCD_DATA;
  output           top_HSMB_LCD_NCLK;
  output           top_HSMB_MDC;
  inout            top_HSMB_MDIO;
  output           top_HSMB_SCEN;
  inout            top_HSMB_SDAT;
  output           top_HSMB_SD_CLK;
  inout            top_HSMB_SD_CMD;
  inout            top_HSMB_SD_DAT0;
  inout            top_HSMB_SD_DAT1;
  inout            top_HSMB_SD_DAT2;
  inout            top_HSMB_SD_DAT3;
  output  [  3: 0] top_HSMB_TX_D;
  output           top_HSMB_TX_EN;
  output           top_HSMB_UART_TXD;
  output           top_HSMB_VSYNC;
  output           top_cs_n_to_the_max2;
  inout   [  1: 0] top_ddr2_ck_n;
  inout   [  1: 0] top_ddr2_ck_p;
  output  [ 12: 0] top_ddr2bot_a;
  output  [  1: 0] top_ddr2bot_ba;
  output           top_ddr2bot_casn;
  output           top_ddr2bot_cke;
  output           top_ddr2bot_csn;
  output  [  1: 0] top_ddr2bot_dm;
  inout   [ 15: 0] top_ddr2bot_dq;
  inout   [  1: 0] top_ddr2bot_dqs;
  output           top_ddr2bot_odt;
  output           top_ddr2bot_rasn;
  output           top_ddr2bot_wen;
  output  [ 12: 0] top_ddr2top_a;
  output  [  1: 0] top_ddr2top_ba;
  output           top_ddr2top_casn;
  output           top_ddr2top_cke;
  output           top_ddr2top_csn;
  output  [  1: 0] top_ddr2top_dm;
  inout   [ 15: 0] top_ddr2top_dq;
  inout   [  1: 0] top_ddr2top_dqs;
  output           top_ddr2top_odt;
  output           top_ddr2top_rasn;
  output           top_ddr2top_wen;
  output           top_flash_cen;
  output           top_flash_oen;
  output           top_flash_resetn;
  output           top_flash_wen;
  output  [ 24: 0] top_fsa;
  inout   [ 31: 0] top_fsd;
  output  [  7: 0] top_led;
  output           top_oe_n_to_the_max2;
  output           top_we_n_to_the_max2;
  input            top_HSMB_ADC_DOUT;
  input            top_HSMB_ADC_PENIRQ_N;
  input            top_HSMB_RX_CLK;
  input            top_HSMB_RX_COL;
  input            top_HSMB_RX_CRS;
  input   [  3: 0] top_HSMB_RX_D;
  input            top_HSMB_RX_DV;
  input            top_HSMB_RX_ERR;
  input            top_HSMB_TX_CLK;
  input            top_HSMB_UART_RXD;
  input   [  3: 0] top_button;
  input            top_clkin_125;
  input            top_clkin_50;
  input            top_reset_n;

  wire             top_HSMB_ADC_CS_N;
  wire             top_HSMB_ADC_DCLK;
  wire             top_HSMB_ADC_DIN;
  wire             top_HSMB_DEN;
  wire             top_HSMB_ETH_RESET_N;
  wire             top_HSMB_HSYNC;
  wire             top_HSMB_ID_I2CDAT;
  wire             top_HSMB_ID_I2CSCL;
  wire    [  7: 0] top_HSMB_LCD_DATA;
  wire             top_HSMB_LCD_NCLK;
  wire             top_HSMB_MDC;
  wire             top_HSMB_MDIO;
  wire             top_HSMB_SCEN;
  wire             top_HSMB_SDAT;
  wire             top_HSMB_SD_CLK;
  wire             top_HSMB_SD_CMD;
  wire             top_HSMB_SD_DAT0;
  wire             top_HSMB_SD_DAT1;
  wire             top_HSMB_SD_DAT2;
  wire             top_HSMB_SD_DAT3;
  wire             top_HSMB_SD_In;
  wire             top_HSMB_SD_Wp;
  wire    [  3: 0] top_HSMB_TX_D;
  wire             top_HSMB_TX_EN;
  wire             top_HSMB_UART_TXD;
  wire             top_HSMB_VSYNC;
  wire             top_SCLK_from_the_touch_panel_spi;
  wire             top_SD_Busy_from_the_sls_sdhc;
  wire             top_SS_n_from_the_touch_panel_spi;
  wire             top_cs_n_to_the_max2;
  wire    [  1: 0] top_ddr2_ck_n;
  wire    [  1: 0] top_ddr2_ck_p;
  wire             top_ddr2_sdram_1_aux_full_rate_clk_out;
  wire             top_ddr2_sdram_1_aux_half_rate_clk_out;
  wire             top_ddr2_sdram_1_phy_clk_out;
  wire             top_ddr2_sdram_aux_full_rate_clk_out;
  wire             top_ddr2_sdram_aux_half_rate_clk_out;
  wire             top_ddr2_sdram_phy_clk_out;
  wire    [ 12: 0] top_ddr2bot_a;
  wire    [  1: 0] top_ddr2bot_ba;
  wire             top_ddr2bot_casn;
  wire             top_ddr2bot_cke;
  wire             top_ddr2bot_csn;
  wire    [  1: 0] top_ddr2bot_dm;
  wire    [ 15: 0] top_ddr2bot_dq;
  wire    [  1: 0] top_ddr2bot_dqs;
  wire             top_ddr2bot_odt;
  wire             top_ddr2bot_rasn;
  wire             top_ddr2bot_wen;
  wire    [ 12: 0] top_ddr2top_a;
  wire    [  1: 0] top_ddr2top_ba;
  wire             top_ddr2top_casn;
  wire             top_ddr2top_cke;
  wire             top_ddr2top_csn;
  wire    [  1: 0] top_ddr2top_dm;
  wire    [ 15: 0] top_ddr2top_dq;
  wire    [  1: 0] top_ddr2top_dqs;
  wire             top_ddr2top_odt;
  wire             top_ddr2top_rasn;
  wire             top_ddr2top_wen;
  wire             top_ena_10_from_the_tse_mac;
  wire             top_eth_mode_from_the_tse_mac;
  wire             top_flash_cen;
  wire             top_flash_oen;
  wire             top_flash_resetn;
  wire             top_flash_wen;
  wire    [ 24: 0] top_fsa;
  wire    [ 25: 0] top_fsa_alignment;
  wire    [ 31: 0] top_fsd;
  wire    [  7: 0] top_gm_rx_d_to_the_tse_mac;
  wire             top_gm_rx_dv_to_the_tse_mac;
  wire             top_gm_rx_err_to_the_tse_mac;
  wire    [  7: 0] top_gm_tx_d_from_the_tse_mac;
  wire             top_gm_tx_en_from_the_tse_mac;
  wire             top_gm_tx_err_from_the_tse_mac;
  wire    [  3: 0] top_in_port_to_the_button_pio;
  wire             top_internal_reset_n;
  wire    [  7: 0] top_led;
  wire             top_local_init_done_from_the_ddr2_sdram;
  wire             top_local_init_done_from_the_ddr2_sdram_1;
  wire             top_local_refresh_ack_from_the_ddr2_sdram;
  wire             top_local_refresh_ack_from_the_ddr2_sdram_1;
  wire             top_local_wdata_req_from_the_ddr2_sdram;
  wire             top_local_wdata_req_from_the_ddr2_sdram_1;
  wire             top_m_rx_col_to_the_tse_mac;
  wire             top_m_rx_crs_to_the_tse_mac;
  wire    [  3: 0] top_m_rx_d_to_the_tse_mac;
  wire             top_m_rx_en_to_the_tse_mac;
  wire             top_m_rx_err_to_the_tse_mac;
  wire    [  3: 0] top_m_tx_d_from_the_tse_mac;
  wire             top_m_tx_en_from_the_tse_mac;
  wire             top_m_tx_err_from_the_tse_mac;
  wire             top_mdc_from_the_tse_mac;
  wire             top_mdio_in;
  wire             top_mdio_in_to_the_tse_mac;
  wire             top_mdio_oen;
  wire             top_mdio_oen_from_the_tse_mac;
  wire             top_mdio_out;
  wire             top_mdio_out_from_the_tse_mac;
  wire             top_oe_n_to_the_max2;
  wire             top_out_port_from_the_lcd_i2c_en;
  wire             top_out_port_from_the_lcd_i2c_scl;
  wire             top_pll_c2_out;
  wire             top_reset_phy_clk_n_from_the_ddr2_sdram;
  wire             top_reset_phy_clk_n_from_the_ddr2_sdram_1;
  wire             top_rx_clk_to_the_tse_mac;
  wire             top_set_1000_to_the_tse_mac;
  wire             top_set_10_to_the_tse_mac;
  wire             top_tx_clk_to_the_tse_mac;
  wire             top_we_n_to_the_max2;
  nios nios_instance
    (
      //.DEN_from_the_lcd_sync_generator (top_HSMB_DEN),
      //.HD_from_the_lcd_sync_generator (top_HSMB_HSYNC),
      //.MISO_to_the_touch_panel_spi (top_HSMB_ADC_DOUT),
      //.MOSI_from_the_touch_panel_spi (top_HSMB_ADC_DIN),
      //.RGB_OUT_from_the_lcd_sync_generator (top_HSMB_LCD_DATA),
      //.SCLK_from_the_touch_panel_spi (top_SCLK_from_the_touch_panel_spi),
      //.SD_Busy_from_the_sls_sdhc (top_SD_Busy_from_the_sls_sdhc),
      //.SD_CLK_from_the_sls_sdhc (top_HSMB_SD_CLK),
      //.SD_CMD_to_and_from_the_sls_sdhc (top_HSMB_SD_CMD),
      //.SD_DAT0_to_and_from_the_sls_sdhc (top_HSMB_SD_DAT0),
      //.SD_DAT1_to_and_from_the_sls_sdhc (top_HSMB_SD_DAT1),
      //.SD_DAT2_to_and_from_the_sls_sdhc (top_HSMB_SD_DAT2),
      //.SD_DAT3_to_and_from_the_sls_sdhc (top_HSMB_SD_DAT3),
      //.SD_In_to_the_sls_sdhc (top_HSMB_SD_In),
      //.SD_Wp_to_the_sls_sdhc (top_HSMB_SD_Wp),
      //.SS_n_from_the_touch_panel_spi (top_SS_n_from_the_touch_panel_spi),
     // .VD_from_the_lcd_sync_generator (top_HSMB_VSYNC),
     // .bidir_port_to_and_from_the_lcd_i2c_sdat (top_HSMB_SDAT),
      //.bidir_port_to_and_from_the_pio_id_eeprom_dat (top_HSMB_ID_I2CDAT),
      .clk (top_clkin_50),
      .clk_125 (top_clkin_125),
    //  .cs_n_to_the_max2 (top_cs_n_to_the_max2),
      //.ddr2_sdram_1_aux_full_rate_clk_out (top_ddr2_sdram_1_aux_full_rate_clk_out),
      //.ddr2_sdram_1_aux_half_rate_clk_out (top_ddr2_sdram_1_aux_half_rate_clk_out),
      //.ddr2_sdram_1_phy_clk_out (top_ddr2_sdram_1_phy_clk_out),
      //.ddr2_sdram_aux_full_rate_clk_out (top_ddr2_sdram_aux_full_rate_clk_out),
      //.ddr2_sdram_aux_half_rate_clk_out (top_ddr2_sdram_aux_half_rate_clk_out),
      //.ddr2_sdram_phy_clk_out (top_ddr2_sdram_phy_clk_out),
      //.ena_10_from_the_tse_mac (top_ena_10_from_the_tse_mac),
      //.eth_mode_from_the_tse_mac (top_eth_mode_from_the_tse_mac),
      //.flash_tristate_bridge_address (top_fsa_alignment),
      //.flash_tristate_bridge_data (top_fsd),
      //.global_reset_n_to_the_ddr2_sdram (top_internal_reset_n),
      //.global_reset_n_to_the_ddr_sdram (top_internal_reset_n),
      //.gm_rx_d_to_the_tse_mac (top_gm_rx_d_to_the_tse_mac),
      //.gm_rx_dv_to_the_tse_mac (top_gm_rx_dv_to_the_tse_mac),
      //.gm_rx_err_to_the_tse_mac (top_gm_rx_err_to_the_tse_mac),
      //.gm_tx_d_from_the_tse_mac (top_gm_tx_d_from_the_tse_mac),
      //.gm_tx_en_from_the_tse_mac (top_gm_tx_en_from_the_tse_mac),
      //.gm_tx_err_from_the_tse_mac (top_gm_tx_err_from_the_tse_mac),
      //.in_port_to_the_button_pio (top_in_port_to_the_button_pio),
     // .in_port_to_the_touch_panel_pen_irq_n (top_HSMB_ADC_PENIRQ_N),
     // .local_init_done_from_the_ddr2_sdram (top_local_init_done_from_the_ddr2_sdram),
      .local_init_done_from_the_ddr_sdram (top_local_init_done_from_the_ddr2_sdram_1),
    //  .local_refresh_ack_from_the_ddr2_sdram (top_local_refresh_ack_from_the_ddr2_sdram),
      .local_refresh_ack_from_the_ddr_sdram (top_local_refresh_ack_from_the_ddr2_sdram_1),
     // .local_wdata_req_from_the_ddr2_sdram (top_local_wdata_req_from_the_ddr2_sdram),
      .local_wdata_req_from_the_ddr_sdram (top_local_wdata_req_from_the_ddr2_sdram_1),
      //.m_rx_col_to_the_tse_mac (top_m_rx_col_to_the_tse_mac),
      //.m_rx_crs_to_the_tse_mac (top_m_rx_crs_to_the_tse_mac),
      //.m_rx_d_to_the_tse_mac (top_m_rx_d_to_the_tse_mac),
      ///.m_rx_en_to_the_tse_mac (top_m_rx_en_to_the_tse_mac),
     // .m_rx_err_to_the_tse_mac (top_m_rx_err_to_the_tse_mac),
     // .m_tx_d_from_the_tse_mac (top_m_tx_d_from_the_tse_mac),
      //.m_tx_en_from_the_tse_mac (top_m_tx_en_from_the_tse_mac),
      //.m_tx_err_from_the_tse_mac (top_m_tx_err_from_the_tse_mac),
      //.mdc_from_the_tse_mac (top_mdc_from_the_tse_mac),
     // .mdio_in_to_the_tse_mac (top_mdio_in_to_the_tse_mac),
     // .mdio_oen_from_the_tse_mac (top_mdio_oen_from_the_tse_mac),
     // .mdio_out_from_the_tse_mac (top_mdio_out_from_the_tse_mac),
      //.mem_addr_from_the_ddr2_sdram (top_ddr2bot_a),
      .mem_addr_from_the_ddr_sdram (top_ddr2top_a),
      //.mem_ba_from_the_ddr2_sdram (top_ddr2bot_ba),
      .mem_ba_from_the_ddr_sdram (top_ddr2top_ba),
      //.mem_cas_n_from_the_ddr2_sdram (top_ddr2bot_casn),
      .mem_cas_n_from_the_ddr_sdram (top_ddr2top_casn),
      //.mem_cke_from_the_ddr2_sdram (top_ddr2bot_cke),
      .mem_cke_from_the_ddr_sdram (top_ddr2top_cke),
      //.mem_clk_n_to_and_from_the_ddr2_sdram (top_ddr2_ck_n[0]),
      .mem_clk_n_to_and_from_the_ddr_sdram (top_ddr2_ck_n[1]),
      //.mem_clk_to_and_from_the_ddr2_sdram (top_ddr2_ck_p[0]),
      .mem_clk_to_and_from_the_ddr_sdram (top_ddr2_ck_p[1]),
      //.mem_cs_n_from_the_ddr2_sdram (top_ddr2bot_csn),
      .mem_cs_n_from_the_ddr_sdram (top_ddr2top_csn),
      //.mem_dm_from_the_ddr2_sdram (top_ddr2bot_dm),
      .mem_dm_from_the_ddr_sdram (top_ddr2top_dm),
      //.mem_dq_to_and_from_the_ddr2_sdram (top_ddr2bot_dq),
      .mem_dq_to_and_from_the_ddr_sdram (top_ddr2top_dq),
      //.mem_dqs_to_and_from_the_ddr2_sdram (top_ddr2bot_dqs),
      .mem_dqs_to_and_from_the_ddr_sdram (top_ddr2top_dqs),
      //.mem_odt_from_the_ddr2_sdram (top_ddr2bot_odt),
      .mem_odt_from_the_ddr_sdram (top_ddr2top_odt),
     // .mem_ras_n_from_the_ddr2_sdram (top_ddr2bot_rasn),
      .mem_ras_n_from_the_ddr_sdram (top_ddr2top_rasn),
     // .mem_we_n_from_the_ddr2_sdram (top_ddr2bot_wen),
      .mem_we_n_from_the_ddr_sdram (top_ddr2top_wen),
      //.oe_n_to_the_max2 (top_oe_n_to_the_max2),
      //.out_port_from_the_lcd_i2c_en (top_out_port_from_the_lcd_i2c_en),
      //.out_port_from_the_lcd_i2c_scl (top_out_port_from_the_lcd_i2c_scl),
      //.out_port_from_the_led_pio (top_led),
     // .out_port_from_the_pio_id_eeprom_scl (top_HSMB_ID_I2CSCL),
      .pll_c0_out (top_HSMB_LCD_NCLK),
      .pll_c2_out (top_pll_c2_out),
      .read_n_to_the_ext_flash (top_flash_oen),
      .reset_n (top_internal_reset_n),
      //.reset_phy_clk_n_from_the_ddr2_sdram (top_reset_phy_clk_n_from_the_ddr2_sdram),
      .reset_phy_clk_n_from_the_ddr_sdram (top_reset_phy_clk_n_from_the_ddr2_sdram_1),
     /// .rx_clk_to_the_tse_mac (top_rx_clk_to_the_tse_mac),
      //.rxd_to_the_uart1 (top_HSMB_UART_RXD),
      .select_n_to_the_ext_flash (top_flash_cen),
      //.set_1000_to_the_tse_mac (top_set_1000_to_the_tse_mac),
      //.set_10_to_the_tse_mac (top_set_10_to_the_tse_mac),
      //.tx_clk_to_the_tse_mac (top_tx_clk_to_the_tse_mac),
      //.txd_from_the_uart1 (top_HSMB_UART_TXD),
      //.we_n_to_the_max2 (top_we_n_to_the_max2),
      .write_n_to_the_ext_flash (top_flash_wen)
    );


  assign top_HSMB_SD_In = 1'b1;
  assign top_HSMB_SD_Wp = 1'b0;
  assign top_fsa = top_fsa_alignment[25 : 1];
  assign top_flash_resetn = top_internal_reset_n;
  assign top_internal_reset_n = top_reset_n;
  assign top_HSMB_SCEN = top_out_port_from_the_lcd_i2c_en;
  assign top_HSMB_ADC_CS_N = top_SS_n_from_the_touch_panel_spi;
  assign top_HSMB_ADC_DCLK = ~top_SS_n_from_the_touch_panel_spi ? top_SCLK_from_the_touch_panel_spi: (~top_out_port_from_the_lcd_i2c_en ? top_out_port_from_the_lcd_i2c_scl: 0);
  assign top_in_port_to_the_button_pio = top_button;
  gmii_mii_mux gmii_mii_mux_instance
    (
      .eth_mode (1'b0),
      .mdio (top_HSMB_MDIO),
      .mdio_in (top_mdio_in),
      .mdio_oen (top_mdio_oen),
      .mdio_out (top_mdio_out)
    );


  assign top_m_rx_col_to_the_tse_mac = top_HSMB_RX_COL;
  assign top_m_rx_crs_to_the_tse_mac = top_HSMB_RX_CRS;
  assign top_m_rx_d_to_the_tse_mac = top_HSMB_RX_D;
  assign top_m_rx_en_to_the_tse_mac = top_HSMB_RX_DV;
  assign top_m_rx_err_to_the_tse_mac = top_HSMB_RX_ERR;
  assign top_mdio_in_to_the_tse_mac = top_mdio_in;
  assign top_rx_clk_to_the_tse_mac = top_HSMB_RX_CLK;
  assign top_set_1000_to_the_tse_mac = 1'b0;
  assign top_set_10_to_the_tse_mac = 1'b0;
  assign top_tx_clk_to_the_tse_mac = top_HSMB_TX_CLK;
  assign top_HSMB_TX_D = top_m_tx_d_from_the_tse_mac;
  assign top_HSMB_TX_EN = top_m_tx_en_from_the_tse_mac;
  assign top_HSMB_MDC = top_mdc_from_the_tse_mac;
  assign top_mdio_oen = top_mdio_oen_from_the_tse_mac;
  assign top_mdio_out = top_mdio_out_from_the_tse_mac;
  assign top_HSMB_ETH_RESET_N = 1'b1;

endmodule

