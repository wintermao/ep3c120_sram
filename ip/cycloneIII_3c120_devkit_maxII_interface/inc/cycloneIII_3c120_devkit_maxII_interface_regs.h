/******************************************************************************
*                                                                             *
* License Agreement                                                           *
*                                                                             *
* Copyright (c) 2003 Altera Corporation, San Jose, California, USA.           *
* All rights reserved.                                                        *
*                                                                             *
* Permission is hereby granted, free of charge, to any person obtaining a     *
* copy of this software and associated documentation files (the "Software"),  *
* to deal in the Software without restriction, including without limitation   *
* the rights to use, copy, modify, merge, publish, distribute, sublicense,    *
* and/or sell copies of the Software, and to permit persons to whom the       *
* Software is furnished to do so, subject to the following conditions:        *
*                                                                             *
* The above copyright notice and this permission notice shall be included in  *
* all copies or substantial portions of the Software.                         *
*                                                                             *
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR  *
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,    *
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE *
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER      *
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING     *
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER         *
* DEALINGS IN THE SOFTWARE.                                                   *
*                                                                             *
* This agreement shall be governed in all respects by the laws of the State   *
* of California and by the laws of the United States of America.              *
*                                                                             *
******************************************************************************/

#ifndef __CYCLONEIII_3C120_DEVKIT_MAXII_REGS_H__
#define __CYCLONEIII_3C120_DEVKIT_MAXII_REGS_H__

#include <io.h>

#define CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_ID1_REG_OFFSET 0
#define CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_REGFILE2_REG_OFFSET 8
#define CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_REGFILE1_REG_OFFSET 16
#define CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_ID2_REG_OFFSET 24
#define CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_REGFILE2_REG_DEFAULT_VALUE 0x0E787FC0

#define IORD_CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_ID1(base)            IORD_32DIRECT(base, CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_ID1_REG_OFFSET)
#define IORD_CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_REGFILE2(base)       IORD_32DIRECT(base, CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_REGFILE2_REG_OFFSET)
#define IORD_CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_REGFILE1(base)       IORD_32DIRECT(base, CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_REGFILE1_REG_OFFSET)
#define IORD_CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_ID2(base)            IORD_32DIRECT(base, CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_ID2_REG_OFFSET)

#define IOWR_CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_ID1(base,data)       IOWR_32DIRECT(base, CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_ID1_REG_OFFSET,data)
#define IOWR_CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_REGFILE2(base,data)  IOWR_32DIRECT(base, CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_REGFILE2_REG_OFFSET,data)
#define IOWR_CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_REGFILE1(base,data)  IOWR_32DIRECT(base, CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_REGFILE1_REG_OFFSET,data)
#define IOWR_CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_ID2(base,data)       IOWR_32DIRECT(base, CYCLONEIII_3C120_DEVKIT_MAXII_INTERFACE_ID2_REG_OFFSET,data)

#endif /* __CYCLONEIII_3C120_DEVKIT_MAXII_REGS_H__ */
