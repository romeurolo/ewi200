
typedef unsigned char undefined;
typedef unsigned char bool;
typedef unsigned char byte;
typedef unsigned char uchar;
typedef unsigned long ulong;
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined3;
typedef unsigned int undefined4;
typedef unsigned short ushort;
typedef unsigned short word;
typedef struct CLK CLK, *PCLK;

struct CLK {
  byte CKDIVR;    // Clock master divider register
  byte CRTCR;     // Clock RTC register
  byte ICKCR;     // Internal clock control register
  byte PCKENR1;   // Peripheral clock gating register 1
  byte PCKENR2;   // Peripheral clock gating register 2
  byte CCOR;      // Configurable clock control register
  byte ECKR;      // External clock control register
  byte SCSR;      // Clock master status register
  byte SWR;       // Clock master switch register
  byte SWCR;      // Clock switch control register
  byte CSSR;      // Clock security system register
  byte CBEEPR;    // Clock BEEP register
  byte HSICALR;   // HSI calibration register
  byte HSITRIMR;  // HSI clock calibration trimming register
  byte HSIUNLCKR; // HSI unlock register
  byte REGCSR;    // Main regulator control status register
};

typedef struct SPI1 SPI1, *PSPI1;

struct SPI1 {
  byte CR1;    // SPI1 control register 1
  byte CR2;    // SPI1 control register 2
  byte ICR;    // SPI1 interrupt control register
  byte SR;     // SPI1 status register
  byte DR;     // SPI1 data register
  byte CRCPR;  // SPI1 CRC polynomial register
  byte RXCRCR; // SPI1 Rx CRC register
  byte TXCRCR; // SPI1 Tx CRC register
};

typedef struct COMP COMP, *PCOMP;

struct COMP {
  byte CSR1; // Comparator control and status register 1
  byte CSR2; // Comparator control and status register 2
  byte CSR3; // Comparator control and status register 3
  byte CSR4; // Comparator control and status register 4
  byte CSR5; // Comparator control and status register 5
};

typedef struct IWDG IWDG, *PIWDG;

struct IWDG {
  byte KR;  // IWDG key register
  byte PR;  // IWDG prescaler register
  byte RLR; // IWDG reload register
};

typedef struct PWR PWR, *PPWR;

struct PWR {
  byte CSR1; // Power control and status register 1
  byte CSR2; // Power control and status register 2
};

typedef struct FLASH FLASH, *PFLASH;

struct FLASH {
  byte CR1;   // Flash control register 1
  byte CR2;   // Flash control register 2
  byte PUKR;  // Flash program memory unprotection key register
  byte DUKR;  // Data EEPROM unprotection key register
  byte IAPSR; // Flash in-application programming status register
};

typedef struct BEEP BEEP, *PBEEP;

struct BEEP {
  byte CSR1; // BEEP control/status register 1
  undefined field1_0x1;
  undefined field2_0x2;
  byte CSR2; // BEEP control/status register 2
};

typedef struct RST RST, *PRST;

struct RST {
  byte CR; // Reset control register
  byte SR; // Reset status register
};

typedef struct I2C1 I2C1, *PI2C1;

struct I2C1 {
  byte CR1;   // I2C1 control register 1
  byte CR2;   // I2C1 control register 2
  byte FREQR; // I2C1 frequency register
  byte OARL;  // I2C1 own address register low
  byte OARH;  // I2C1 own address register high
  undefined field5_0x5;
  byte DR;     // I2C1 data register
  byte SR1;    // I2C1 status register 1
  byte SR2;    // I2C1 status register 2
  byte SR3;    // I2C1 status register 3
  byte ITR;    // I2C1 interrupt control register
  byte CCRL;   // I2C1 clock control register low
  byte CCRH;   // I2C1 clock control register high
  byte TRISER; // I2C1 TRISE register
  byte PECR;   // I2C1 packet error checking register
};

typedef struct RI RI, *PRI;

struct RI {
  byte ICR1;   // Timer input capture routing register 1
  byte ICR2;   // Timer input capture routing register 2
  byte IOIR1;  // I/O input register 1
  byte IOIR2;  // I/O input register 2
  byte IOIR3;  // I/O input register 3
  byte IOCMR1; // I/O control mode register 1
  byte IOCMR2; // I/O control mode register 2
  byte IOCMR3; // I/O control mode register 3
  byte IOSR1;  // I/O switch register 1
  byte IOSR2;  // I/O switch register 2
  byte IOSR3;  // I/O switch register 3
  byte IOGCR;  // I/O group control register
  byte ASCR1;  // Analog switch register 1
  byte ASCR2;  // Analog switch register 2
  byte RCR;    // Resistor control register 1
};

typedef struct RTC RTC, *PRTC;

struct RTC {
  byte TR1; // Time register 1
  byte TR2; // Time register 2
  byte TR3; // Time register 3
  undefined field3_0x3;
  byte DR1; // Date register 1
  byte DR2; // Date register 2
  byte DR3; // Date register 3
  undefined field7_0x7;
  byte CR1; // Control register 1
  byte CR2; // Control register 2
  byte CR3; // Control register 3
  undefined field11_0xb;
  byte ISR1; // Initialization and status register 1
  byte ISR2; // Initialization and Status register 2
  undefined field14_0xe;
  undefined field15_0xf;
  byte SPRERH; // Synchronous prescaler register high
  byte SPRERL; // Synchronous prescaler register low
  byte APRER;  // Asynchronous prescaler register
  undefined field19_0x13;
  byte WUTRH; // Wakeup timer register high
  byte WUTRL; // Wakeup timer register low
  undefined field22_0x16;
  undefined field23_0x17;
  undefined field24_0x18;
  byte WPR; // Write protection register
  undefined field26_0x1a;
  undefined field27_0x1b;
  byte ALRMAR1; // Alarm A register 1
  byte ALRMAR2; // Alarm A register 2
  byte ALRMAR3; // Alarm A register 3
  byte ALRMAR4; // Alarm A register 4
};

typedef struct WWDG WWDG, *PWWDG;

struct WWDG {
  byte CR; // WWDG control register
  byte WR; // WWDR window register
};

typedef struct USART1 USART1, *PUSART1;

struct USART1 {
  byte SR;   // USART1 status register
  byte DR;   // USART1 data register
  byte BRR1; // USART1 baud rate register 1
  byte BRR2; // USART1 baud rate register 2
  byte CR1;  // USART1 control register 1
  byte CR2;  // USART1 control register 2
  byte CR3;  // USART1 control register 3
  byte CR4;  // USART1 control register 4
  byte CR5;  // USART1 control register 5
  byte GTR;  // USART1 guard time register
  byte PSCR; // USART1 prescaler register
};

typedef struct WFE WFE, *PWFE;

struct WFE {
  byte CR1; // WFE control register 1
  byte CR2; // WFE control register 2
  byte CR3; // WFE control register 3
};

typedef struct DAC DAC, *PDAC;

struct DAC {
  byte CR1; // DAC control register 1
  byte CR2; // DAC control register 2
  undefined field2_0x2;
  undefined field3_0x3;
  byte SWTRIGR; // DAC software trigger register
  byte SR;      // DAC status register
  undefined field6_0x6;
  undefined field7_0x7;
  byte RDHRH; // DAC right aligned data holding register high
  byte RDHRL; // DAC right aligned data holding register low
  undefined field10_0xa;
  undefined field11_0xb;
  byte LDHRH; // DAC left aligned data holding register high
  byte LDHRL; // DAC left aligned data holding register low
  undefined field14_0xe;
  undefined field15_0xf;
  byte DHR8; // DAC 8-bit data holding register
  undefined field17_0x11;
  undefined field18_0x12;
  undefined field19_0x13;
  undefined field20_0x14;
  undefined field21_0x15;
  undefined field22_0x16;
  undefined field23_0x17;
  undefined field24_0x18;
  undefined field25_0x19;
  undefined field26_0x1a;
  undefined field27_0x1b;
  undefined field28_0x1c;
  undefined field29_0x1d;
  undefined field30_0x1e;
  undefined field31_0x1f;
  undefined field32_0x20;
  undefined field33_0x21;
  undefined field34_0x22;
  undefined field35_0x23;
  undefined field36_0x24;
  undefined field37_0x25;
  undefined field38_0x26;
  undefined field39_0x27;
  undefined field40_0x28;
  undefined field41_0x29;
  undefined field42_0x2a;
  undefined field43_0x2b;
  byte DORH; // DAC data output register high
  byte DORL; // DAC data output register low
};

typedef struct PORTE PORTE, *PPORTE;

struct PORTE {
  byte ODR; // Port E data output latch register
  byte IDR; // Port E input pin value register
  byte DDR; // Port E data direction register
  byte CR1; // Port E control register 1
  byte CR2; // Port E control register 2
};

typedef struct PORTF PORTF, *PPORTF;

struct PORTF {
  byte ODR; // Port F data output latch register
  byte IDR; // Port F input pin value register
  byte DDR; // Port F data direction register
  byte CR1; // Port F control register 1
  byte CR2; // Port F control register 2
};

typedef struct PORTA PORTA, *PPORTA;

struct PORTA {
  byte ODR; // Port A data output latch register
  byte IDR; // Port A input pin value register
  byte DDR; // Port A data direction register
  byte CR1; // Port A control register 1
  byte CR2; // Port A control register 2
};

typedef struct PORTB PORTB, *PPORTB;

struct PORTB {
  byte ODR; // Port B data output latch register
  byte IDR; // Port B input pin value register
  byte DDR; // Port B data direction register
  byte CR1; // Port B control register 1
  byte CR2; // Port B control register 2
};

typedef struct PORTC PORTC, *PPORTC;

struct PORTC {
  byte ODR; // Port C data output latch register
  byte IDR; // Port C input pin value register
  byte DDR; // Port C data direction register
  byte CR1; // Port C control register 1
  byte CR2; // Port C control register 2
};

typedef struct PORTD PORTD, *PPORTD;

struct PORTD {
  byte ODR; // Port D data output latch register
  byte IDR; // Port D input pin value register
  byte DDR; // Port D data direction register
  byte CR1; // Port D control register 1
  byte CR2; // Port D control register 2
};

typedef struct DMA1 DMA1, *PDMA1;

struct DMA1 {
  byte GCSR; // DMA1 global configuration & status register
  byte GIR1; // DMA1 global interrupt register 1
  undefined field2_0x2;
  undefined field3_0x3;
  undefined field4_0x4;
  byte C0CR;   // DMA1 channel 0 configuration register
  byte C0SPR;  // DMA1 channel 0 status
  byte C0NDTR; // DMA1 number of data to transfer register (channel 0)
  byte C0PARH; // DMA1 peripheral address high register (channel 0)
  byte C0PARL; // DMA1 peripheral address low register (channel 0)
  undefined field10_0xa;
  byte C0M0ARH; // DMA1 memory 0 address high register (channel 0)
  byte C0M0ARL; // DMA1 memory 0 address low register (channel 0)
  undefined field13_0xd;
  undefined field14_0xe;
  byte C1CR;   // DMA1 channel 1 configuration register
  byte C1SPR;  // DMA1 channel 1 status
  byte C1NDTR; // DMA1 number of data to transfer register (channel 1)
  byte C1PARH; // DMA1 peripheral address high register (channel 1)
  byte C1PARL; // DMA1 peripheral address low register (channel 1)
  undefined field20_0x14;
  byte C1M0ARH; // DMA1 memory 0 address high register (channel 1)
  byte C1M0ARL; // DMA1 memory 0 address low register (channel 1)
  undefined field23_0x17;
  undefined field24_0x18;
  byte C2CR;   // DMA1 channel 2 configuration register
  byte C2SPR;  // DMA1 channel 2 status
  byte C2NDTR; // DMA1 number of data to transfer register (channel 2)
  byte C2PARH; // DMA1 peripheral address high register (channel 2)
  byte C2PARL; // DMA1 peripheral address low register (channel 2)
  undefined field30_0x1e;
  byte C2M0ARH; // DMA1 memory 0 address high register (channel 2)
  byte C2M0ARL; // DMA1 memory 0 address low register (channel 2)
  undefined field33_0x21;
  undefined field34_0x22;
  byte C3CR;   // DMA1 channel 3 configuration register
  byte C3SPR;  // DMA1 channel 3 status
  byte C3NDTR; // DMA1 number of data to transfer register (channel 3)
  byte C3PARH; // DMA1 peripheral address high register (channel 3)
  byte C3PARL; // DMA1 peripheral address low register (channel 3)
  undefined field40_0x28;
  byte C3M0ARH; // DMA1 memory 0 address high register (channel 3)
  byte C3M0ARL; // DMA1 memory 0 address low register (channel 3)
};

typedef enum Fault_Codes {
  No Fault = 0,
  NTC1 OverTemp = 1,
  NTC2 OverTemp = 2,
  AC OverVoltage = 4,
  315 DC Bus Fault = 8,
  315 DC Bus Undervoltage = 16
} Fault_Codes;

typedef struct IRTIM IRTIM, *PIRTIM;

struct IRTIM {
  byte CR; // Infra-red control register
};

typedef struct CPU CPU, *PCPU;

struct CPU {
  byte A;   // Accumulator
  byte PCE; // Program counter extended
  byte PCH; // Program counter high
  byte PCL; // Program counter low
  byte XH;  // X index register high
  byte XL;  // X index register low
  byte YH;  // Y index register high
  byte YL;  // Y index register low
  byte SPH; // Stack pointer high
  byte SPL; // Stack pointer low
  byte CCR; // Condition code register
  undefined field11_0xb;
  undefined field12_0xc;
  undefined field13_0xd;
  undefined field14_0xe;
  undefined field15_0xf;
  undefined field16_0x10;
  undefined field17_0x11;
  undefined field18_0x12;
  undefined field19_0x13;
  undefined field20_0x14;
  undefined field21_0x15;
  undefined field22_0x16;
  undefined field23_0x17;
  undefined field24_0x18;
  undefined field25_0x19;
  undefined field26_0x1a;
  undefined field27_0x1b;
  undefined field28_0x1c;
  undefined field29_0x1d;
  undefined field30_0x1e;
  undefined field31_0x1f;
  undefined field32_0x20;
  undefined field33_0x21;
  undefined field34_0x22;
  undefined field35_0x23;
  undefined field36_0x24;
  undefined field37_0x25;
  undefined field38_0x26;
  undefined field39_0x27;
  undefined field40_0x28;
  undefined field41_0x29;
  undefined field42_0x2a;
  undefined field43_0x2b;
  undefined field44_0x2c;
  undefined field45_0x2d;
  undefined field46_0x2e;
  undefined field47_0x2f;
  undefined field48_0x30;
  undefined field49_0x31;
  undefined field50_0x32;
  undefined field51_0x33;
  undefined field52_0x34;
  undefined field53_0x35;
  undefined field54_0x36;
  undefined field55_0x37;
  undefined field56_0x38;
  undefined field57_0x39;
  undefined field58_0x3a;
  undefined field59_0x3b;
  undefined field60_0x3c;
  undefined field61_0x3d;
  undefined field62_0x3e;
  undefined field63_0x3f;
  undefined field64_0x40;
  undefined field65_0x41;
  undefined field66_0x42;
  undefined field67_0x43;
  undefined field68_0x44;
  undefined field69_0x45;
  undefined field70_0x46;
  undefined field71_0x47;
  undefined field72_0x48;
  undefined field73_0x49;
  undefined field74_0x4a;
  undefined field75_0x4b;
  undefined field76_0x4c;
  undefined field77_0x4d;
  undefined field78_0x4e;
  undefined field79_0x4f;
  undefined field80_0x50;
  undefined field81_0x51;
  undefined field82_0x52;
  undefined field83_0x53;
  undefined field84_0x54;
  undefined field85_0x55;
  undefined field86_0x56;
  undefined field87_0x57;
  undefined field88_0x58;
  undefined field89_0x59;
  undefined field90_0x5a;
  undefined field91_0x5b;
  undefined field92_0x5c;
  undefined field93_0x5d;
  undefined field94_0x5e;
  undefined field95_0x5f;
  byte CFG_GCR; // Global configuration register
};

typedef struct DM DM, *PDM;

struct DM {
  byte BK1RE;  // DM breakpoint 1 register extended byte
  byte BK1RH;  // DM breakpoint 1 register high byte
  byte BK1RL;  // DM breakpoint 1 register low byte
  byte BK2RE;  // DM breakpoint 2 register extended byte
  byte BK2RH;  // DM breakpoint 2 register high byte
  byte BK2RL;  // DM breakpoint 2 register low byte
  byte CR1;    // DM Debug module control register 1
  byte CR2;    // DM Debug module control register 2
  byte CSR1;   // DM Debug module control/status register 1
  byte CSR2;   // DM Debug module control/status register 2
  byte ENFCTR; // DM enable function register
};

typedef struct REMAP REMAP, *PREMAP;

struct REMAP {
  byte SYSCFG_RMPCR1; // Remapping register 1
  byte SYSCFG_RMPCR2; // Remapping register 2
};

typedef struct OPT OPT, *POPT;

struct OPT {
  byte OPT0; // Read-out protection (ROP)
  undefined field1_0x1;
  byte OPT1; // User boot code (UBC)
  undefined field3_0x3;
  undefined field4_0x4;
  undefined field5_0x5;
  undefined field6_0x6;
  undefined field7_0x7;
  byte OPT3;    // Watchdog option
  byte OPT4;    // Clock option
  byte OPT5;    // Brownout reset (BOR)
  byte OPTBL_H; // Bootloader (high byte)
  byte OPTBL_L; // Bootloader (low byte)
};

typedef struct ITC_SPR ITC_SPR, *PITC_SPR;

struct ITC_SPR {
  byte SPR1; // Interrupt Software priority register 1
  byte SPR2; // Interrupt Software priority register 2
  byte SPR3; // Interrupt Software priority register 3
  byte SPR4; // Interrupt Software priority register 4
  byte SPR5; // Interrupt Software priority register 5
  byte SPR6; // Interrupt Software priority register 6
  byte SPR7; // Interrupt Software priority register 7
  byte SPR8; // Interrupt Software priority register 8
};

typedef struct TIM4 TIM4, *PTIM4;

struct TIM4 {
  byte CR1;  // TIM4 control register 1
  byte CR2;  // TIM4 control register 2
  byte SMCR; // TIM4 Slave mode control register
  byte DER;  // TIM4 DMA1 request enable register
  byte IER;  // TIM4 Interrupt enable register
  byte SR1;  // TIM4 status register 1
  byte EGR;  // TIM4 Event generation register
  byte CNTR; // TIM4 counter
  byte PSCR; // TIM4 prescaler register
  byte ARR;  // TIM4 Auto-reload register
};

typedef struct TIM3 TIM3, *PTIM3;

struct TIM3 {
  byte CR1;   // TIM3 control register 1
  byte CR2;   // TIM3 control register 2
  byte SMCR;  // TIM3 Slave mode control register
  byte ETR;   // TIM3 external trigger register
  byte DER;   // TIM3 DMA1 request enable register
  byte IER;   // TIM3 interrupt enable register
  byte SR1;   // TIM3 status register 1
  byte SR2;   // TIM3 status register 2
  byte EGR;   // TIM3 event generation register
  byte CCMR1; // TIM3 Capture/Compare mode register 1
  byte CCMR2; // TIM3 Capture/Compare mode register 2
  byte CCER1; // TIM3 Capture/Compare enable register 1
  byte CNTRH; // TIM3 counter high
  byte CNTRL; // TIM3 counter low
  byte PSCR;  // TIM3 prescaler register
  byte ARRH;  // TIM3 Auto-reload register high
  byte ARRL;  // TIM3 Auto-reload register low
  byte CCR1H; // TIM3 Capture/Compare register 1 high
  byte CCR1L; // TIM3 Capture/Compare register 1 low
  byte CCR2H; // TIM3 Capture/Compare register 2 high
  byte CCR2L; // TIM3 Capture/Compare register 2 low
  byte BKR;   // TIM3 break register
  byte OISR;  // TIM3 output idle state register
};

typedef struct TIM2 TIM2, *PTIM2;

struct TIM2 {
  byte CR1;   // TIM2 control register 1
  byte CR2;   // TIM2 control register 2
  byte SMCR;  // TIM2 Slave mode control register
  byte ETR;   // TIM2 external trigger register
  byte DER;   // TIM2 DMA1 request enable register
  byte IER;   // TIM2 interrupt enable register
  byte SR1;   // TIM2 status register 1
  byte SR2;   // TIM2 status register 2
  byte EGR;   // TIM2 event generation register
  byte CCMR1; // TIM2 capture/compare mode register 1
  byte CCMR2; // TIM2 capture/compare mode register 2
  byte CCER1; // TIM2 capture/compare enable register 1
  byte CNTRH; // TIM2 counter high
  byte CNTRL; // TIM2 counter low
  byte PSCR;  // TIM2 prescaler register
  byte ARRH;  // TIM2 auto-reload register high
  byte ARRL;  // TIM2 auto-reload register low
  byte CCR1H; // TIM2 capture/compare register 1 high
  byte CCR1L; // TIM2 capture/compare register 1 low
  byte CCR2H; // TIM2 capture/compare register 2 high
  byte CCR2L; // TIM2 capture/compare register 2 low
  byte BKR;   // TIM2 break register
  byte OISR;  // TIM2 output idle state register
};

typedef struct TIM1 TIM1, *PTIM1;

struct TIM1 {
  byte CR1;   // TIM1 control register 1
  byte CR2;   // TIM1 control register 2
  byte SMCR;  // TIM1 Slave mode control register
  byte ETR;   // TIM1 external trigger register
  byte DER;   // TIM1 DMA1 request enable register
  byte IER;   // TIM1 Interrupt enable register
  byte SR1;   // TIM1 status register 1
  byte SR2;   // TIM1 status register 2
  byte EGR;   // TIM1 event generation register
  byte CCMR1; // TIM1 Capture/Compare mode register 1
  byte CCMR2; // TIM1 Capture/Compare mode register 2
  byte CCMR3; // TIM1 Capture/Compare mode register 3
  byte CCMR4; // TIM1 Capture/Compare mode register 4
  byte CCER1; // TIM1 Capture/Compare enable register 1
  byte CCER2; // TIM1 Capture/Compare enable register 2
  byte CNTRH; // TIM1 counter high
  byte CNTRL; // TIM1 counter low
  byte PSCRH; // TIM1 prescaler register high
  byte PSCRL; // TIM1 prescaler register low
  byte ARRH;  // TIM1 Auto-reload register high
  byte ARRL;  // TIM1 Auto-reload register low
  byte RCR;   // TIM1 Repetition counter register
  byte CCR1H; // TIM1 Capture/Compare register 1 high
  byte CCR1L; // TIM1 Capture/Compare register 1 low
  byte CCR2H; // TIM1 Capture/Compare register 2 high
  byte CCR2L; // TIM1 Capture/Compare register 2 low
  byte CCR3H; // TIM1 Capture/Compare register 3 high
  byte CCR3L; // TIM1 Capture/Compare register 3 low
  byte CCR4H; // TIM1 Capture/Compare register 4 high
  byte CCR4L; // TIM1 Capture/Compare register 4 low
  byte BKR;   // TIM1 break register
  byte DTR;   // TIM1 dead-time register
  byte OISR;  // TIM1 output idle state register
  byte DCR1;  // DMA1 control register 1
  byte DCR2;  // TIM1 DMA1 control register 2
  byte DMA1R; // TIM1 DMA1 address for burst mode
};

typedef struct ADC1 ADC1, *PADC1;

struct ADC1 {
  byte CR1;    // ADC1 configuration register 1
  byte CR2;    // ADC1 configuration register 2
  byte CR3;    // ADC1 configuration register 3
  byte SR;     // ADC1 status register
  byte DRH;    // ADC1 data register high
  byte DRL;    // ADC1 data register low
  byte HTRH;   // ADC1 high threshold register high
  byte HTRL;   // ADC1 high threshold register low
  byte LTRH;   // ADC1 low threshold register high
  byte LTRL;   // ADC1 low threshold register low
  byte SQR1;   // ADC1 channel sequence 1 register
  byte SQR2;   // ADC1 channel sequence 2 register
  byte SQR3;   // ADC1 channel sequence 3 register
  byte SQR4;   // ADC1 channel sequence 4 register
  byte TRIGR1; // ADC1 trigger disable 1
  byte TRIGR2; // ADC1 trigger disable 2
  byte TRIGR3; // ADC1 trigger disable 3
  byte TRIGR4; // ADC1 trigger disable 4
};

typedef struct SWIM SWIM, *PSWIM;

struct SWIM {
  byte CSR; // SWIM control status register
};

typedef struct ITC_EXTI ITC_EXTI, *PITC_EXTI;

struct ITC_EXTI {
  byte CR1;  // External interrupt control register 1
  byte CR2;  // External interrupt control register 2
  byte CR3;  // External interrupt control register 3
  byte SR1;  // External interrupt status register 1
  byte SR2;  // External interrupt status register 2
  byte CONF; // External interrupt port select register
};

typedef enum Machine_Status {
  Idle_1 = 0,
  Idle_2 = 1,
  TigRampUp = 2,
  Welding = 3,
  OverHeating / Error = 4,
  MmaRampUp = 5
} Machine_Status;

typedef enum WeldingType { Routilic = 1, Celulose = 2, Tig = 3 } WeldingType;

typedef enum System_State {
  Not Init = 0,
  Init / Booting = 1,
  System Ready = 2
} System_State;

typedef enum enum_47 {
  AES_Operation_Encryp = 0,
  AES_Operation_KeyDeriv = 2,
  AES_Operation_Decryp = 4,
  AES_Operation_KeyDerivAndDecryp = 6
} enum_47;

typedef enum enum_47 AES_Operation_TypeDef;

typedef enum enum_49 { AES_IT_CCIE = 32, AES_IT_ERRIE = 64 } enum_49;

typedef enum enum_49 AES_IT_TypeDef;

typedef enum enum_48 {
  AES_FLAG_CCF = 1,
  AES_FLAG_RDERR = 2,
  AES_FLAG_WRERR = 4
} enum_48;

typedef enum enum_48 AES_FLAG_TypeDef;

typedef enum enum_50 { AES_DMATransfer_InOut = 128 } enum_50;

typedef enum enum_50 AES_DMATransfer_TypeDef;

typedef short int16_t;

typedef char int8_t;

typedef enum enum_279 {
  TIM4_Prescaler_1 = 0,
  TIM4_Prescaler_2 = 1,
  TIM4_Prescaler_4 = 2,
  TIM4_Prescaler_8 = 3,
  TIM4_Prescaler_16 = 4,
  TIM4_Prescaler_32 = 5,
  TIM4_Prescaler_64 = 6,
  TIM4_Prescaler_128 = 7,
  TIM4_Prescaler_256 = 8,
  TIM4_Prescaler_512 = 9,
  TIM4_Prescaler_1024 = 10,
  TIM4_Prescaler_2048 = 11,
  TIM4_Prescaler_4096 = 12,
  TIM4_Prescaler_8192 = 13,
  TIM4_Prescaler_16384 = 14,
  TIM4_Prescaler_32768 = 15
} enum_279;

typedef enum enum_285 {
  TIM4_SlaveMode_Disable = 0,
  TIM4_SlaveMode_Reset = 4,
  TIM4_SlaveMode_Gated = 5,
  TIM4_SlaveMode_Trigger = 6,
  TIM4_SlaveMode_External1 = 7
} enum_285;

typedef enum enum_285 TIM4_SlaveMode_TypeDef;

typedef enum enum_282 {
  TIM4_UpdateSource_Global = 0,
  TIM4_UpdateSource_Regular = 1
} enum_282;

typedef enum enum_282 TIM4_UpdateSource_TypeDef;

typedef enum enum_280 {
  TIM4_OPMode_Repetitive = 0,
  TIM4_OPMode_Single = 1
} enum_280;

typedef enum enum_280 TIM4_OPMode_TypeDef;

typedef enum enum_281 {
  TIM4_PSCReloadMode_Update = 0,
  TIM4_PSCReloadMode_Immediate = 1
} enum_281;

typedef enum enum_281 TIM4_PSCReloadMode_TypeDef;

typedef enum enum_284 {
  TIM4_TRGOSource_Reset = 0,
  TIM4_TRGOSource_Enable = 16,
  TIM4_TRGOSource_Update = 32
} enum_284;

typedef enum enum_284 TIM4_TRGOSource_TypeDef;

typedef enum enum_286 { TIM4_FLAG_Update = 1, TIM4_FLAG_Trigger = 64 } enum_286;

typedef enum enum_286 TIM4_FLAG_TypeDef;

typedef enum enum_283 {
  TIM4_EventSource_Update = 1,
  TIM4_EventSource_Trigger = 64
} enum_283;

typedef enum enum_283 TIM4_EventSource_TypeDef;

typedef enum enum_289 { TIM4_DMASource_Update = 1 } enum_289;

typedef enum enum_288 {
  TIM4_TRGSelection_TIM5 = 0,
  TIM4_TRGSelection_TIM1 = 16,
  TIM4_TRGSelection_TIM3 = 32,
  TIM4_TRGSelection_TIM2 = 48
} enum_288;

typedef enum enum_287 { TIM4_IT_Update = 1, TIM4_IT_Trigger = 64 } enum_287;

typedef enum enum_289 TIM4_DMASource_TypeDef;

typedef enum enum_288 TIM4_TRGSelection_TypeDef;

typedef enum enum_279 TIM4_Prescaler_TypeDef;

typedef enum enum_287 TIM4_IT_TypeDef;

typedef enum enum_59 {
  CLK_RTCCLKDiv_1 = 0,
  CLK_RTCCLKDiv_2 = 32,
  CLK_RTCCLKDiv_4 = 64,
  CLK_RTCCLKDiv_8 = 96,
  CLK_RTCCLKDiv_16 = 128,
  CLK_RTCCLKDiv_32 = 160,
  CLK_RTCCLKDiv_64 = 192
} enum_59;

typedef enum enum_57 {
  CLK_BEEPCLKSource_Off = 0,
  CLK_BEEPCLKSource_LSI = 2,
  CLK_BEEPCLKSource_LSE = 4
} enum_57;

typedef enum enum_58 {
  CLK_RTCCLKSource_Off = 0,
  CLK_RTCCLKSource_HSI = 2,
  CLK_RTCCLKSource_LSI = 4,
  CLK_RTCCLKSource_HSE = 8,
  CLK_RTCCLKSource_LSE = 16
} enum_58;

typedef enum enum_64 {
  CLK_Halt_SlowWakeup = 16,
  CLK_Halt_FastWakeup = 32,
  CLK_Halt_BEEPRunning = 64
} enum_64;

typedef enum enum_62 {
  CLK_FLAG_RTCSWBSY = 0,
  CLK_FLAG_HSIRDY = 17,
  CLK_FLAG_LSIRDY = 19,
  CLK_FLAG_CCOBSY = 32,
  CLK_FLAG_HSERDY = 49,
  CLK_FLAG_LSERDY = 51,
  CLK_FLAG_SWBSY = 64,
  CLK_FLAG_AUX = 81,
  CLK_FLAG_CSSD = 83,
  CLK_FLAG_BEEPSWBSY = 96,
  CLK_FLAG_REGREADY = 112,
  CLK_FLAG_HSIPD = 114,
  CLK_FLAG_LSIPD = 115,
  CLK_FLAG_HSEPD = 116,
  CLK_FLAG_LSEPD = 117,
  CLK_FLAG_EEBUSY = 118,
  CLK_FLAG_EEREADY = 119,
  CLK_FLAG_LSECSSF = 131,
  CLK_FLAG_RTCCLKSWF = 132
} enum_62;

typedef enum enum_59 CLK_RTCCLKDiv_TypeDef;

typedef enum enum_63 {
  CLK_IT_CSSD = 12,
  CLK_IT_SWIF = 28,
  CLK_IT_LSECSSF = 44
} enum_63;

typedef enum enum_60 {
  CLK_Peripheral_TIM2 = 0,
  CLK_Peripheral_TIM3 = 1,
  CLK_Peripheral_TIM4 = 2,
  CLK_Peripheral_I2C1 = 3,
  CLK_Peripheral_SPI1 = 4,
  CLK_Peripheral_USART1 = 5,
  CLK_Peripheral_BEEP = 6,
  CLK_Peripheral_DAC = 7,
  CLK_Peripheral_ADC1 = 16,
  CLK_Peripheral_TIM1 = 17,
  CLK_Peripheral_RTC = 18,
  CLK_Peripheral_LCD = 19,
  CLK_Peripheral_DMA1 = 20,
  CLK_Peripheral_COMP = 21,
  CLK_Peripheral_BOOTROM = 23,
  CLK_Peripheral_AES = 32,
  CLK_Peripheral_TIM5 = 33,
  CLK_Peripheral_SPI2 = 34,
  CLK_Peripheral_USART2 = 35,
  CLK_Peripheral_USART3 = 36,
  CLK_Peripheral_CSSLSE = 37
} enum_60;

typedef enum enum_61 {
  CLK_SYSCLKDiv_1 = 0,
  CLK_SYSCLKDiv_2 = 1,
  CLK_SYSCLKDiv_4 = 2,
  CLK_SYSCLKDiv_8 = 3,
  CLK_SYSCLKDiv_16 = 4,
  CLK_SYSCLKDiv_32 = 5,
  CLK_SYSCLKDiv_64 = 6,
  CLK_SYSCLKDiv_128 = 7
} enum_61;

typedef enum enum_57 CLK_BEEPCLKSource_TypeDef;

typedef enum enum_55 {
  CLK_CCOSource_Off = 0,
  CLK_CCOSource_HSI = 2,
  CLK_CCOSource_LSI = 4,
  CLK_CCOSource_HSE = 8,
  CLK_CCOSource_LSE = 16
} enum_55;

typedef enum enum_56 {
  CLK_CCODiv_1 = 0,
  CLK_CCODiv_2 = 32,
  CLK_CCODiv_4 = 64,
  CLK_CCODiv_8 = 96,
  CLK_CCODiv_16 = 128,
  CLK_CCODiv_32 = 160,
  CLK_CCODiv_64 = 192
} enum_56;

typedef enum enum_53 {
  CLK_LSE_OFF = 0,
  CLK_LSE_ON = 4,
  CLK_LSE_Bypass = 36
} enum_53;

typedef enum enum_54 {
  CLK_SYSCLKSource_HSI = 1,
  CLK_SYSCLKSource_LSI = 2,
  CLK_SYSCLKSource_HSE = 4,
  CLK_SYSCLKSource_LSE = 8
} enum_54;

typedef enum enum_52 {
  CLK_HSE_OFF = 0,
  CLK_HSE_ON = 1,
  CLK_HSE_Bypass = 17
} enum_52;

typedef enum enum_63 CLK_IT_TypeDef;

typedef enum enum_53 CLK_LSE_TypeDef;

typedef enum enum_61 CLK_SYSCLKDiv_TypeDef;

typedef enum enum_56 CLK_CCODiv_TypeDef;

typedef enum enum_62 CLK_FLAG_TypeDef;

typedef enum enum_58 CLK_RTCCLKSource_TypeDef;

typedef enum enum_60 CLK_Peripheral_TypeDef;

typedef enum enum_54 CLK_SYSCLKSource_TypeDef;

typedef enum enum_55 CLK_CCOSource_TypeDef;

typedef enum enum_52 CLK_HSE_TypeDef;

typedef enum enum_64 CLK_Halt_TypeDef;

typedef enum enum_93 {
  EXTI_Pin_0 = 0,
  EXTI_Pin_1 = 2,
  EXTI_Pin_2 = 4,
  EXTI_Pin_3 = 6,
  EXTI_Pin_4 = 16,
  EXTI_Pin_5 = 18,
  EXTI_Pin_6 = 20,
  EXTI_Pin_7 = 22
} enum_93;

typedef enum enum_93 EXTI_Pin_TypeDef;

typedef enum enum_90 {
  EXTI_Trigger_Falling_Low = 0,
  EXTI_Trigger_Rising = 1,
  EXTI_Trigger_Falling = 2,
  EXTI_Trigger_Rising_Falling = 3
} enum_90;

typedef enum enum_90 EXTI_Trigger_TypeDef;

typedef enum enum_94 {
  EXTI_IT_Pin0 = 1,
  EXTI_IT_Pin1 = 2,
  EXTI_IT_Pin2 = 4,
  EXTI_IT_Pin3 = 8,
  EXTI_IT_Pin4 = 16,
  EXTI_IT_Pin5 = 32,
  EXTI_IT_Pin6 = 64,
  EXTI_IT_Pin7 = 128,
  EXTI_IT_PortB = 257,
  EXTI_IT_PortD = 258,
  EXTI_IT_PortE = 260,
  EXTI_IT_PortF = 264,
  EXTI_IT_PortG = 272,
  EXTI_IT_PortH = 288
} enum_94;

typedef enum enum_94 EXTI_IT_TypeDef;

typedef enum enum_92 {
  EXTI_Port_B = 0,
  EXTI_Port_D = 2,
  EXTI_Port_E = 4,
  EXTI_Port_F = 6,
  EXTI_Port_G = 16,
  EXTI_Port_H = 18
} enum_92;

typedef enum enum_92 EXTI_Port_TypeDef;

typedef enum enum_91 {
  EXTI_HalfPort_B_LSB = 1,
  EXTI_HalfPort_B_MSB = 2,
  EXTI_HalfPort_D_LSB = 4,
  EXTI_HalfPort_D_MSB = 8,
  EXTI_HalfPort_E_LSB = 16,
  EXTI_HalfPort_E_MSB = 32,
  EXTI_HalfPort_F_LSB = 64,
  EXTI_HalfPort_F_MSB = 129,
  EXTI_HalfPort_G_LSB = 130,
  EXTI_HalfPort_G_MSB = 132,
  EXTI_HalfPort_H_LSB = 136,
  EXTI_HalfPort_H_MSB = 144
} enum_91;

typedef enum enum_91 EXTI_HalfPort_TypeDef;

typedef enum enum_214 {
  TIM1_FLAG_Update = 1,
  TIM1_FLAG_CC1 = 2,
  TIM1_FLAG_CC2 = 4,
  TIM1_FLAG_CC3 = 8,
  TIM1_FLAG_CC4 = 16,
  TIM1_FLAG_COM = 32,
  TIM1_FLAG_Trigger = 64,
  TIM1_FLAG_Break = 128,
  TIM1_FLAG_CC1OF = 512,
  TIM1_FLAG_CC2OF = 1024,
  TIM1_FLAG_CC3OF = 2048,
  TIM1_FLAG_CC4OF = 4096
} enum_214;

typedef enum enum_213 {
  TIM1_SlaveMode_Reset = 4,
  TIM1_SlaveMode_Gated = 5,
  TIM1_SlaveMode_Trigger = 6,
  TIM1_SlaveMode_External1 = 7
} enum_213;

typedef enum enum_212 {
  TIM1_TRGOSource_Reset = 0,
  TIM1_TRGOSource_Enable = 16,
  TIM1_TRGOSource_Update = 32,
  TIM1_TRGOSource_OC1 = 48,
  TIM1_TRGOSource_OC1REF = 64,
  TIM1_TRGOSource_OC2REF = 80,
  TIM1_TRGOSource_OC3REF = 96,
  TIM1_TRGOSource_OC4REF = 112
} enum_212;

typedef enum enum_218 {
  TIM1_DMABurstLength_1Byte = 0,
  TIM1_DMABurstLength_2Byte = 1,
  TIM1_DMABurstLength_3Byte = 2,
  TIM1_DMABurstLength_4Byte = 3,
  TIM1_DMABurstLength_5Byte = 4,
  TIM1_DMABurstLength_6Byte = 5,
  TIM1_DMABurstLength_7Byte = 6,
  TIM1_DMABurstLength_8Byte = 7,
  TIM1_DMABurstLength_9Byte = 8,
  TIM1_DMABurstLength_10Byte = 9,
  TIM1_DMABurstLength_11Byte = 10,
  TIM1_DMABurstLength_12Byte = 11,
  TIM1_DMABurstLength_13Byte = 12,
  TIM1_DMABurstLength_14Byte = 13,
  TIM1_DMABurstLength_15Byte = 14,
  TIM1_DMABurstLength_16Byte = 15,
  TIM1_DMABurstLength_17Byte = 16,
  TIM1_DMABurstLength_18Byte = 17,
  TIM1_DMABurstLength_19Byte = 18,
  TIM1_DMABurstLength_20Byte = 19,
  TIM1_DMABurstLength_21Byte = 20,
  TIM1_DMABurstLength_22Byte = 21,
  TIM1_DMABurstLength_23Byte = 22,
  TIM1_DMABurstLength_24Byte = 23,
  TIM1_DMABurstLength_25Byte = 24,
  TIM1_DMABurstLength_26Byte = 25,
  TIM1_DMABurstLength_27Byte = 26,
  TIM1_DMABurstLength_28Byte = 27,
  TIM1_DMABurstLength_29Byte = 28,
  TIM1_DMABurstLength_30Byte = 29,
  TIM1_DMABurstLength_31Byte = 30,
  TIM1_DMABurstLength_32Byte = 31
} enum_218;

typedef enum enum_218 TIM1_DMABurstLength_TypeDef;

typedef enum enum_211 {
  TIM1_UpdateSource_Global = 0,
  TIM1_UpdateSource_Regular = 1
} enum_211;

typedef enum enum_210 {
  TIM1_EventSource_Update = 1,
  TIM1_EventSource_CC1 = 2,
  TIM1_EventSource_CC2 = 4,
  TIM1_EventSource_CC3 = 8,
  TIM1_EventSource_CC4 = 16,
  TIM1_EventSource_COM = 32,
  TIM1_EventSource_Trigger = 64,
  TIM1_EventSource_Break = 128
} enum_210;

typedef enum enum_207 {
  TIM1_ExtTRGPolarity_NonInverted = 0,
  TIM1_ExtTRGPolarity_Inverted = 128
} enum_207;

typedef enum enum_207 TIM1_ExtTRGPolarity_TypeDef;

typedef enum enum_184 {
  TIM1_OCMode_Timing = 0,
  TIM1_OCMode_Active = 16,
  TIM1_OCMode_Inactive = 32,
  TIM1_OCMode_Toggle = 48,
  TIM1_OCMode_PWM1 = 96,
  TIM1_OCMode_PWM2 = 112
} enum_184;

typedef enum enum_184 TIM1_OCMode_TypeDef;

typedef enum enum_217 {
  TIM1_DMABase_CR1 = 0,
  TIM1_DMABase_CR2 = 1,
  TIM1_DMABase_SMCR = 2,
  TIM1_DMABase_ETR = 3,
  TIM1_DMABase_DER = 4,
  TIM1_DMABase_IER = 5,
  TIM1_DMABase_SR1 = 6,
  TIM1_DMABase_SR2 = 7,
  TIM1_DMABase_EGR = 8,
  TIM1_DMABase_CCMR1 = 9,
  TIM1_DMABase_CCMR2 = 10,
  TIM1_DMABase_CCMR3 = 11,
  TIM1_DMABase_CCMR4 = 12,
  TIM1_DMABase_CCER1 = 13,
  TIM1_DMABase_CCER2 = 14,
  TIM1_DMABase_CNTH = 15,
  TIM1_DMABase_CNTL = 16,
  TIM1_DMABase_PSCH = 17,
  TIM1_DMABase_PSCL = 18,
  TIM1_DMABase_ARRH = 19,
  TIM1_DMABase_ARRL = 20,
  TIM1_DMABase_RCR = 21,
  TIM1_DMABase_CCR1H = 22,
  TIM1_DMABase_CCR1L = 23,
  TIM1_DMABase_CCR2H = 24,
  TIM1_DMABase_CCR2L = 25,
  TIM1_DMABase_CCR3H = 26,
  TIM1_DMABase_CCR3L = 27,
  TIM1_DMABase_CCR4H = 28,
  TIM1_DMABase_CCR4L = 29,
  TIM1_DMABase_BKR = 30,
  TIM1_DMABase_DTR = 31
} enum_217;

typedef enum enum_216 {
  TIM1_DMASource_Update = 1,
  TIM1_DMASource_CC1 = 2,
  TIM1_DMASource_CC2 = 4,
  TIM1_DMASource_CC3 = 8,
  TIM1_DMASource_CC4 = 16,
  TIM1_DMASource_COM = 32
} enum_216;

typedef enum enum_215 {
  TIM1_ForcedAction_Inactive = 64,
  TIM1_ForcedAction_Active = 80
} enum_215;

typedef enum enum_204 {
  TIM1_ExtTRGPSC_OFF = 0,
  TIM1_ExtTRGPSC_DIV2 = 16,
  TIM1_ExtTRGPSC_DIV4 = 32,
  TIM1_ExtTRGPSC_DIV8 = 48
} enum_204;

typedef enum enum_204 TIM1_ExtTRGPSC_TypeDef;

typedef enum enum_189 {
  TIM1_OCNPolarity_High = 0,
  TIM1_OCNPolarity_Low = 136
} enum_189;

typedef enum enum_188 {
  TIM1_OCPolarity_High = 0,
  TIM1_OCPolarity_Low = 34
} enum_188;

typedef enum enum_187 {
  TIM1_CounterMode_Up = 0,
  TIM1_CounterMode_Down = 16,
  TIM1_CounterMode_CenterAligned1 = 32,
  TIM1_CounterMode_CenterAligned2 = 64,
  TIM1_CounterMode_CenterAligned3 = 96
} enum_187;

typedef enum enum_186 {
  TIM1_Channel_1 = 0,
  TIM1_Channel_2 = 1,
  TIM1_Channel_3 = 2,
  TIM1_Channel_4 = 3
} enum_186;

typedef enum enum_185 {
  TIM1_OPMode_Repetitive = 0,
  TIM1_OPMode_Single = 1
} enum_185;

typedef enum enum_199 {
  TIM1_ICPolarity_Rising = 0,
  TIM1_ICPolarity_Falling = 1
} enum_199;

typedef enum enum_199 TIM1_ICPolarity_TypeDef;

typedef enum enum_210 TIM1_EventSource_TypeDef;

typedef enum enum_206 {
  TIM1_TIxExternalCLK1Source_TI1ED = 64,
  TIM1_TIxExternalCLK1Source_TI1 = 80,
  TIM1_TIxExternalCLK1Source_TI2 = 96
} enum_206;

typedef enum enum_206 TIM1_TIxExternalCLK1Source_TypeDef;

typedef enum enum_201 {
  TIM1_ICPSC_DIV1 = 0,
  TIM1_ICPSC_DIV2 = 4,
  TIM1_ICPSC_DIV4 = 8,
  TIM1_ICPSC_DIV8 = 12
} enum_201;

typedef enum enum_201 TIM1_ICPSC_TypeDef;

typedef enum enum_202 {
  TIM1_OCReferenceClear_OCREFCLR = 0,
  TIM1_OCReferenceClear_ETRF = 8
} enum_202;

typedef enum enum_202 TIM1_OCReferenceClear_TypeDef;

typedef enum enum_198 {
  TIM1_OCNIdleState_Reset = 0,
  TIM1_OCNIdleState_Set = 42
} enum_198;

typedef enum enum_197 {
  TIM1_OCIdleState_Reset = 0,
  TIM1_OCIdleState_Set = 85
} enum_197;

typedef enum enum_196 {
  TIM1_OSSIState_Disable = 0,
  TIM1_OSSIState_Enable = 4
} enum_196;

typedef enum enum_214 TIM1_FLAG_TypeDef;

typedef enum enum_191 {
  TIM1_OutputNState_Disable = 0,
  TIM1_OutputNState_Enable = 68
} enum_191;

typedef enum enum_191 TIM1_OutputNState_TypeDef;

typedef enum enum_195 {
  TIM1_LockLevel_Off = 0,
  TIM1_LockLevel_1 = 1,
  TIM1_LockLevel_2 = 2,
  TIM1_LockLevel_3 = 3
} enum_195;

typedef enum enum_205 {
  TIM1_TRGSelection_TIM4 = 0,
  TIM1_TRGSelection_TIM5 = 16,
  TIM1_TRGSelection_TIM3 = 32,
  TIM1_TRGSelection_TIM2 = 48,
  TIM1_TRGSelection_TI1F_ED = 64,
  TIM1_TRGSelection_TI1FP1 = 80,
  TIM1_TRGSelection_TI2FP2 = 96,
  TIM1_TRGSelection_ETRF = 112
} enum_205;

typedef enum enum_205 TIM1_TRGSelection_TypeDef;

typedef enum enum_194 {
  TIM1_AutomaticOutput_Disable = 0,
  TIM1_AutomaticOutput_Enable = 64
} enum_194;

typedef enum enum_193 {
  TIM1_BreakPolarity_Low = 0,
  TIM1_BreakPolarity_High = 32
} enum_193;

typedef enum enum_192 {
  TIM1_BreakState_Disable = 0,
  TIM1_BreakState_Enable = 16
} enum_192;

typedef enum enum_190 {
  TIM1_OutputState_Disable = 0,
  TIM1_OutputState_Enable = 17
} enum_190;

typedef enum enum_192 TIM1_BreakState_TypeDef;

typedef enum enum_197 TIM1_OCIdleState_TypeDef;

typedef enum enum_189 TIM1_OCNPolarity_TypeDef;

typedef enum enum_215 TIM1_ForcedAction_TypeDef;

typedef enum enum_194 TIM1_AutomaticOutput_TypeDef;

typedef enum enum_188 TIM1_OCPolarity_TypeDef;

typedef enum enum_217 TIM1_DMABase_TypeDef;

typedef enum enum_196 TIM1_OSSIState_TypeDef;

typedef enum enum_193 TIM1_BreakPolarity_TypeDef;

typedef enum enum_203 {
  TIM1_IT_Update = 1,
  TIM1_IT_CC1 = 2,
  TIM1_IT_CC2 = 4,
  TIM1_IT_CC3 = 8,
  TIM1_IT_CC4 = 16,
  TIM1_IT_COM = 32,
  TIM1_IT_Trigger = 64,
  TIM1_IT_Break = 128
} enum_203;

typedef enum enum_203 TIM1_IT_TypeDef;

typedef enum enum_190 TIM1_OutputState_TypeDef;

typedef enum enum_186 TIM1_Channel_TypeDef;

typedef enum enum_195 TIM1_LockLevel_TypeDef;

typedef enum enum_216 TIM1_DMASource_TypeDef;

typedef enum enum_208 {
  TIM1_PSCReloadMode_Update = 0,
  TIM1_PSCReloadMode_Immediate = 1
} enum_208;

typedef enum enum_208 TIM1_PSCReloadMode_TypeDef;

typedef enum enum_209 {
  TIM1_EncoderMode_TI1 = 1,
  TIM1_EncoderMode_TI2 = 2,
  TIM1_EncoderMode_TI12 = 3
} enum_209;

typedef enum enum_209 TIM1_EncoderMode_TypeDef;

typedef enum enum_211 TIM1_UpdateSource_TypeDef;

typedef enum enum_200 {
  TIM1_ICSelection_DirectTI = 1,
  TIM1_ICSelection_IndirectTI = 2,
  TIM1_ICSelection_TRGI = 3
} enum_200;

typedef enum enum_200 TIM1_ICSelection_TypeDef;

typedef enum enum_213 TIM1_SlaveMode_TypeDef;

typedef enum enum_212 TIM1_TRGOSource_TypeDef;

typedef enum enum_198 TIM1_OCNIdleState_TypeDef;

typedef enum enum_185 TIM1_OPMode_TypeDef;

typedef enum enum_187 TIM1_CounterMode_TypeDef;

typedef enum enum_101 {
  FLASH_FLAG_WR_PG_DIS = 1,
  FLASH_FLAG_PUL = 2,
  FLASH_FLAG_EOP = 4,
  FLASH_FLAG_DUL = 8,
  FLASH_FLAG_HVOFF = 64
} enum_101;

typedef enum enum_101 FLASH_FLAG_TypeDef;

typedef enum enum_100 {
  FLASH_PowerStatus_On = 0,
  FLASH_PowerStatus_IDDQDuringWaitMode = 4,
  FLASH_PowerStatus_IDDQDuringRunMode = 8,
  FLASH_PowerStatus_IDDQDuringWaitAndRunModes = 12
} enum_100;

typedef enum enum_100 FLASH_PowerStatus_TypeDef;

typedef enum enum_99 {
  FLASH_Status_Write_Protection_Error = 1,
  FLASH_Status_TimeOut = 2,
  FLASH_Status_Successful_Operation = 4
} enum_99;

typedef enum enum_97 {
  FLASH_ProgramTime_Standard = 0,
  FLASH_ProgramTime_TProg = 1
} enum_97;

typedef enum enum_98 { FLASH_Power_IDDQ = 0, FLASH_Power_On = 1 } enum_98;

typedef enum enum_95 {
  FLASH_MemType_Data = 247,
  FLASH_MemType_Program = 253
} enum_95;

typedef enum enum_96 {
  FLASH_ProgramMode_Standard = 0,
  FLASH_ProgramMode_Fast = 16
} enum_96;

typedef enum enum_99 FLASH_Status_TypeDef;

typedef enum enum_96 FLASH_ProgramMode_TypeDef;

typedef enum enum_95 FLASH_MemType_TypeDef;

typedef enum enum_97 FLASH_ProgramTime_TypeDef;

typedef enum enum_98 FLASH_Power_TypeDef;

#define FLASH_RASS_KEY1 86

#define FLASH_OPTION_BYTES_END_PHYSICAL_ADDRESS 18442

#define FLASH_DATA_EEPROM_START_PHYSICAL_ADDRESS 4096

#define FLASH_READOUTPROTECTION_KEY 170

#define FLASH_PROGRAM_START_PHYSICAL_ADDRESS 32768

#define FLASH_OPTION_BYTES_START_PHYSICAL_ADDRESS 18432

#define FLASH_RASS_KEY2 174

typedef enum enum_51 {
  BEEP_Frequency_1KHz = 0,
  BEEP_Frequency_2KHz = 64,
  BEEP_Frequency_4KHz = 128
} enum_51;

typedef enum enum_51 BEEP_Frequency_TypeDef;

#define LSI_FREQUENCY_MAX 75000

#define BEEP_CALIBRATION_DEFAULT 1

#define LSI_FREQUENCY_MIN 25000

typedef enum enum_103 {
  GPIO_Pin_0 = 1,
  GPIO_Pin_1 = 2,
  GPIO_Pin_2 = 4,
  GPIO_Pin_3 = 8,
  GPIO_Pin_LNib = 15,
  GPIO_Pin_4 = 16,
  GPIO_Pin_5 = 32,
  GPIO_Pin_6 = 64,
  GPIO_Pin_7 = 128,
  GPIO_Pin_HNib = 240,
  GPIO_Pin_All = 255
} enum_103;

typedef enum enum_102 {
  GPIO_Mode_In_FL_No_IT = 0,
  GPIO_Mode_In_FL_IT = 32,
  GPIO_Mode_In_PU_No_IT = 64,
  GPIO_Mode_In_PU_IT = 96,
  GPIO_Mode_Out_OD_Low_Slow = 128,
  GPIO_Mode_Out_OD_HiZ_Slow = 144,
  GPIO_Mode_Out_OD_Low_Fast = 160,
  GPIO_Mode_Out_OD_HiZ_Fast = 176,
  GPIO_Mode_Out_PP_Low_Slow = 192,
  GPIO_Mode_Out_PP_High_Slow = 208,
  GPIO_Mode_Out_PP_Low_Fast = 224,
  GPIO_Mode_Out_PP_High_Fast = 240
} enum_102;

typedef enum enum_102 GPIO_Mode_TypeDef;

typedef enum enum_103 GPIO_Pin_TypeDef;

typedef enum enum_134 {
  PWR_FLAG_VREFINTF = 1,
  PWR_FLAG_PVDIF = 32,
  PWR_FLAG_PVDOF = 64
} enum_134;

typedef enum enum_133 {
  PWR_PVDLevel_1V85 = 0,
  PWR_PVDLevel_2V05 = 2,
  PWR_PVDLevel_2V26 = 4,
  PWR_PVDLevel_2V45 = 6,
  PWR_PVDLevel_2V65 = 8,
  PWR_PVDLevel_2V85 = 10,
  PWR_PVDLevel_3V05 = 12,
  PWR_PVDLevel_PVDIn = 14
} enum_133;

typedef enum enum_133 PWR_PVDLevel_TypeDef;

typedef enum enum_134 PWR_FLAG_TypeDef;

typedef struct I2C_struct I2C_struct, *PI2C_struct;

typedef struct I2C_struct I2C_TypeDef;

typedef uchar uint8_t;

struct I2C_struct {
  uint8_t CR1;
  uint8_t CR2;
  uint8_t FREQR;
  uint8_t OARL;
  uint8_t OARH;
  uint8_t OAR2;
  uint8_t DR;
  uint8_t SR1;
  uint8_t SR2;
  uint8_t SR3;
  uint8_t ITR;
  uint8_t CCRL;
  uint8_t CCRH;
  uint8_t TRISER;
  uint8_t PECR;
};

typedef struct DMA_Channel_struct DMA_Channel_struct, *PDMA_Channel_struct;

struct DMA_Channel_struct {
  uint8_t CCR;
  uint8_t CSPR;
  uint8_t CNBTR;
  uint8_t CPARH;
  uint8_t CPARL;
  uint8_t CM0EAR;
  uint8_t CM0ARH;
  uint8_t CM0ARL;
};

typedef struct TIM_struct TIM_struct, *PTIM_struct;

typedef struct TIM_struct TIM_TypeDef;

struct TIM_struct {
  uint8_t CR1;
  uint8_t CR2;
  uint8_t SMCR;
  uint8_t ETR;
  uint8_t DER;
  uint8_t IER;
  uint8_t SR1;
  uint8_t SR2;
  uint8_t EGR;
  uint8_t CCMR1;
  uint8_t CCMR2;
  uint8_t CCER1;
  uint8_t CNTRH;
  uint8_t CNTRL;
  uint8_t PSCR;
  uint8_t ARRH;
  uint8_t ARRL;
  uint8_t CCR1H;
  uint8_t CCR1L;
  uint8_t CCR2H;
  uint8_t CCR2L;
  uint8_t BKR;
  uint8_t OISR;
};

typedef enum enum_2 { RESET = 0, SET = 1 } enum_2;

typedef enum enum_2 ITStatus;

typedef long int32_t;

typedef int32_t s32;

typedef struct SPI_struct SPI_struct, *PSPI_struct;

typedef struct SPI_struct SPI_TypeDef;

struct SPI_struct {
  uint8_t CR1;
  uint8_t CR2;
  uint8_t CR3;
  uint8_t SR;
  uint8_t DR;
  uint8_t CRCPR;
  uint8_t RXCRCR;
  uint8_t TXCRCR;
};

typedef int8_t s8;

typedef struct TIM4_struct TIM4_struct, *PTIM4_struct;

struct TIM4_struct {
  uint8_t CR1;
  uint8_t CR2;
  uint8_t SMCR;
  uint8_t DER;
  uint8_t IER;
  uint8_t SR1;
  uint8_t EGR;
  uint8_t CNTR;
  uint8_t PSCR;
  uint8_t ARR;
};

typedef struct OPT_struct OPT_struct, *POPT_struct;

struct OPT_struct {
  uint8_t ROP;
  uint8_t RESERVED1;
  uint8_t UBC;
  uint8_t RESERVED2;
  uint8_t RESERVED3;
  uint8_t RESERVED4;
  uint8_t RESERVED5;
  uint8_t PCODESIZE;
  uint8_t WDG;
  uint8_t XTSTARTUP;
  uint8_t BOR;
};

typedef struct AES_struct AES_struct, *PAES_struct;

struct AES_struct {
  uint8_t CR;
  uint8_t SR;
  uint8_t DINR;
  uint8_t DOUTR;
};

typedef struct AES_struct AES_TypeDef;

typedef struct FLASH_struct FLASH_struct, *PFLASH_struct;

typedef struct FLASH_struct FLASH_TypeDef;

struct FLASH_struct {
  uint8_t CR1;
  uint8_t CR2;
  uint8_t PUKR;
  uint8_t DUKR;
  uint8_t IAPSR;
};

typedef struct CSSLSE_struct CSSLSE_struct, *PCSSLSE_struct;

struct CSSLSE_struct {
  uint8_t CSR;
};

typedef struct RST_struct RST_struct, *PRST_struct;

typedef struct RST_struct RST_TypeDef;

struct RST_struct {
  uint8_t CR;
  uint8_t SR;
};

typedef struct WFE_struct WFE_struct, *PWFE_struct;

typedef struct WFE_struct WFE_TypeDef;

struct WFE_struct {
  uint8_t CR1;
  uint8_t CR2;
  uint8_t CR3;
  uint8_t CR4;
};

typedef struct DMA_Channel_struct DMA_Channel_TypeDef;

typedef struct DAC_struct DAC_struct, *PDAC_struct;

typedef struct DAC_struct DAC_TypeDef;

struct DAC_struct {
  uint8_t CH1CR1;
  uint8_t CH1CR2;
  uint8_t CH2CR1;
  uint8_t CH2CR2;
  uint8_t SWTRIGR;
  uint8_t SR;
  uint8_t RESERVED0[2];
  uint8_t CH1RDHRH;
  uint8_t CH1RDHRL;
  uint8_t RESERVED1[2];
  uint8_t CH1LDHRH;
  uint8_t CH1LDHRL;
  uint8_t RESERVED2[2];
  uint8_t CH1DHR8;
  uint8_t RESERVED3[3];
  uint8_t CH2RDHRH;
  uint8_t CH2RDHRL;
  uint8_t RESERVED4[2];
  uint8_t CH2LDHRH;
  uint8_t CH2LDHRL;
  uint8_t RESERVED5[2];
  uint8_t CH2DHR8;
  uint8_t RESERVED6[3];
  uint8_t DCH1RDHRH;
  uint8_t DCH1RDHRL;
  uint8_t DCH2RDHRH;
  uint8_t DCH2RDHRL;
  uint8_t DCH1LDHRH;
  uint8_t DCH1LDHRL;
  uint8_t DCH2LDHRH;
  uint8_t DCH2LDHRL;
  uint8_t DCH1DHR8;
  uint8_t DCH2DHR8;
  uint8_t RESERVED7[2];
  uint8_t CH1DORH;
  uint8_t CH1DORL;
  uint8_t RESERVED8[2];
  uint8_t CH2DORH;
  uint8_t CH2DORL;
};

typedef ushort uint16_t;

typedef uint16_t u16;

typedef struct EXTI_struct EXTI_struct, *PEXTI_struct;

struct EXTI_struct {
  uint8_t CR1;
  uint8_t CR2;
  uint8_t CR3;
  uint8_t SR1;
  uint8_t SR2;
  uint8_t CONF1;
  uint8_t RESERVED[4];
  uint8_t CR4;
  uint8_t CONF2;
};

typedef struct GPIO_struct GPIO_struct, *PGPIO_struct;

typedef struct GPIO_struct GPIO_TypeDef;

struct GPIO_struct {
  uint8_t ODR;
  uint8_t IDR;
  uint8_t DDR;
  uint8_t CR1;
  uint8_t CR2;
};

typedef struct COMP_struct COMP_struct, *PCOMP_struct;

typedef struct COMP_struct COMP_TypeDef;

struct COMP_struct {
  uint8_t CSR1;
  uint8_t CSR2;
  uint8_t CSR3;
  uint8_t CSR4;
  uint8_t CSR5;
};

typedef uint8_t u8;

typedef enum enum_2 BitAction;

typedef struct SYSCFG_struct SYSCFG_struct, *PSYSCFG_struct;

typedef struct SYSCFG_struct SYSCFG_TypeDef;

struct SYSCFG_struct {
  uint8_t RMPCR3;
  uint8_t RMPCR1;
  uint8_t RMPCR2;
};

typedef struct TIM1_struct TIM1_struct, *PTIM1_struct;

typedef struct TIM1_struct TIM1_TypeDef;

struct TIM1_struct {
  uint8_t CR1;
  uint8_t CR2;
  uint8_t SMCR;
  uint8_t ETR;
  uint8_t DER;
  uint8_t IER;
  uint8_t SR1;
  uint8_t SR2;
  uint8_t EGR;
  uint8_t CCMR1;
  uint8_t CCMR2;
  uint8_t CCMR3;
  uint8_t CCMR4;
  uint8_t CCER1;
  uint8_t CCER2;
  uint8_t CNTRH;
  uint8_t CNTRL;
  uint8_t PSCRH;
  uint8_t PSCRL;
  uint8_t ARRH;
  uint8_t ARRL;
  uint8_t RCR;
  uint8_t CCR1H;
  uint8_t CCR1L;
  uint8_t CCR2H;
  uint8_t CCR2L;
  uint8_t CCR3H;
  uint8_t CCR3L;
  uint8_t CCR4H;
  uint8_t CCR4L;
  uint8_t BKR;
  uint8_t DTR;
  uint8_t OISR;
  uint8_t DCR1;
  uint8_t DCR2;
  uint8_t DMAR;
};

typedef ulong uint32_t;

typedef struct LCD_struct LCD_struct, *PLCD_struct;

struct LCD_struct {
  uint8_t CR1;
  uint8_t CR2;
  uint8_t CR3;
  uint8_t FRQ;
  uint8_t PM[6];
  uint8_t RESERVED1[2];
  uint8_t RAM[22];
  uint8_t RESERVED2[13];
  uint8_t CR4;
};

typedef struct PWR_struct PWR_struct, *PPWR_struct;

typedef struct PWR_struct PWR_TypeDef;

struct PWR_struct {
  uint8_t CSR1;
  uint8_t CSR2;
};

typedef struct ADC_struct ADC_struct, *PADC_struct;

struct ADC_struct {
  uint8_t CR1;
  uint8_t CR2;
  uint8_t CR3;
  uint8_t SR;
  uint8_t DRH;
  uint8_t DRL;
  uint8_t HTRH;
  uint8_t HTRL;
  uint8_t LTRH;
  uint8_t LTRL;
  uint8_t SQR[4];
  uint8_t TRIGR[4];
};

typedef struct CLK_struct CLK_struct, *PCLK_struct;

struct CLK_struct {
  uint8_t CKDIVR;
  uint8_t CRTCR;
  uint8_t ICKCR;
  uint8_t PCKENR1;
  uint8_t PCKENR2;
  uint8_t CCOR;
  uint8_t ECKCR;
  uint8_t SCSR;
  uint8_t SWR;
  uint8_t SWCR;
  uint8_t CSSR;
  uint8_t CBEEPR;
  uint8_t HSICALR;
  uint8_t HSITRIMR;
  uint8_t HSIUNLCKR;
  uint8_t REGCSR;
  uint8_t PCKENR3;
};

typedef struct OPT_struct OPT_TypeDef;

typedef struct IRTIM_struct IRTIM_struct, *PIRTIM_struct;

typedef struct IRTIM_struct IRTIM_TypeDef;

struct IRTIM_struct {
  uint8_t CR;
};

typedef struct EXTI_struct EXTI_TypeDef;

typedef struct RTC_struct RTC_struct, *PRTC_struct;

typedef struct RTC_struct RTC_TypeDef;

struct RTC_struct {
  uint8_t TR1;
  uint8_t TR2;
  uint8_t TR3;
  uint8_t RESERVED0;
  uint8_t DR1;
  uint8_t DR2;
  uint8_t DR3;
  uint8_t RESERVED1;
  uint8_t CR1;
  uint8_t CR2;
  uint8_t CR3;
  uint8_t RESERVED2;
  uint8_t ISR1;
  uint8_t ISR2;
  uint8_t RESERVED3;
  uint8_t RESERVED4;
  uint8_t SPRERH;
  uint8_t SPRERL;
  uint8_t APRER;
  uint8_t RESERVED5;
  uint8_t WUTRH;
  uint8_t WUTRL;
  uint8_t RESERVED6;
  uint8_t SSRH;
  uint8_t SSRL;
  uint8_t WPR;
  uint8_t SHIFTRH;
  uint8_t SHIFTRL;
  uint8_t ALRMAR1;
  uint8_t ALRMAR2;
  uint8_t ALRMAR3;
  uint8_t ALRMAR4;
  uint8_t RESERVED7[4];
  uint8_t ALRMASSRH;
  uint8_t ALRMASSRL;
  uint8_t ALRMASSMSKR;
  uint8_t RESERVED8[3];
  uint8_t CALRH;
  uint8_t CALRL;
  uint8_t TCR1;
  uint8_t TCR2;
};

typedef struct LCD_struct LCD_TypeDef;

typedef enum enum_2 FlagStatus;

typedef struct CFG_struct CFG_struct, *PCFG_struct;

typedef struct CFG_struct CFG_TypeDef;

struct CFG_struct {
  uint8_t GCR;
};

typedef uint32_t u32;

typedef struct DMA_struct DMA_struct, *PDMA_struct;

struct DMA_struct {
  uint8_t GCSR;
  uint8_t GIR1;
};

typedef struct ITC_struct ITC_struct, *PITC_struct;

typedef struct ITC_struct ITC_TypeDef;

struct ITC_struct {
  uint8_t ISPR1;
  uint8_t ISPR2;
  uint8_t ISPR3;
  uint8_t ISPR4;
  uint8_t ISPR5;
  uint8_t ISPR6;
  uint8_t ISPR7;
  uint8_t ISPR8;
};

typedef struct TIM4_struct TIM4_TypeDef;

typedef struct WWDG_struct WWDG_struct, *PWWDG_struct;

struct WWDG_struct {
  uint8_t CR;
  uint8_t WR;
};

typedef struct USART_struct USART_struct, *PUSART_struct;

typedef struct USART_struct USART_TypeDef;

struct USART_struct {
  uint8_t SR;
  uint8_t DR;
  uint8_t BRR1;
  uint8_t BRR2;
  uint8_t CR1;
  uint8_t CR2;
  uint8_t CR3;
  uint8_t CR4;
  uint8_t CR5;
  uint8_t GTR;
  uint8_t PSCR;
};

typedef struct CLK_struct CLK_TypeDef;

typedef struct IWDG_struct IWDG_struct, *PIWDG_struct;

struct IWDG_struct {
  uint8_t KR;
  uint8_t PR;
  uint8_t RLR;
};

typedef struct BEEP_struct BEEP_struct, *PBEEP_struct;

typedef struct BEEP_struct BEEP_TypeDef;

struct BEEP_struct {
  uint8_t CSR1;
  uint8_t RSERVED1;
  uint8_t RESERVED2;
  uint8_t CSR2;
};

typedef enum enum_2 BitStatus;

typedef struct RI_struct RI_struct, *PRI_struct;

typedef struct RI_struct RI_TypeDef;

struct RI_struct {
  uint8_t RESERVED;
  uint8_t ICR1;
  uint8_t ICR2;
  uint8_t IOIR1;
  uint8_t IOIR2;
  uint8_t IOIR3;
  uint8_t IOCMR1;
  uint8_t IOCMR2;
  uint8_t IOCMR3;
  uint8_t IOSR1;
  uint8_t IOSR2;
  uint8_t IOSR3;
  uint8_t IOGCR;
  uint8_t ASCR1;
  uint8_t ASCR2;
  uint8_t RCR;
  uint8_t RESERVED1[16];
  uint8_t CR;
  uint8_t IOMR1;
  uint8_t IOMR2;
  uint8_t IOMR3;
  uint8_t IOMR4;
  uint8_t IOIR4;
  uint8_t IOCMR4;
  uint8_t IOSR4;
};

typedef struct DMA_struct DMA_TypeDef;

// WARNING! conflicting data type names: /stm8l15x.h/bool - /bool

typedef struct CSSLSE_struct CSSLSE_TypeDef;

typedef enum enum_4 { ERROR = 0, SUCCESS = 1 } enum_4;

typedef enum enum_4 ErrorStatus;

typedef int16_t s16;

typedef struct ADC_struct ADC_TypeDef;

typedef enum enum_3 { DISABLE = 0, ENABLE = 1 } enum_3;

typedef struct WWDG_struct WWDG_TypeDef;

typedef enum enum_1 { FALSE = 0, TRUE = 1 } enum_1;

typedef struct IWDG_struct IWDG_TypeDef;

typedef enum enum_3 FunctionalState;

#define DAC_SR_DMAUDR2 2

#define DAC_SR_DMAUDR1 1

#define USART1_BASE 21040

#define EXTI_CR1_P3IS 192

#define TIM_CNTRL_CNT 255

#define RTC_CR1_RESET_VALUE 0

#define CLK_CRTCR_RTCSWBSY 1

#define RTC_CR3_RESET_VALUE 0

#define TIM1_SR1_UIF 1

#define USART_CR2_TEN 8

#define RI_IOCMR1_CH4M 2

#define RTC_WPR_RESET_VALUE 0

#define TIM1_ETR_ETP 128

#define TIM4_SR1_UIF 1

#define CLK_PCKENR3_AES 1

#define RI_IOIR2_CH5I 2

#define TIM4_CR1_ARPE 128

#define SPI_SR_OVR 64

#define RI_IOSR3_CH21E 64

#define AES_DOUTR 255

#define WWDG_WR_MSB 128

#define RI_IOCMR3_RESET_VALUE 0

#define LCD_RAM_RESET_VALUE 0

#define TIM1_CCR2L_CCR2 255

#define RI_IOCMR1_RESET_VALUE 0

#define TIM1_EGR_BG 128

#define SPI_CR2_SSI 1

#define SPI_CR2_SSM 2

#define RI_IOCMR1_CH13M 16

#define RTC_SHIFTRH_ADD1S 128

#define TIM1_IER_CC2IE 4

#define COMP_CSR2_CMP2OUT 8

#define TIM1_ETR_ETF 15

#define RI_IOSR1_CH13E 16

#define TIM_OISR_OIS2 4

#define TIM_OISR_OIS1 1

#define RTC_DR1_RESET_VALUE 1

#define EXTI_CR4_PGIS 3

#define RTC_DR3_RESET_VALUE 0

#define SPI_CR2_CRCNEXT 16

#define TIM_SR1_TIF 64

#define SPI1_BASE 20992

#define RI_IOSR1_CH10E 8

#define RI_IOIR2_CH2I 1

#define TIM1_SMCR_RESET_VALUE 0

#define CLK_REGCSR_EEREADY 128

#define RTC_CR3_POL 16

#define LCD_CR4_B4 1

#define RI_IOCMR1_CH16M 32

#define USART_SR_TXE 128

#define DMA_GCSR_TO 252

#define LCD_CR4_PAGECOM 4

#define COMP_CSR3_RESET_VALUE 192

#define SYSCFG_RMPCR2_TIM23BKIN_REMAP 128

#define COMP_CSR1_RESET_VALUE 0

#define TIM1_CR2_CCPC 1

#define RI_IOCMR1_CH1M 1

#define ADC_TRIGR1_TSON 32

#define TIM1_DCR1_RESET_VALUE 0

#define TIM4_EGR_RESET_VALUE 0

#define DAC_SR_RESET_VALUE 0

#define RTC_ALRMAR4_RESET_VALUE 0

#define RTC_WPR_DisableKey2 83

#define RTC_WPR_DisableKey1 202

#define RTC_ALRMAR2_RESET_VALUE 0

#define RTC_ISR1_SHPF 8

#define COMP_CSR5_RESET_VALUE 0

#define DMA_CNBTR_NDT 255

#define ADC_SR_RESET_VALUE 0

#define CLK_ICKCR_HSION 1

#define RI_RCR_RESET_VALUE 0

#define RI_BASE 21552

#define SPI_CR1_CPHA 1

#define FLASH 20560

#define RTC_ALRMAR2_MSK2 128

#define CLK_PCKENR2_BOOTROM 128

#define CLK_PCKENR1_I2C1 8

#define RI_IOCMR1_CH19M 64

#define CLK_CSSR_CSSDGON 16

#define BEEP_BASE 20720

#define ADC_SQR4_RESET_VALUE 0

#define FLASH_IAPSR_PUL 2

#define COMP_CSR1_CMP1OUT 8

#define OPT_BASE 18432

#define TIM_CCMR_ICxF 240

#define SYSCFG_RMPCR3_RESET_VALUE 0

#define TIM4_EGR_TG 64

#define ADC_SQR4_CHSELS 255

#define CLK_CSSR_RESET_VALUE 0

#define USART3 21488

#define AREA 0

#define USART1 21040

#define USART2 21472

#define RTC_TCR1_TAMPIE 1

#define I2C_PECR_RESET_VALUE 0

#define __STM8L15X_STDPERIPH_VERSION_MAIN 1

#define RTC_SPRERH_RESET_VALUE 0

#define ADC_HTRH_HT 15

#define TIM4_EGR_UG 1

#define GPIOH_BASE 20515

#define TIM_DER_UDE 1

#define PWR_CR2_VREFINTF 1

#define TIM1_BASE 21168

#define TIM_SMCR_RESET_VALUE 0

#define TIM1_CCR4H_CCR4 255

#define LCD_FRQ_RESET_VALUE 0

#define TIM1_CR2_CCUS 4

#define RTC_TCR1_TAMP3LEVEL 64

#define TIM_ETR_ECE 64

#define TIM_CCMR_OCxPE 8

#define CLK_CCOR_CCOSEL 30

#define TIM1_BKR_AOE 64

#define DMA_CCR_RESET_VALUE 0

#define TIM_PSCR_PSC 7

#define GPIOA_BASE 20480

#define FLASH_PUKR_PUK 255

#define COMP_BASE 21568

#define DMA1_Channel0 20597

#define PWR_CSR2_FWU 4

#define TIM3_BASE 21120

#define WFE 20646

#define DMA1_Channel1 20607

#define DMA1_Channel2 20617

#define DMA1_Channel3 20627

#define SYSCFG_RMPCR3_TIM3CH1_REMAP 8

#define DMA_CPARH_RESET_VALUE 82

#define I2C_SR1_STOPF 16

#define DMA_CPARL_RESET_VALUE 0

#define ADC_CR3_RESET_VALUE 31

#define IWDG_BASE 20704

#define TIM_CR2_RESET_VALUE 0

#define RTC_ALRMAR3_HU 15

#define RTC_ALRMAR3_HT 48

#define I2C_SR2_PECERR 16

#define LCD_CR1_RESET_VALUE 0

#define ADC_TRIGR4_TRIG 255

#define RI_IOIR2_CH8I 4

#define TIM4_DER_RESET_VALUE 0

#define TIM1_CCR1H_CCR1 255

#define RTC_CR2_WUTE 4

#define I2C_CCRH_FS 128

#define RTC_ALRMASSMSKR_RESET_VALUE 0

#define TIM1_DCR2_DBL 31

#define CLK_ICKCR_RESET_VALUE 17

#define RI_IOCMR1_CH7M 4

#define RTC_ALRMAR4_WDSEL 64

#define AES_SR_WRERR 4

#define TIM_ETR_RESET_VALUE 0

#define TIM_SR2_CC1OF 2

#define RI_IOCMR3_CH6M 2

#define IRTIM_CR_HSEN 2

#define DMA_CCR_TCIE 2

#define SPI_SR_RXNE 1

#define USART_BRR1_DIVM 255

#define PWR_CSR1_PVDIEN 16

#define ADC_SQR1_CHSELS 63

#define PWR_CSR1_PVDOF 64

#define TIM1_SMCR_OCCS 8

#define TIM4_CR1_UDIS 2

#define I2C_CCRH_CCR 15

#define TIM_CNTRH_CNT 255

#define RI_IOSR2_CH8E 4

#define TIM4_SMCR_SMS 7

#define WFE_CR4_USART3_EV 8

#define I2C_SR1_BTF 4

#define CLK_ICKCR_FHWU 32

#define TIM4_SMCR_TS 112

#define DMA_CM0ARH_MA 255

#define RTC_ISR1_INITF 64

#define AES_DOUTR_RESET_VALUE 0

#define CSSLSE_BASE 20880

#define RI_IOSR2_CH5E 2

#define RTC_ISR1_INITS 16

#define CSSLSE_CSR_SWITCHEN 2

#define TIM1_SR1_CC3IF 8

#define I2C_CR2_ACK 4

#define RI_IOIR3_CH18I 32

#define COMP_CSR2_EF2 16

#define USART_BRR1_RESET_VALUE 0

#define RTC_ISR1_WUTWF 4

#define CLK_ECKCR_LSERDY 8

#define RTC_ALRMASSRL_ALSS 255

#define SPI_CR1_BR 56

#define TIM1_CCMR_CCxS 3

#define AES_CR_ERRC 16

#define USART_CR1_USARTD 32

#define TIM4_CNTR_CNT 255

#define SPI_CR3_RXIE 64

#define LCD_CR2_VSEL 1

#define ADC_CR1_ADON 1

#define SPI_CR3_TXDMAEN 2

#define RI_IOSR1_RESET_VALUE 0

#define CLK_PCKENR2_TIM1 2

#define CLK_HSICALR_RESET_VALUE 0

#define RI_IOIR3_CH15I 16

#define LCD_CR4_DUTY8 2

#define SYSCFG_RMPCR2_TIM3TRIG_REMAP1 4

#define SYSCFG_RMPCR2_TIM3TRIG_REMAP2 64

#define TIM1_ETR_RESET_VALUE 0

#define I2C_FREQR_RESET_VALUE 0

#define TIM1_EGR_CC2G 4

#define CLK_ICKCR_LSION 4

#define CLK_SCSR_RESET_VALUE 1

#define DAC_LDHRL_LDHRL 240

#define CLK_PCKENR2_LCD 8

#define USART_CR3_CPHA 2

#define COMP_CSR4_INVTRIG 7

#define COMP_CSR2_CMP2 3

#define TIM1_EGR_CC1G 2

#define TIM4_IER_RESET_VALUE 0

#define TIM1_CCR1L_RESET_VALUE 0

#define RST_SR_RESET_VALUE 1

#define TIM_SR1_RESET_VALUE 0

#define DMA_CCR_IDM 32

#define TIM_SR1_CC2IF 4

#define RST_SR_PORF 1

#define TIM1_CR2_RESET_VALUE 0

#define RI_IOCMR3_CH9M 4

#define I2C_CR1_RESET_VALUE 0

#define FLASH_DUKR_RESET_VALUE 86

#define ADC_TRIGR2_TRIG 255

#define RI_IOIR3_CH12I 8

#define RST 20656

#define TIM_CCR1L_CCR1 255

#define WWDG_CR_RESET_VALUE 127

#define EXTI_CR3_PDIS 12

#define RI_IOSR2_CH2E 1

#define TIM1_CCMR_OCM 112

#define RTC 20800

#define WWDG 20691

#define RST_BASE 20656

#define ADC_SQR2_RESET_VALUE 0

#define EXTI_CONF2_PGBS 32

#define EXTI_BASE 20640

#define USART_CR1_PIEN 1

#define CLK_HSIUNLCKR_HSIUNLCK 255

#define ADC_TRIGR1_RESET_VALUE 0

#define TIM1 21168

#define TIM2 21072

#define TIM3 21120

#define DAC_CR2_DMAUDRIE 32

#define RTC_ALRMAR2_MNU 15

#define TIM_ARRL_ARR 255

#define RTC_ALRMAR2_MNT 112

#define TIM1_RCR_RESET_VALUE 0

#define CLK_REGCSR_RESET_VALUE 185

#define RTC_ISR2_ALRAF 1

#define TIM_IER_CC2IE 4

#define TIM_ETR_ETP 128

#define TIM1_EGR_COMG 32

#define TIM1_CR2_CCDS 8

#define ADC_CR1_OVERIE 128

#define TIM_ETR_ETF 15

#define TIM1_CCER1_RESET_VALUE 0

#define TIM4 21216

#define AES_SR_RESET_VALUE 0

#define TIM5 21248

#define TIM1_EGR_CC4G 16

#define PWR_CSR1_PVDE 1

#define RI_IOSR3_CH18E 32

#define RST_CR_RESET_VALUE 0

#define RI_IOCMR3_CH24M 128

#define COMP_CSR2_IE2 32

#define COMP_CSR1_STE 4

#define SYSCFG_RMPCR1_RESET_VALUE 12

#define AES 21456

#define CFG_GCR_SWD 1

#define TIM1_EGR_CC3G 8

#define RTC_TCR1_TAMP3E 32

#define RI_IOSR3_CH12E 8

#define TIM1_SMCR_TS 112

#define __STM8L15X_STDPERIPH_VERSION_RC 0

#define TIM4_PSCR_PSC 15

#define I2C_OARL_ADD 254

#define LCD_CR3_RESET_VALUE 0

#define I2C_SR2_ARLO 2

#define RI_ASCR1_RESET_VALUE 0

#define RI_IOSR1_CH19E 64

#define LCD_CR1_B2 1

#define ADC_HTRL_HT 255

#define TIM_BKR_MOE 128

#define USART_CR3_CPOL 4

#define LCD_CR3_SOFC 8

#define RTC_TR2_RESET_VALUE 0

#define GPIOE_BASE 20500

#define EXTI_CR4_PHIS 12

#define TIM1_BKR_LOCK 3

#define COMP_CSR3_WNDWE 2

#define RI_IOCMR3_CH21M 64

#define TIM1_CCR3L_RESET_VALUE 0

#define RTC_TCR1_TAMP1E 2

#define TIM1_CCER1_CC2E 16

#define RI_IOSR1_CH16E 32

#define TIM_PSCR_RESET_VALUE 0

#define TIM1_CCER1_CC2P 32

#define TIM1_SR2_CC1OF 2

#define SPI_SR_TXE 2

#define TIM_IER_UIE 1

#define TIM_CR1_ARPE 128

#define DAC_LDHRL_RESET_VALUE 0

#define RTC_TCR1_TAMP2E 8

#define DMA_CCR_DTD 8

#define DMA_CCR_MEM 64

#define RI_IOCMR1_CH22M 128

#define TIM1_DER_CC4DE 16

#define SPI_SR_RESET_VALUE 2

#define DAC_RDHRL_RESET_VALUE 0

#define CSSLSE_CSR_SWITCHF 16

#define EXTI_CR2_P6IS 48

#define I2C_PECR_PEC 255

#define CLK_CSSR_CSSEN 1

#define I2C_CCRH_RESET_VALUE 0

#define RI_IOSR3_CH15E 16

#define FLASH_IAPSR_DUL 8

#define COMP_CSR3_VREFEN 4

#define AES_CR_CCIE 32

#define I2C_SR2_WUFH 32

#define TIM_SR1_BIF 128

#define RTC_SHIFTRH_RESET_VALUE 0

#define TIM1_IER_CC1IE 2

#define ADC_CR3_SMPT2 224

#define SYSCFG_RMPCR1_TIM4DMA_REMAP 12

#define SPI_SR_WKUP 8

#define DMA1_Channel2_BASE 20617

#define CLK_ECKCR_RESET_VALUE 0

#define LCD_PM_RESET_VALUE 0

#define CLK_PCKENR1_SPI1 16

#define CLK_CCOR_CCOSWBSY 1

#define TIM1_CCER1_CC2NE 64

#define TIM1_SR1_RESET_VALUE 0

#define RTC_TCR1_RESET_VALUE 0

#define DMA_C3PARH_RESET_VALUE 64

#define DMA_CPARH_PA 255

#define RTC_WUTRH_RESET_VALUE 255

#define RTC_BASE 20800

#define RTC_SHIFTRL_RESET_VALUE 0

#define TIM_EGR_RESET_VALUE 0

#define TIM1_CCER1_CC2NP 128

#define TIM4_DER_UDE 1

#define TIM4_SR1_TIF 64

#define RI_IOIR1_CH10I 8

#define RI_ASCR1_AS5 32

#define RI_ASCR1_AS6 64

#define RI_ASCR1_AS7 128

#define ADC_LTRL_RESET_VALUE 0

#define COMP_CSR3_INSEL 56

#define TIM_CNTRH_RESET_VALUE 0

#define RTC_DR3_YU 15

#define TIM_DER_CC2DE 4

#define RI_ASCR1_AS1 2

#define RI_ASCR1_AS2 4

#define RI_ASCR1_AS3 8

#define RI_ASCR1_AS4 16

#define RTC_DR3_YT 240

#define RI_ASCR1_AS0 1

#define RI_IOIR1_CH13I 16

#define CFG 32608

#define SPI_CR2_RXONLY 4

#define SPI_CR3_WKIE 16

#define RI 21552

#define TIM1_CCMR_OCxFE 4

#define WFE_CR3_USART1_EV 32

#define TIM5_BASE 21248

#define USART_CR2_RESET_VALUE 0

#define WFE_CR1_TIM2_EV0 1

#define WFE_CR1_TIM2_EV1 2

#define ADC_TRIGR1_VREFINTON 16

#define COMP_CSR3_OUTSEL 192

#define RTC_CR2_ALRAE 1

#define ADC_CR1_CONT 4

#define TIM1_CR1_OPM 8

#define TIM1_CCMR4_RESET_VALUE 0

#define EXTI_CONF2_RESET_VALUE 0

#define I2C_SR2_AF 4

#define WFE_CR4_AES_EV 64

#define TIM1_ARRH_ARR 255

#define EXTI_CR1_P0IS 3

#define WFE_CR3_TIM4_EV 4

#define RI_IOGCR_RESET_VALUE 255

#define IRTIM_BASE 21247

#define I2C_SR1_RESET_VALUE 0

#define RI_IOIR1_CH16I 32

#define TIM_SMCR_TS 112

#define DAC_SWTRIGR_SWTRIG1 1

#define EXTI_CR4_RESET_VALUE 0

#define CLK_CBEEPR_RESET_VALUE 0

#define DAC_SWTRIGR_SWTRIG2 2

#define CLK_CSSR_AUX 2

#define TIM1_CCMR_OCxCE 128

#define U8_MAX 255

#define TIM1_CR2_MMS 112

#define RTC_TCR1_TAMP1LEVEL 4

#define GPIO_CR1_RESET_VALUE 0

#define AES_SR_RDERR 2

#define CLK_PCKENR3_TIM5 2

#define RTC_ALRMASSRH_RESET_VALUE 0

#define DAC_CR2_DMAEN 16

#define RTC_CALRH_CALP 128

#define RTC_CALRH_CALM 1

#define FLASH_CR2_RESET_VALUE 0

#define FLASH_CR1_RESET_VALUE 0

#define DAC_SWTRIGR_RESET_VALUE 0

#define DMA_CSPR_RESET_VALUE 0

#define FLASH_BASE 20560

#define CLK_SCSR_CKM 15

#define SYSCFG_RMPCR3_TIM3CH2_REMAP 16

#define ADC_TRIGR3_RESET_VALUE 0

#define ADC_TRIGR4_RESET_VALUE 0

#define ADC_DRL_CONVDATA 255

#define I2C_CR2_SWRST 128

#define __STM8L15X_STDPERIPH_VERSION_SUB1 6

#define OPT 18432

#define __STM8L15X_STDPERIPH_VERSION_SUB2 1

#define DAC_CR1_RESET_VALUE 0

#define CLK_ECKCR_HSEBYP 16

#define WFE_CR1_EXTI_EV1 32

#define WFE_CR1_EXTI_EV0 16

#define WFE_CR1_EXTI_EV3 128

#define RTC_ISR2_RESET_VALUE 0

#define WFE_CR1_EXTI_EV2 64

#define CLK_CRTCR_RESET_VALUE 0

#define TIM_SMCR_SMS 7

#define SPI_SR_MODF 32

#define CLK_PCKENR3_RESET_VALUE 0

#define USART_CR5_HDSEL 8

#define RTC_ISR1_RECALPF 2

#define TIM1_DTR_RESET_VALUE 0

#define TIM_BKR_BKE 16

#define TIM4_CR1_URS 4

#define TIM1_CR1_RESET_VALUE 0

#define TIM1_BKR_OSSR 8

#define TIM1_DER_COMDE 32

#define PWR_BASE 20658

#define TIM1_BKR_OSSI 4

#define TIM_CCR2H_RESET_VALUE 0

#define __STM8L15X_STDPERIPH_VERSION 17170688

#define USART_CR3_RESET_VALUE 0

#define TIM1_CCMR3_RESET_VALUE 0

#define DMA_CSPR_PL 48

#define RTC_CR2_ALRIE 32

#define DMA1_BASE 20592

#define TIM_SR2_CC2OF 4

#define EXTI_CONF1_PDLIS 4

#define DMA_CSPR_TCIF 2

#define TIM_EGR_UG 1

#define USART_CR1_WAKE 8

#define RI_ICR1_IC2CS 31

#define ADC_CR2_SMPT1 7

#define I2C_SR3_GENCALL 16

#define EXTI_CONF1_PFES 128

#define DAC_CR1_EN 1

#define I2C_SR2_RESET_VALUE 0

#define BEEP_CSR2_BEEPSEL 192

#define CSSLSE_CSR_CSSF 8

#define TIM_BKR_BKP 32

#define ADC_SQR1_DMAOFF 128

#define TIM_EGR_TG 64

#define AES_CR_CCFC 8

#define EXTI_CR1_RESET_VALUE 0

#define ADC1_BASE 21312

#define FLASH_IAPSR_WR_PG_DIS 1

#define TIM1_CCR2L_RESET_VALUE 0

#define RTC_ISR2_WUTF 4

#define CLK_CRTCR_RTCSEL 30

#define RTC_CR3_COSEL 8

#define I2C_CR1_NOSTRETCH 128

#define RTC_TR3_PM 64

#define TIM1_EGR_TG 64

#define CLK_CKDIVR_CKM 7

#define TIM1_DER_CC1DE 2

#define RTC_ALRMASSRH_ALSS 127

#define RTC_ALRMAR4_MSK4 128

#define TIM1_CCR1L_CCR1 255

#define DM 32656

#define FLASH_PUKR_RESET_VALUE 174

#define AES_BASE 21456

#define RTC_TR2_MNU 15

#define RTC_TR2_MNT 112

#define WFE_CR3_TIM3_EV0 1

#define GPIOG_BASE 20510

#define WFE_CR3_TIM3_EV1 2

#define ADC_DRH_RESET_VALUE 0

#define FLASH_CR2_FPRG 16

#define RTC_ISR1_ALRAWF 1

#define TIM_BKR_AOE 64

#define TIM1_CCMR_OCxPE 8

#define WFE_CR3_DMA1CH23_EV 128

#define TIM_CCMR2_RESET_VALUE 0

#define COMP 21568

#define RI_IOSR3_RESET_VALUE 0

#define GPIOD_BASE 20495

#define TIM1_SR1_CC2IF 4

#define TIM1_ARRL_ARR 255

#define DMA_CCR_ARM 16

#define RST_SR_WWDGF 16

#define TIM4_PSCR_RESET_VALUE 0

#define I2C_ITR_LAST 16

#define RI_IOCMR3_CH18M 32

#define CLK_ICKCR_HSIRDY 2

#define TIM4_CR2_RESET_VALUE 0

#define I2C_TRISER_TRISE 63

#define TIM1_BKR_RESET_VALUE 0

#define ADC_CR2_TRIGEDGE 96

#define DAC_DORL_DORL 255

#define ADC_HTRL_RESET_VALUE 255

#define RI_ASCR2_RESET_VALUE 0

#define USART_CR3_CLKEN 8

#define EXTI_CONF2_PHHIS 16

#define BEEP_CSR1_RESET_VALUE 0

#define CSSLSE_CSR_CSSEN 1

#define TIM1_IER_COMIE 32

#define LCD_CR2_RESET_VALUE 0

#define RTC_ALRMAR1_MSK1 128

#define RTC_TR1_RESET_VALUE 0

#define TIM_CCMR_OCxFE 4

#define DMA_GCSR_GE 1

#define TIM1_BKR_BKP 32

#define DMA_GCSR_GB 2

#define RTC_SPRERL_RESET_VALUE 255

#define IRTIM_CR_EN 1

#define TIM1_BKR_BKE 16

#define TIM1_CCR1H_RESET_VALUE 0

#define EXTI_CONF1_PDHIS 8

#define RTC_ISR1_RSF 32

#define ADC_CR1_EOCIE 8

#define CLK_PCKENR2_COMP 32

#define I2C_SR1_SB 1

#define LCD_FRQ_PS 240

#define RI_IOCMR3_CH15M 16

#define I2C_OAR2_ADD2 254

#define TIM_IER_CC1IE 2

#define RTC_TR3_HU 15

#define RTC_TR3_HT 48

#define ADC_CR1_RES 96

#define RI_IOCMR2_CH5M 2

#define U16_MAX 65535

#define TIM1_CCR4L_CCR4 255

#define FLASH_IAPSR_RESET_VALUE 64

#define EXTI_CONF2_PHDS 64

#define ADC_SQR3_RESET_VALUE 0

#define FLASH_IAPSR_EOP 4

#define DAC_LDHRH_RESET_VALUE 0

#define ADC_SQR2_CHSELS 255

#define I2C_DR_RESET_VALUE 0

#define TIM_CCER1_CC1E 1

#define DMA_CM0ARL_RESET_VALUE 0

#define FLASH_CR2_OPT 128

#define TIM_CCER1_CC1P 2

#define USART_CR5_DMAT 128

#define USART_CR5_DMAR 64

#define AES_DINR_RESET_VALUE 0

#define CLK_HSICALR_HSICAL 255

#define RI_IOSR3_CH6E 2

#define TIM_CCER1_CC2E 16

#define WWDG_WR_W 127

#define I2C_SR2_TIMEOUT 64

#define RI_IOIR3_CH6I 2

#define WWDG_CR_T6 64

#define CSSLSE_CSR_CSSIE 4

#define LCD_FRQ_DIV 15

#define RI_IOCMR2_CH14M 16

#define I2C_OARH_ADDMODE 128

#define ADC_TRIGR3_TRIG 255

#define CLK_PCKENR3_UASRT2 8

#define RI_IOIR3_CH9I 4

#define IWDG_PR_RESET_VALUE 0

#define RI_IOCMR3_CH12M 8

#define TIM1_CCR3L_CCR3 255

#define RI_IOCMR2_CH8M 4

#define SYSCFG_RMPCR2_RESET_VALUE 0

#define CSSLSE_CSR_RESET_VALUE 0

#define SPI_CR1_MSTR 4

#define IWDG_RLR_RESET_VALUE 255

#define SYSCFG_RMPCR1_ADC1DMA_REMAP 3

#define CLK_ECKCR_HSEON 1

#define CLK_SWCR_SWIEN 4

#define TIM1_SR2_CC2OF 4

#define WFE_CR3_SPI1_EV 8

#define RI_IOIR3_CH3I 1

#define I2C_CR1_ENGC 64

#define RST_SR_BORF 32

#define DAC_DHR8_8DHR 255

#define RI_IOCMR2_CH11M 8

#define COMP_CSR2_SPEED 4

#define EXTI_CONF2_PHLIS 8

#define RI_IOCMR2_CH2M 1

#define EXTI_CR2_P5IS 12

#define RTC_CR3_COE 128

#define TIM2_BASE 21072

#define TIM_EGR_BG 128

#define CLK_ICKCR_BEEPAHALT 64

#define TIM_CCER1_CC2P 32

#define S16_MIN -32768

#define COMP_CSR5_VREFTRIG 7

#define RI_IOSR3_CH9E 4

#define I2C_CR2_RESET_VALUE 0

#define DMA_CNBTR_RESET_VALUE 0

#define TIM4_ARR_ARR 255

#define AES_CR_DMAEN 128

#define SPI_SR_BSY 128

#define RI_IOCMR1_CH10M 8

#define TIM1_EGR_UG 1

#define SPI_CR3_RESET_VALUE 0

#define USART_CR2_RIEN 32

#define TIM_CCMR_ICxPSC 12

#define I2C_CR2_POS 8

#define GPIO_DDR_RESET_VALUE 0

#define TIM_CR1_OPM 8

#define CLK_HSIUNLCKR_RESET_VALUE 0

#define RTC_CR2_RESET_VALUE 0

#define LCD_CR2_CC 14

#define CLK_PCKENR1_USART1 32

#define TIM_OISR_RESET_VALUE 0

#define DAC_CR2_MAMPx 15

#define SPI_TXCRCR_RESET_VALUE 0

#define CLK_PCKENR1_BEEP 64

#define I2C_ITR_RESET_VALUE 0

#define I2C_CR2_STOP 2

#define CCMR_TIxDirect_Set 1

#define RTC_CALRL_RESET_VALUE 0

#define TIM_ARRL_RESET_VALUE 255

#define RI_IOCMR2_RESET_VALUE 0

#define RI_IOCMR4_RESET_VALUE 0

#define EXTI_CONF2_PGLIS 2

#define AES_CR_ERRIE 64

#define S32_MAX 2147483647

#define CLK_CSSR_CSSD 8

#define TIM_ARRH_RESET_VALUE 255

#define I2C1_BASE 21008

#define I2C_CR1_SMBTYPE 8

#define RI_IOIR1_CH22I 128

#define RTC_CR2_ALRAIE 16

#define RTC_DR2_RESET_VALUE 33

#define SPI_CR1_SPE 64

#define RTC_CALRH_RESET_VALUE 0

#define TIM4_CNTR_RESET_VALUE 0

#define TIM1_CCER1_CC1NE 4

#define USART_CR3_STOP 48

#define EXTI_CR1_P1IS 12

#define RI_IOSR3_CH3E 1

#define LCD_CR2_HD 16

#define TIM1_CCER1_CC1NP 8

#define TIM1_EGR_RESET_VALUE 0

#define I2C_CR1_ARP 16

#define TIM_CR1_RESET_VALUE 0

#define TIM_IER_BIE 128

#define TIM1_IER_TIE 64

#define HSI_VALUE 16000000

#define TIM_DER_CC1DE 2

#define USART_CR4_ADD 15

#define DMA_GIR1_IFC0 1

#define DMA_GIR1_IFC2 4

#define DMA_GIR1_IFC1 2

#define TIM4_IER_TIE 64

#define COMP_CSR1_CMP1 3

#define CLK_CKDIVR_RESET_VALUE 3

#define GPIOB_BASE 20485

#define SPI_CR2_BDOE 64

#define USART_CR5_NACK 16

#define DMA_CSPR_HTIF 4

#define S16_MAX 32767

#define CLK_ECKCR_LSEBYP 32

#define WFE_CR3_I2C1_EV 16

#define SYSCFG_RMPCR1_SPI1_REMAP 128

#define GPIOI_BASE 20520

#define TIM_CCMR_OCM 112

#define ITC_SPRX_RESET_VALUE 255

#define TIM1_IER_CC4IE 16

#define RI_IOCMR2_CH17M 32

#define FLASH_CR1_FIX 1

#define I2C_SR3_BUSY 2

#define ADC_CR3_CHSEL 31

#define RI_IOIR1_CH1I 1

#define WFE_CRX_RESET_VALUE 0

#define ADC_SQR1_RESET_VALUE 0

#define CLK_CCOR_CCODIV 224

#define RTC_CR3_SUB1H 2

#define SYSCFG_RMPCR3_USART3CK_REMAP 4

#define TIM1_CCMR_ICxPSC 12

#define RTC_DR1_DT 48

#define RTC_DR1_DU 15

#define S8_MIN -128

#define RI_ICR2_IC3CS 31

#define LCD_CR3_SOF 16

#define USART_BRR2_DIVF 15

#define USART_CR2_TCIEN 64

#define CLK_ECKCR_LSEON 4

#define USART_BRR2_DIVM 240

#define RTC_ALRMAR3_MSK3 128

#define DMA_GIR1_IFC3 8

#define S32_MIN -2147483648

#define RTC_ALRMAR1_ST 112

#define RTC_ALRMAR1_SU 15

#define AES_CR_EN 1

#define CLK_SWCR_RESET_VALUE 0

#define ITC_BASE 32624

#define EXTI_CONF1_PELIS 16

#define TIM1_DCR1_DBA 31

#define TIM1_ARRH_RESET_VALUE 255

#define RTC_CALRL_CALM 255

#define SPI_CR2_CRCEN 32

#define SPI_CR3_ERRIE 32

#define I2C_OARL_ADD0 1

#define TIM1_ARRL_RESET_VALUE 255

#define LCD_CR2_PON 224

#define TIM_BKR_RESET_VALUE 0

#define TIM_CR2_MMS 112

#define DAC_DORH_RESET_VALUE 0

#define RTC_DR2_WDU 224

#define CLK_PCKENR2_ADC1 1

#define USART_CR2_REN 4

#define DAC_DORL_RESET_VALUE 0

#define CLK_PCKENR1_TIM3 2

#define CLK_PCKENR1_TIM2 1

#define DAC 21376

#define CLK_PCKENR1_TIM4 4

#define FLASH_CR2_ERASE 32

#define TIM1_CCER2_CC3NP 8

#define CLK_HSITRIMR_RESET_VALUE 0

#define COMP_CSR2_RESET_VALUE 0

#define TIM_BKR_LOCK 3

#define SPI2 21440

#define SPI1 20992

#define TIM1_CCER2_CC3NE 4

#define TIM1_OISR_RESET_VALUE 0

#define I2C_OARH_ADDCONF 64

#define TIM_CCR1H_CCR1 255

#define TIM1_CNTRH_RESET_VALUE 0

#define TIM1_DER_RESET_VALUE 0

#define CLK_CCOR_RESET_VALUE 0

#define RTC_ALRMAR1_RESET_VALUE 0

#define PWR 20658

#define TIM1_SR1_BIF 128

#define TIM1_DMAR_RESET_VALUE 0

#define LCD_CR3_SOFIE 32

#define TIM1_CR1_ARPE 128

#define RI_IOCMR2_CH20M 64

#define TIM1_CCR2H_RESET_VALUE 0

#define RI_IOSR2_CH11E 8

#define FLASH_IAPSR_HVOFF 64

#define LSE_VALUE 32768

#define CLK_ICKCR_LSIRDY 8

#define ADC1 21312

#define WWDG_BASE 20691

#define TIM1_CNTRL_RESET_VALUE 0

#define TIM1_SMCR_MSM 128

#define TIM1_OISR_OIS2N 8

#define CLK_SWR_RESET_VALUE 1

#define USART_BRR2_RESET_VALUE 0

#define RTC_TCR2_TAMPFLT 24

#define ADC_DRL_RESET_VALUE 0

#define RTC_ALRMASSMSKR_MASKSS 31

#define I2C_SR1_ADD10 8

#define I2C_SR3_SMBDEFAULT 32

#define TIM_EGR_CC2G 4

#define LCD_CR3_LCDEN 64

#define I2C_ITR_ITERREN 1

#define CLK_PCKENR3_SPI2 4

#define TIM1_OISR_OIS3N 32

#define FLASH_DUKR_DUK 255

#define TIM1_DER_CC2DE 4

#define EXTI_CR3_PBIS 3

#define I2C_OARH_ADD 6

#define EXTI_CONF1_PEHIS 32

#define RTC_TCR2_TAMPFREQ 7

#define I2C_SR3_MSL 1

#define LCD 21504

#define I2C_CCRH_DUTY 64

#define DMA_CCR_CE 1

#define DAC_CR1_TEN 4

#define TIM1_CCR4H_RESET_VALUE 0

#define RI_IOSR1_CH1E 1

#define LCD_CR1_BLINKF 56

#define RTC_CR3_BCK 4

#define I2C1 21008

#define ADC_LTRL_LT 255

#define PWR_CSR2_ULP 2

#define SPI2_BASE 21440

#define DMA1_Channel0_BASE 20597

#define TIM1_OISR_OIS1N 2

#define RTC_ISR1_INIT 128

#define RI_IOIR2_CH11I 8

#define TIM_EGR_CC1G 2

#define TIM_CR2_CCDS 8

#define ADC_CR2_RESET_VALUE 0

#define RTC_ISR2_TAMP3F 128

#define TIM4_CR1_CEN 1

#define SYSCFG_RMPCR3_USART3TR_REMAP 2

#define I2C_CR2_START 1

#define LCD_CR4_MAPCOM 8

#define TIM_CCR2L_CCR2 255

#define RI_IOSR1_CH4E 2

#define CLK_ECKCR_HSERDY 2

#define I2C_CR2_PEC 16

#define COMP_CSR1_EF1 16

#define RTC_ISR2_TAMP2F 64

#define RI_ASCR2_AS14 64

#define RI_ASCR2_AS11 8

#define USART_CR5_SCEN 32

#define FLASH_CR2_PRG 1

#define RI_ASCR2_AS10 4

#define AES_CR_RESET_VALUE 0

#define TIM1_CR1_CEN 1

#define RTC_ISR2_TAMP1F 32

#define RTC_WPR_EnableKey 255

#define I2C_OARH_RESET_VALUE 0

#define TIM1_SR1_CC1IF 2

#define SPI_CR2_RESET_VALUE 0

#define TIM_CR1_CMS 96

#define PWR_CSR1_RESET_VALUE 0

#define RTC_SHIFTRH_SUBFS 127

#define RI_IOIR2_CH14I 16

#define I2C_SR1_ADDR 2

#define TIM_CCMR_TIxDirect_Set 1

#define ADC_LTRH_LT 15

#define TIM1_IER_BIE 128

#define TIM_CR2_TI1S 128

#define DMA1_Channel3_BASE 20627

#define USART2_BASE 21472

#define RTC_CR3_OSEL 96

#define SYSCFG_RMPCR3_CCO_REMAP 32

#define RI_IOSR1_CH7E 4

#define RI_IOGCR_IOM2 12

#define RI_IOGCR_IOM3 48

#define RI_IOGCR_IOM1 3

#define CFG_GCR_AL 2

#define CLK_PCKENR2_DMA1 16

#define SPI_CR3_TXIE 128

#define TIM4_SMCR_RESET_VALUE 0

#define CLK 20672

#define SYSCFG_RMPCR2_TIM2TRIG_LSE 8

#define DAC_LDHRH_LDHRH 255

#define RI_IOIR1_CH7I 4

#define EXTI_SR1_RESET_VALUE 0

#define COMP_CSR3_VREFOUTEN 1

#define DMA_GCSR_RESET_VALUE 252

#define CLK_REGCSR_REGOFF 2

#define TIM1_SR2_CC3OF 8

#define EXTI_CONF2_PGHIS 4

#define SPI_CR3_RXDMAEN 1

#define ADC_HTRH_RESET_VALUE 15

#define USART_CR1_M 16

#define RI_IOIR1_CH4I 2

#define RI_IOIR2_CH17I 32

#define CLK_PCKENR1_RESET_VALUE 0

#define DMA_CM0ARH_RESET_VALUE 0

#define EXTI_CR2_P4IS 3

#define RI_IOIR1_CH19I 64

#define RI_IOSR4_RESET_VALUE 0

#define TIM4_BASE 21216

#define TIM1_PSCRH_RESET_VALUE 0

#define SPI_SR_CRCERR 16

#define TIM_ETR_ETPS 48

#define RTC_SHIFTRL_SUBFS 255

#define WFE_CR4_TIM5_EV0 16

#define WFE_CR4_TIM5_EV1 32

#define TIM1_CCMR1_RESET_VALUE 0

#define WFE_CR2_EXTI_EV4 1

#define RI_IOCMR2_CH23M 128

#define WFE_CR2_EXTI_EV6 4

#define WFE_CR2_EXTI_EV5 2

#define SYSCFG_RMPCR2_SPI2_REMAP 32

#define TIM_BKR_OSSI 4

#define WFE_CR2_EXTI_EV7 8

#define USART_CR2_RWU 2

#define BEEP_CSR2_RESET_VALUE 31

#define RI_IOSR2_CH14E 16

#define USART_SR_IDLE 16

#define CFG_BASE 32608

#define TIM1_DCR2_RESET_VALUE 0

#define RI_ICR2_RESET_VALUE 0

#define DMA1 20592

#define RTC_ALRMAR3_RESET_VALUE 0

#define IRTIM_CR_RESET_VALUE 0

#define DMA_CPARL_PA 255

#define RI_IOGCR_IOM4 192

#define RI_IOSR2_CH17E 32

#define I2C_SR2_OVR 8

#define TIM1_CR1_CMS 96

#define LCD_CR3_DEAD 7

#define TIM1_CR1_UDIS 2

#define LCD_CR1_BLINK 192

#define USART_SR_RESET_VALUE 192

#define TIM_CR1_CEN 1

#define I2C_SR3_DUALF 128

#define TIM1_RCR_REP 255

#define COMP_CSR1_IE1 32

#define AES_SR_CCF 1

#define EXTI 20640

#define EXTI_CR3_RESET_VALUE 0

#define DMA_GIR1_RESET_VALUE 0

#define TIM1_BKR_MOE 128

#define EXTI_CONF1_PBLIS 1

#define RTC_CR1_RATIO 32

#define USART_SR_RXNE 32

#define ADC_SQR3_CHSELS 255

#define TIM_CCR1H_RESET_VALUE 0

#define CLK_PCKENR1_DAC 128

#define TIM1_DER_UDE 1

#define TIM_CCR1L_RESET_VALUE 0

#define ADC_LTRH_RESET_VALUE 0

#define TIM_IER_TIE 64

#define TIM1_CCMR_ICxF 240

#define I2C_ITR_ITBUFEN 4

#define TIM1_CCER1_CC1E 1

#define RTC_CR1_FMT 64

#define TIM1_CCER1_CC1P 2

#define DAC_CR1_TSEL 56

#define SYSCFG_RMPCR1_USART1TR_REMAP 48

#define RST_SR_SWIMF 8

#define TIM4_SR1_RESET_VALUE 0

#define EXTI_CR1_P2IS 48

#define TIM1_SR2_RESET_VALUE 0

#define RTC_TCR2_RESET_VALUE 0

#define TIM_DER_RESET_VALUE 0

#define TIM1_SR1_COMIF 32

#define TIM1_SR1_TIF 64

#define RTC_WUTRL_RESET_VALUE 255

#define I2C_CCRL_CCR 255

#define TIM_CNTRL_RESET_VALUE 0

#define RI_RCR_10KPU 1

#define AES_CR_MODE 6

#define WFE_CR2_EXTI_EVBG 16

#define ADC_SR_OVER 4

#define TIM1_SMCR_SMS 7

#define CLK_REGCSR_REGREADY 1

#define TIM4_IER_UIE 1

#define RI_IOSR1_CH22E 128

#define I2C_SR1_RXNE 64

#define I2C_FREQR_FREQ 63

#define TIM1_DMAR_VR 255

#define RI_RCR_10KPD 4

#define WFE_CR2_ADC1_COMP_EV 128

#define RTC_CR1_WUCKSEL 7

#define TIM1_CCMR2_RESET_VALUE 0

#define TIM1_IER_CC3IE 8

#define RTC_APRER_RESET_VALUE 127

#define TIM4_CR2_MMS 112

#define TIM4_ARR_RESET_VALUE 255

#define ITC 32624

#define COMP_CSR4_NINVTRIG 56

#define WWDG_CR_T 127

#define USART_CR2_TIEN 128

#define USART_CR4_RESET_VALUE 0

#define AES_DINR 255

#define I2C_CR2_ALERT 32

#define SPI_CRCPR_RESET_VALUE 7

#define DMA_CM0ARL_MA 255

#define TIM4_CR1_OPM 8

#define RI_ASCR2_AS8 1

#define ADC_CR2_EXTSEL 24

#define RI_ASCR2_AS9 2

#define I2C_SR3_RESET_VALUE 0

#define GPIO_ODR_RESET_VALUE 0

#define TIM_ARRH_ARR 255

#define USART_CR2_ILIEN 16

#define DAC_DHR8_RESET_VALUE 0

#define FLASH_CR2_WPRG 64

#define EXTI_CR2_RESET_VALUE 0

#define TIM1_IER_UIE 1

#define USART_CR2_SBK 1

#define RTC_ALRMASSRL_RESET_VALUE 0

#define DAC_DORH_DORH 15

#define EXTI_CONF1_PBHIS 2

#define I2C_CR1_PE 1

#define U32_MAX 4294967295

#define SPI_RXCRCR_RESET_VALUE 0

#define I2C_CR1_SMBUS 2

#define PWR_CSR1_PLS 14

#define ADC_TRIGR1_TRIG 15

#define USART_CR5_IRLP 4

#define TIM1_CCR3H_CCR3 255

#define RTC_ISR1_RESET_VALUE 7

#define TIM_SR1_UIF 1

#define CLK_CBEEPR_CLKBEEPSEL 6

#define TIM1_ETR_ETPS 48

#define CLK_SWR_SWI 15

#define TIM1_CCER2_CC3E 1

#define FLASH_CR1_WAITM 4

#define RI_IOIR3_CH21I 64

#define TIM1_CCER2_CC3P 2

#define WFE_CR1_TIM1_EV0 4

#define WFE_CR1_TIM1_EV1 8

#define I2C_ITR_ITEVTEN 2

#define TIM1_CCER2_CC4E 16

#define SYSCFG_RMPCR1_USART1CK_REMAP 64

#define FLASH_CR1_EEPM 8

#define CLK_CBEEPR_BEEPSWBSY 1

#define USART_CR3_LBCL 1

#define EXTI_CR3_PFIS 192

#define CLK_PCKENR2_RESET_VALUE 128

#define TIM1_CNTRL_CNT 255

#define TIM1_CCER2_CC4P 32

#define I2C_SR2_SMBALERT 128

#define TIM1_OISR_OIS3 16

#define RTC_CALRH_CALW8 64

#define SYSCFG_RMPCR2_ADC1TRIG_REMAP 1

#define TIM1_OISR_OIS2 4

#define CLK_BASE 20672

#define TIM1_OISR_OIS1 1

#define LCD_CR1_DUTY 6

#define ADC_SR_EOC 1

#define RI_IOSR2_RESET_VALUE 0

#define TIM1_PSCL_PSC 255

#define I2C_SR3_TRA 4

#define RTC_ALRMAR4_DT 48

#define LSI_VALUE 38000

#define TIM4_CR1_RESET_VALUE 0

#define RTC_ALRMAR4_DU 15

#define USART_CR1_PCEN 4

#define BEEP_CSR2_BEEPDIV 31

#define RI_IOCMR3_CH3M 1

#define PWR_CSR1_PVDIF 32

#define DM_BASE 32656

#define I2C_ITR_DMAEN 8

#define BEEP 20720

#define TIM_IER_RESET_VALUE 0

#define EXTI_CONF1_RESET_VALUE 0

#define CLK_PCKENR2_RTC 4

#define USART3_BASE 21488

#define TIM_CR1_UDIS 2

#define TIM1_CR2_TI1S 128

#define TIM_CCR2L_RESET_VALUE 0

#define TIM4_SMCR_MSM 128

#define GPIOF_BASE 20505

#define TIM1_CCR2H_CCR2 255

#define TIM_CCR2H_CCR2 255

#define GPIO_CR2_RESET_VALUE 0

#define SPI_CR1_RESET_VALUE 0

#define EXTI_CR2_P7IS 192

#define TIM1_SR1_CC4IF 16

#define I2C_DR_DR 255

#define USART_CR5_IREN 2

#define CLK_CSSR_CSSDIE 4

#define RI_IOSR2_CH23E 128

#define SPI_CR2_BDM 128

#define CLK_PCKENR3_USART3 16

#define TIM_CR1_DIR 16

#define WFE_CR4_RTC_CSS_EV 1

#define RI_IOIR2_CH20I 64

#define I2C_OAR2_RESET_VALUE 0

#define RI_ICR1_RESET_VALUE 0

#define USART_CR1_T8 64

#define I2C_SR1_TXE 128

#define WFE_CR3_DMA1CH01_EV 64

#define TIM1_DTR_DTG 255

#define CLK_REGCSR_EEBUSY 64

#define S8_MAX 127

#define GPIOG 20510

#define GPIOH 20515

#define GPIOI 20520

#define WFE_BASE 20646

#define GPIOC 20490

#define GPIOD 20495

#define GPIOE 20500

#define CLK_REGCSR_HSEPD 16

#define GPIOF 20505

#define TIM1_ETR_ECE 64

#define CLK_CRTCR_RTCDIV 224

#define TIM_CCMR1_RESET_VALUE 0

#define GPIOA 20480

#define I2C_SR2_BERR 1

#define GPIOB 20485

#define USART_CR1_R8 128

#define SYSCFG_RMPCR2_TIM3TRIG_LSE 16

#define RST_SR_IWDGF 2

#define EXTI_CONF1_PFLIS 64

#define TIM_SR1_CC1IF 2

#define CLK_REGCSR_LSIPD 8

#define TIM1_CR1_DIR 16

#define I2C_OARL_RESET_VALUE 0

#define WFE_CR4_USART2_EV 4

#define RI_RCR_400KPU 2

#define USART_CR1_PS 2

#define RI_IOIR2_CH23I 128

#define RTC_TR1_SU 15

#define RTC_TCR1_TAMP2LEVEL 16

#define RTC_ALRMAR3_PM 64

#define DMA_C3M0EAR_RESET_VALUE 0

#define EXTI_CR3_PEIS 48

#define LCD_CR4_RESET_VALUE 0

#define I2C_OAR2_ENDUAL 1

#define RI_RCR_400KPD 8

#define TIM1_IER_RESET_VALUE 0

#define RTC_TR1_ST 112

#define RTC_CALRH_CALWx 96

#define RTC_TR3_RESET_VALUE 0

#define WFE_CR4_SPI2_EV 2

#define SYSCFG_RMPCR3_SPI1_REMAP 1

#define DMA_CSPR_16BM 8

#define ADC_DRH_CONVDATA 15

#define CLK_HSITRIMR_HSITRIM 255

#define DAC_BASE 21376

#define I2C_SR3_SMBHOST 64

#define TIM_CR1_URS 4

#define GPIOC_BASE 20490

#define CSSLSE 20880

#define WWDG_CR_WDGA 128

#define USART_SR_FE 2

#define RI_IOIR3_CH24I 128

#define RTC_TCR2_TAMPPRCH 96

#define RI_IOSR2_CH20E 64

#define EXTI_SR2_RESET_VALUE 0

#define DMA_CSPR_BUSY 128

#define RTC_CR2_WUTIE 64

#define RTC_TCR2_TAMPPUDIS 128

#define DAC_RDHRH_RDHRH 15

#define PWR_CSR2_RESET_VALUE 0

#define DMA_CM0EAR_MA 1

#define TIM1_SR2_CC4OF 16

#define DAC_RDHRH_RESET_VALUE 0

#define TIM_SMCR_MSM 128

#define SYSCFG_RMPCR2_TIM2TRIG_REMAP 2

#define CLK_SWCR_SWEN 2

#define FLASH_CR1_IE 2

#define ADC_TRIGR2_RESET_VALUE 0

#define CLK_ICKCR_SAHALT 16

#define CFG_GCR_RESET_VALUE 0

#define WWDG_WR_RESET_VALUE 127

#define TIM1_CNTRH_CNT 255

#define ADC_CR1_AWDIE 16

#define LCD_BASE 21504

#define HSE_VALUE 16000000

#define TIM1_CCER2_RESET_VALUE 0

#define USART_SR_TC 64

#define TIM_CCER1_RESET_VALUE 0

#define CLK_REGCSR_HSIPD 4

#define DAC_CR2_RESET_VALUE 0

#define SYSCFG_BASE 20637

#define DMA_CCR_HTIE 4

#define BEEP_CSR2_BEEPEN 32

#define DMA_CSPR_PEND 64

#define TIM_CCMR_CCxS 3

#define RTC_CALRH_CALW16 32

#define DMA1_Channel1_BASE 20607

#define I2C_TRISER_RESET_VALUE 2

#define CLK_SWCR_SWBSY 1

#define ADC_SR_AWD 2

#define TIM1_CCR4L_RESET_VALUE 0

#define I2C_CR1_ENPEC 32

#define DAC_CR1_BOFF 2

#define CLK_REGCSR_LSEPD 32

#define RI_IOSR3_CH24E 128

#define DAC_RDHRL_RDHRL 255

#define USART_SR_NF 4

#define RTC_CR1_BYPSHAD 16

#define DAC_CR1_WAVEN 192

#define RI_IOSR4_CH29E 1

#define SYSCFG 20637

#define IWDG 20704

#define ADC_CR1_RESET_VALUE 0

#define ADC_CR1_START 2

#define USART_CR1_RESET_VALUE 0

#define SPI_DR_RESET_VALUE 0

#define RTC_DR2_MU 15

#define TIM1_DER_CC3DE 8

#define RTC_DR2_MT 16

#define TIM1_PSCRL_RESET_VALUE 0

#define CLK_SWCR_SWIF 8

#define WFE_CR2_EXTI_EVDH 32

#define RI_IOSR4_CH28E 128

#define RTC_CR3_ADD1H 1

#define TIM_SR2_RESET_VALUE 0

#define I2C_CCRL_RESET_VALUE 0

#define SPI_CR1_CPOL 2

#define USART_SR_OR 8

#define COMP_CSR5_DACTRIG 56

#define COMP_CSR4_RESET_VALUE 0

#define WFE_CR2_EXTI_EVEF 64

#define RI_IOSR4_CH27E 64

#define USART_SR_PE 1

#define SPI_CR1_LSBFIRST 128

#define TIM1_CR1_URS 4

#define EXTI_CONF2_PFHIS 1

#define RST_SR_ILLOPF 4

#define BEEP_CSR1_MSR 1

#define USART_CR5_EIE 1

#define TIM1_PSCH_PSC 255

#define ADC_CR2_PRESC 128

#define RI_IOSR4_CH26E 2

#define TIM1_CCR3H_RESET_VALUE 0

#define IRTIM 21247

typedef enum enum_179 {
  RI_AnalogSwitch_0 = 16,
  RI_AnalogSwitch_1 = 17,
  RI_AnalogSwitch_2 = 18,
  RI_AnalogSwitch_3 = 19,
  RI_AnalogSwitch_4 = 20,
  RI_AnalogSwitch_5 = 21,
  RI_AnalogSwitch_6 = 22,
  RI_AnalogSwitch_7 = 23,
  RI_AnalogSwitch_8 = 32,
  RI_AnalogSwitch_9 = 33,
  RI_AnalogSwitch_10 = 34,
  RI_AnalogSwitch_11 = 35,
  RI_AnalogSwitch_14 = 38
} enum_179;

typedef enum enum_178 {
  RI_InputCaptureRouting_0 = 0,
  RI_InputCaptureRouting_1 = 1,
  RI_InputCaptureRouting_2 = 2,
  RI_InputCaptureRouting_3 = 3,
  RI_InputCaptureRouting_4 = 4,
  RI_InputCaptureRouting_5 = 5,
  RI_InputCaptureRouting_6 = 6,
  RI_InputCaptureRouting_7 = 7,
  RI_InputCaptureRouting_8 = 8,
  RI_InputCaptureRouting_9 = 9,
  RI_InputCaptureRouting_10 = 10,
  RI_InputCaptureRouting_11 = 11,
  RI_InputCaptureRouting_12 = 12,
  RI_InputCaptureRouting_13 = 13,
  RI_InputCaptureRouting_14 = 14,
  RI_InputCaptureRouting_15 = 15,
  RI_InputCaptureRouting_16 = 16,
  RI_InputCaptureRouting_17 = 17,
  RI_InputCaptureRouting_18 = 18,
  RI_InputCaptureRouting_19 = 19,
  RI_InputCaptureRouting_20 = 20,
  RI_InputCaptureRouting_21 = 21,
  RI_InputCaptureRouting_22 = 22
} enum_178;

typedef enum enum_183 {
  REMAP_DMA1Channel_ADC1ToChannel0 = 0,
  REMAP_DMA1Channel_ADC1ToChannel1 = 1,
  REMAP_DMA1Channel_ADC1ToChannel2 = 2,
  REMAP_DMA1Channel_ADC1ToChannel3 = 3,
  REMAP_DMA1Channel_TIM4ToChannel0 = 240,
  REMAP_DMA1Channel_TIM4ToChannel1 = 244,
  REMAP_DMA1Channel_TIM4ToChannel2 = 248,
  REMAP_DMA1Channel_TIM4ToChannel3 = 252
} enum_183;

typedef enum enum_183 REMAP_DMAChannel_TypeDef;

typedef enum enum_177 {
  RI_InputCapture_IC2 = 2,
  RI_InputCapture_IC3 = 3
} enum_177;

typedef enum enum_179 RI_AnalogSwitch_TypeDef;

typedef enum enum_181 {
  RI_Resistor_10KPU = 1,
  RI_Resistor_400KPU = 2,
  RI_Resistor_10KPD = 4,
  RI_Resistor_400KPD = 8
} enum_181;

typedef enum enum_181 RI_Resistor_TypeDef;

typedef enum enum_178 RI_InputCaptureRouting_TypeDef;

typedef enum enum_177 RI_InputCapture_TypeDef;

typedef enum enum_182 {
  REMAP_Pin_USART1TxRxPortA = 284,
  REMAP_Pin_USART1TxRxPortC = 300,
  REMAP_Pin_USART1Clk = 331,
  REMAP_Pin_SPI1Full = 391,
  REMAP_Pin_ADC1ExtTRIG1 = 513,
  REMAP_Pin_TIM2TRIGPortA = 514,
  REMAP_Pin_TIM3TRIGPortA = 516,
  REMAP_Pin_TIM2TRIGLSE = 520,
  REMAP_Pin_TIM3TRIGLSE = 528,
  REMAP_Pin_SPI2Full = 544,
  REMAP_Pin_TIM3TRIGPortG = 576,
  REMAP_Pin_TIM23BKIN = 640,
  REMAP_Pin_SPI1PortF = 769,
  REMAP_Pin_USART3TxRxPortF = 770,
  REMAP_Pin_USART3Clk = 772,
  REMAP_Pin_TIM3Channel1 = 776,
  REMAP_Pin_TIM3Channel2 = 784,
  REMAP_Pin_CCO = 800,
  REMAP_Pin_TIM2Channel1 = 832,
  REMAP_Pin_TIM2Channel2 = 896
} enum_182;

typedef enum enum_180 {
  RI_IOSwitch_1 = 16,
  RI_IOSwitch_4 = 17,
  RI_IOSwitch_7 = 18,
  RI_IOSwitch_10 = 19,
  RI_IOSwitch_13 = 20,
  RI_IOSwitch_16 = 21,
  RI_IOSwitch_19 = 22,
  RI_IOSwitch_22 = 23,
  RI_IOSwitch_2 = 32,
  RI_IOSwitch_5 = 33,
  RI_IOSwitch_8 = 34,
  RI_IOSwitch_11 = 35,
  RI_IOSwitch_14 = 36,
  RI_IOSwitch_17 = 37,
  RI_IOSwitch_20 = 38,
  RI_IOSwitch_23 = 39,
  RI_IOSwitch_3 = 48,
  RI_IOSwitch_6 = 49,
  RI_IOSwitch_9 = 50,
  RI_IOSwitch_12 = 51,
  RI_IOSwitch_15 = 52,
  RI_IOSwitch_18 = 53,
  RI_IOSwitch_21 = 54,
  RI_IOSwitch_24 = 55,
  RI_IOSwitch_29 = 64,
  RI_IOSwitch_26 = 65,
  RI_IOSwitch_27 = 70,
  RI_IOSwitch_28 = 71
} enum_180;

typedef enum enum_180 RI_IOSwitch_TypeDef;

typedef enum enum_182 REMAP_Pin_TypeDef;

typedef enum enum_118 {
  IWDG_WriteAccess_Disable = 0,
  IWDG_WriteAccess_Enable = 85
} enum_118;

typedef enum enum_118 IWDG_WriteAccess_TypeDef;

typedef enum enum_119 {
  IWDG_Prescaler_4 = 0,
  IWDG_Prescaler_8 = 1,
  IWDG_Prescaler_16 = 2,
  IWDG_Prescaler_32 = 3,
  IWDG_Prescaler_64 = 4,
  IWDG_Prescaler_128 = 5,
  IWDG_Prescaler_256 = 6
} enum_119;

typedef enum enum_119 IWDG_Prescaler_TypeDef;

#define IWDG_KEY_REFRESH 170

#define IWDG_KEY_ENABLE 204

typedef enum enum_334 {
  WFE_Source_TIM2_EV0 = 257,
  WFE_Source_TIM2_EV1 = 258,
  WFE_Source_TIM1_EV0 = 260,
  WFE_Source_TIM1_EV1 = 264,
  WFE_Source_EXTI_EV0 = 272,
  WFE_Source_EXTI_EV1 = 288,
  WFE_Source_EXTI_EV2 = 320,
  WFE_Source_EXTI_EV3 = 384,
  WFE_Source_EXTI_EV4 = 513,
  WFE_Source_EXTI_EV5 = 514,
  WFE_Source_EXTI_EV6 = 516,
  WFE_Source_EXTI_EV7 = 520,
  WFE_Source_EXTI_EVB_G = 528,
  WFE_Source_EXTI_EVD_H = 544,
  WFE_Source_EXTI_EVE_F = 576,
  WFE_Source_ADC1_COMP_EV = 640,
  WFE_Source_TIM3_EV0 = 769,
  WFE_Source_TIM3_EV1 = 770,
  WFE_Source_TIM4_EV = 772,
  WFE_Source_SPI1_EV = 776,
  WFE_Source_I2C1_EV = 784,
  WFE_Source_USART1_EV = 800,
  WFE_Source_DMA1CH01_EV = 832,
  WFE_Source_DMA1CH23_EV = 896,
  WFE_Source_RTC_CSS_EV = 1025,
  WFE_Source_SPI2_EV = 1026,
  WFE_Source_USART2_EV = 1028,
  WFE_Source_USART3_EV = 1032,
  WFE_Source_TIM5_EV0 = 1040,
  WFE_Source_TIM5_EV1 = 1056,
  WFE_Source_AES_EV = 1088
} enum_334;

typedef enum enum_334 WFE_Source_TypeDef;

typedef enum enum_109 {
  I2C_Direction_Transmitter = 0,
  I2C_Direction_Receiver = 1
} enum_109;

typedef enum enum_109 I2C_Direction_TypeDef;

typedef enum enum_106 { I2C_Ack_Disable = 0, I2C_Ack_Enable = 4 } enum_106;

typedef enum enum_106 I2C_Ack_TypeDef;

typedef enum enum_112 {
  I2C_FLAG_SB = 257,
  I2C_FLAG_ADDR = 258,
  I2C_FLAG_BTF = 260,
  I2C_FLAG_ADD10 = 264,
  I2C_FLAG_STOPF = 272,
  I2C_FLAG_RXNE = 320,
  I2C_FLAG_TXE = 384,
  I2C_FLAG_BERR = 513,
  I2C_FLAG_ARLO = 514,
  I2C_FLAG_AF = 516,
  I2C_FLAG_OVR = 520,
  I2C_FLAG_PECERR = 528,
  I2C_FLAG_WUFH = 544,
  I2C_FLAG_TIMEOUT = 576,
  I2C_FLAG_SMBALERT = 640,
  I2C_FLAG_MSL = 769,
  I2C_FLAG_BUSY = 770,
  I2C_FLAG_TRA = 772,
  I2C_FLAG_GENCALL = 784,
  I2C_FLAG_SMBDEFAULT = 800,
  I2C_FLAG_SMBHOST = 832,
  I2C_FLAG_DUALF = 896
} enum_112;

typedef enum enum_112 I2C_FLAG_TypeDef;

typedef enum enum_104 {
  I2C_Mode_I2C = 0,
  I2C_Mode_SMBusDevice = 2,
  I2C_Mode_SMBusHost = 10
} enum_104;

typedef enum enum_115 {
  I2C_Register_CR1 = 0,
  I2C_Register_CR2 = 1,
  I2C_Register_FREQR = 2,
  I2C_Register_OARL = 3,
  I2C_Register_OARH = 4,
  I2C_Register_DR = 6,
  I2C_Register_SR1 = 7,
  I2C_Register_SR2 = 8,
  I2C_Register_SR3 = 9,
  I2C_Register_ITR = 10,
  I2C_Register_CCRL = 11,
  I2C_Register_CCRH = 12,
  I2C_Register_TRISER = 13,
  I2C_Register_PECR = 14
} enum_115;

typedef enum enum_115 I2C_Register_TypeDef;

typedef enum enum_108 {
  I2C_AcknowledgedAddress_7bit = 0,
  I2C_AcknowledgedAddress_10bit = 128
} enum_108;

typedef enum enum_107 {
  I2C_AckPosition_Current = 0,
  I2C_AckPosition_Next = 8
} enum_107;

typedef enum enum_111 {
  I2C_PECPosition_Current = 0,
  I2C_PECPosition_Next = 8
} enum_111;

typedef enum enum_111 I2C_PECPosition_TypeDef;

typedef enum enum_105 { I2C_DutyCycle_2 = 0, I2C_DutyCycle_16_9 = 64 } enum_105;

typedef enum enum_113 {
  I2C_IT_ERR = 1,
  I2C_IT_EVT = 2,
  I2C_IT_BUF = 4,
  I2C_IT_SB = 4609,
  I2C_IT_ADDR = 4610,
  I2C_IT_BTF = 4612,
  I2C_IT_ADD10 = 4616,
  I2C_IT_STOPF = 4624,
  I2C_IT_RXNE = 5696,
  I2C_IT_TXE = 5760,
  I2C_IT_BERR = 8449,
  I2C_IT_ARLO = 8450,
  I2C_IT_AF = 8452,
  I2C_IT_OVR = 8456,
  I2C_IT_PECERR = 8464,
  I2C_IT_TIMEOUT = 8512,
  I2C_IT_SMBALERT = 8576,
  I2C_IT_WUFH = 8736
} enum_113;

typedef enum enum_113 I2C_IT_TypeDef;

typedef enum enum_107 I2C_AckPosition_TypeDef;

typedef enum enum_104 I2C_Mode_TypeDef;

typedef enum enum_114 {
  I2C_EVENT_SLAVE_ACK_FAILURE = 4,
  I2C_EVENT_SLAVE_STOP_DETECTED = 16,
  I2C_EVENT_SLAVE_RECEIVER_ADDRESS_MATCHED = 514,
  I2C_EVENT_SLAVE_BYTE_RECEIVED = 576,
  I2C_EVENT_MASTER_MODE_SELECT = 769,
  I2C_EVENT_MASTER_RECEIVER_MODE_SELECTED = 770,
  I2C_EVENT_MASTER_MODE_ADDRESS10 = 776,
  I2C_EVENT_MASTER_BYTE_RECEIVED = 832,
  I2C_EVENT_SLAVE_BYTE_TRANSMITTING = 1664,
  I2C_EVENT_SLAVE_TRANSMITTER_ADDRESS_MATCHED = 1666,
  I2C_EVENT_SLAVE_BYTE_TRANSMITTED = 1668,
  I2C_EVENT_MASTER_BYTE_TRANSMITTING = 1920,
  I2C_EVENT_MASTER_TRANSMITTER_MODE_SELECTED = 1922,
  I2C_EVENT_MASTER_BYTE_TRANSMITTED = 1924,
  I2C_EVENT_SLAVE_GENERALCALLADDRESS_MATCHED = 4608,
  I2C_EVENT_SLAVE_RECEIVER_SECONDADDRESS_MATCHED = 33280,
  I2C_EVENT_SLAVE_TRANSMITTER_SECONDADDRESS_MATCHED = 34432
} enum_114;

typedef enum enum_110 {
  I2C_SMBusAlert_High = 0,
  I2C_SMBusAlert_Low = 1
} enum_110;

typedef enum enum_110 I2C_SMBusAlert_TypeDef;

typedef enum enum_105 I2C_DutyCycle_TypeDef;

typedef enum enum_114 I2C_Event_TypeDef;

typedef enum enum_108 I2C_AcknowledgedAddress_TypeDef;

#define I2C_MAX_FAST_FREQ 400000

#define I2C_MAX_STANDARD_FREQ 100000

typedef enum enum_66 {
  COMP_Edge_Falling = 1,
  COMP_Edge_Rising = 2,
  COMP_Edge_Rising_Falling = 3
} enum_66;

typedef enum enum_66 COMP_Edge_TypeDef;

typedef enum enum_65 {
  COMP_Selection_COMP1 = 1,
  COMP_Selection_COMP2 = 2
} enum_65;

typedef enum enum_65 COMP_Selection_TypeDef;

typedef enum enum_68 {
  COMP_OutputSelect_TIM2IC2 = 0,
  COMP_OutputSelect_TIM3IC2 = 64,
  COMP_OutputSelect_TIM1BRK = 128,
  COMP_OutputSelect_TIM1OCREFCLR = 192
} enum_68;

typedef enum enum_68 COMP_OutputSelect_Typedef;

typedef enum enum_67 {
  COMP_InvertingInput_IO = 8,
  COMP_InvertingInput_VREFINT = 16,
  COMP_InvertingInput_3_4VREFINT = 24,
  COMP_InvertingInput_1_2VREFINT = 32,
  COMP_InvertingInput_1_4VREFINT = 40,
  COMP_InvertingInput_DAC1 = 48,
  COMP_InvertingInput_DAC2 = 56
} enum_67;

typedef enum enum_70 {
  COMP_TriggerGroup_InvertingInput = 1,
  COMP_TriggerGroup_NonInvertingInput = 2,
  COMP_TriggerGroup_VREFINTOutput = 3,
  COMP_TriggerGroup_DACOutput = 4
} enum_70;

typedef enum enum_70 COMP_TriggerGroup_TypeDef;

typedef enum enum_69 { COMP_Speed_Slow = 0, COMP_Speed_Fast = 4 } enum_69;

typedef enum enum_69 COMP_Speed_TypeDef;

typedef enum enum_67 COMP_InvertingInput_Typedef;

typedef enum enum_72 {
  COMP_OutputLevel_Low = 0,
  COMP_OutputLevel_High = 1
} enum_72;

typedef enum enum_72 COMP_OutputLevel_TypeDef;

typedef enum enum_71 {
  COMP_TriggerPin_0 = 1,
  COMP_TriggerPin_1 = 2,
  COMP_TriggerPin_2 = 4
} enum_71;

typedef enum enum_71 COMP_TriggerPin_TypeDef;

typedef enum enum_266 {
  TIM3_IT_Update = 1,
  TIM3_IT_CC1 = 2,
  TIM3_IT_CC2 = 4,
  TIM3_IT_Trigger = 64,
  TIM3_IT_Break = 128
} enum_266;

typedef enum enum_266 TIM3_IT_TypeDef;

typedef enum enum_264 {
  TIM3_ICSelection_DirectTI = 1,
  TIM3_ICSelection_IndirectTI = 2,
  TIM3_ICSelection_TRGI = 3
} enum_264;

typedef enum enum_264 TIM3_ICSelection_TypeDef;

typedef enum enum_269 {
  TIM3_TIxExternalCLK1Source_TI1ED = 64,
  TIM3_TIxExternalCLK1Source_TI1 = 80,
  TIM3_TIxExternalCLK1Source_TI2 = 96
} enum_269;

typedef enum enum_269 TIM3_TIxExternalCLK1Source_TypeDef;

typedef enum enum_259 {
  TIM3_AutomaticOutput_Disable = 0,
  TIM3_AutomaticOutput_Enable = 64
} enum_259;

typedef enum enum_259 TIM3_AutomaticOutput_TypeDef;

typedef enum enum_260 {
  TIM3_LockLevel_Off = 0,
  TIM3_LockLevel_1 = 1,
  TIM3_LockLevel_2 = 2,
  TIM3_LockLevel_3 = 3
} enum_260;

typedef enum enum_260 TIM3_LockLevel_TypeDef;

typedef enum enum_254 {
  TIM3_CounterMode_Up = 0,
  TIM3_CounterMode_Down = 16,
  TIM3_CounterMode_CenterAligned1 = 32,
  TIM3_CounterMode_CenterAligned2 = 64,
  TIM3_CounterMode_CenterAligned3 = 96
} enum_254;

typedef enum enum_254 TIM3_CounterMode_TypeDef;

typedef enum enum_258 {
  TIM3_BreakPolarity_Low = 0,
  TIM3_BreakPolarity_High = 32
} enum_258;

typedef enum enum_258 TIM3_BreakPolarity_TypeDef;

typedef enum enum_262 {
  TIM3_OCIdleState_Reset = 0,
  TIM3_OCIdleState_Set = 1
} enum_262;

typedef enum enum_262 TIM3_OCIdleState_TypeDef;

typedef enum enum_277 {
  TIM3_FLAG_Update = 1,
  TIM3_FLAG_CC1 = 2,
  TIM3_FLAG_CC2 = 4,
  TIM3_FLAG_Trigger = 64,
  TIM3_FLAG_Break = 128,
  TIM3_FLAG_CC1OF = 512,
  TIM3_FLAG_CC2OF = 1024
} enum_277;

typedef enum enum_277 TIM3_FLAG_TypeDef;

typedef enum enum_257 {
  TIM3_BreakState_Disable = 0,
  TIM3_BreakState_Enable = 16
} enum_257;

typedef enum enum_257 TIM3_BreakState_TypeDef;

typedef enum enum_250 {
  TIM3_Prescaler_1 = 0,
  TIM3_Prescaler_2 = 1,
  TIM3_Prescaler_4 = 2,
  TIM3_Prescaler_8 = 3,
  TIM3_Prescaler_16 = 4,
  TIM3_Prescaler_32 = 5,
  TIM3_Prescaler_64 = 6,
  TIM3_Prescaler_128 = 7
} enum_250;

typedef enum enum_250 TIM3_Prescaler_TypeDef;

typedef enum enum_256 {
  TIM3_OutputState_Disable = 0,
  TIM3_OutputState_Enable = 1
} enum_256;

typedef enum enum_256 TIM3_OutputState_TypeDef;

typedef enum enum_249 {
  TIM3_ForcedAction_Inactive = 64,
  TIM3_ForcedAction_Active = 80
} enum_249;

typedef enum enum_255 {
  TIM3_OCPolarity_High = 0,
  TIM3_OCPolarity_Low = 1
} enum_255;

typedef enum enum_255 TIM3_OCPolarity_TypeDef;

typedef enum enum_273 {
  TIM3_EventSource_Update = 1,
  TIM3_EventSource_CC1 = 2,
  TIM3_EventSource_CC2 = 4,
  TIM3_EventSource_Trigger = 64,
  TIM3_EventSource_Break = 128
} enum_273;

typedef enum enum_273 TIM3_EventSource_TypeDef;

typedef enum enum_253 { TIM3_Channel_1 = 0, TIM3_Channel_2 = 1 } enum_253;

typedef enum enum_253 TIM3_Channel_TypeDef;

typedef enum enum_249 TIM3_ForcedAction_TypeDef;

typedef enum enum_268 {
  TIM3_TRGSelection_TIM4 = 0,
  TIM3_TRGSelection_TIM1 = 16,
  TIM3_TRGSelection_TIM5 = 32,
  TIM3_TRGSelection_TIM2 = 48,
  TIM3_TRGSelection_TI1F_ED = 64,
  TIM3_TRGSelection_TI1FP1 = 80,
  TIM3_TRGSelection_TI2FP2 = 96,
  TIM3_TRGSelection_ETRF = 112
} enum_268;

typedef enum enum_268 TIM3_TRGSelection_TypeDef;

typedef enum enum_252 {
  TIM3_OPMode_Repetitive = 0,
  TIM3_OPMode_Single = 1
} enum_252;

typedef enum enum_251 {
  TIM3_OCMode_Timing = 0,
  TIM3_OCMode_Active = 16,
  TIM3_OCMode_Inactive = 32,
  TIM3_OCMode_Toggle = 48,
  TIM3_OCMode_PWM1 = 96,
  TIM3_OCMode_PWM2 = 112
} enum_251;

typedef enum enum_274 {
  TIM3_UpdateSource_Global = 0,
  TIM3_UpdateSource_Regular = 1
} enum_274;

typedef enum enum_274 TIM3_UpdateSource_TypeDef;

typedef enum enum_278 {
  TIM3_DMASource_Update = 1,
  TIM3_DMASource_CC1 = 2,
  TIM3_DMASource_CC2 = 4
} enum_278;

typedef enum enum_278 TIM3_DMASource_TypeDef;

typedef enum enum_252 TIM3_OPMode_TypeDef;

typedef enum enum_251 TIM3_OCMode_TypeDef;

typedef enum enum_267 {
  TIM3_ExtTRGPSC_OFF = 0,
  TIM3_ExtTRGPSC_DIV2 = 16,
  TIM3_ExtTRGPSC_DIV4 = 32,
  TIM3_ExtTRGPSC_DIV8 = 48
} enum_267;

typedef enum enum_265 {
  TIM3_ICPSC_DIV1 = 0,
  TIM3_ICPSC_DIV2 = 4,
  TIM3_ICPSC_DIV4 = 8,
  TIM3_ICPSC_DIV8 = 12
} enum_265;

typedef enum enum_276 {
  TIM3_SlaveMode_Reset = 4,
  TIM3_SlaveMode_Gated = 5,
  TIM3_SlaveMode_Trigger = 6,
  TIM3_SlaveMode_External1 = 7
} enum_276;

typedef enum enum_276 TIM3_SlaveMode_TypeDef;

typedef enum enum_263 {
  TIM3_ICPolarity_Rising = 0,
  TIM3_ICPolarity_Falling = 1
} enum_263;

typedef enum enum_263 TIM3_ICPolarity_TypeDef;

typedef enum enum_267 TIM3_ExtTRGPSC_TypeDef;

typedef enum enum_261 {
  TIM3_OSSIState_Disable = 0,
  TIM3_OSSIState_Enable = 4
} enum_261;

typedef enum enum_270 {
  TIM3_ExtTRGPolarity_NonInverted = 0,
  TIM3_ExtTRGPolarity_Inverted = 128
} enum_270;

typedef enum enum_270 TIM3_ExtTRGPolarity_TypeDef;

typedef enum enum_275 {
  TIM3_TRGOSource_Reset = 0,
  TIM3_TRGOSource_Enable = 16,
  TIM3_TRGOSource_Update = 32,
  TIM3_TRGOSource_OC1 = 48,
  TIM3_TRGOSource_OC1REF = 64,
  TIM3_TRGOSource_OC2REF = 80
} enum_275;

typedef enum enum_261 TIM3_OSSIState_TypeDef;

typedef enum enum_275 TIM3_TRGOSource_TypeDef;

typedef enum enum_272 {
  TIM3_EncoderMode_TI1 = 1,
  TIM3_EncoderMode_TI2 = 2,
  TIM3_EncoderMode_TI12 = 3
} enum_272;

typedef enum enum_271 {
  TIM3_PSCReloadMode_Update = 0,
  TIM3_PSCReloadMode_Immediate = 1
} enum_271;

typedef enum enum_265 TIM3_ICPSC_TypeDef;

typedef enum enum_271 TIM3_PSCReloadMode_TypeDef;

typedef enum enum_272 TIM3_EncoderMode_TypeDef;

typedef enum enum_299 {
  TIM5_BreakPolarity_Low = 0,
  TIM5_BreakPolarity_High = 32
} enum_299;

typedef enum enum_302 {
  TIM5_OSSIState_Disable = 0,
  TIM5_OSSIState_Enable = 4
} enum_302;

typedef enum enum_302 TIM5_OSSIState_TypeDef;

typedef enum enum_298 {
  TIM5_BreakState_Disable = 0,
  TIM5_BreakState_Enable = 16
} enum_298;

typedef enum enum_297 {
  TIM5_OutputState_Disable = 0,
  TIM5_OutputState_Enable = 1
} enum_297;

typedef enum enum_296 {
  TIM5_OCPolarity_High = 0,
  TIM5_OCPolarity_Low = 1
} enum_296;

typedef enum enum_294 { TIM5_Channel_1 = 0, TIM5_Channel_2 = 1 } enum_294;

typedef enum enum_294 TIM5_Channel_TypeDef;

typedef enum enum_295 {
  TIM5_CounterMode_Up = 0,
  TIM5_CounterMode_Down = 16,
  TIM5_CounterMode_CenterAligned1 = 32,
  TIM5_CounterMode_CenterAligned2 = 64,
  TIM5_CounterMode_CenterAligned3 = 96
} enum_295;

typedef enum enum_295 TIM5_CounterMode_TypeDef;

typedef enum enum_293 {
  TIM5_OPMode_Repetitive = 0,
  TIM5_OPMode_Single = 1
} enum_293;

typedef enum enum_292 {
  TIM5_OCMode_Timing = 0,
  TIM5_OCMode_Active = 16,
  TIM5_OCMode_Inactive = 32,
  TIM5_OCMode_Toggle = 48,
  TIM5_OCMode_PWM1 = 96,
  TIM5_OCMode_PWM2 = 112
} enum_292;

typedef enum enum_291 {
  TIM5_Prescaler_1 = 0,
  TIM5_Prescaler_2 = 1,
  TIM5_Prescaler_4 = 2,
  TIM5_Prescaler_8 = 3,
  TIM5_Prescaler_16 = 4,
  TIM5_Prescaler_32 = 5,
  TIM5_Prescaler_64 = 6,
  TIM5_Prescaler_128 = 7
} enum_291;

typedef enum enum_290 {
  TIM5_ForcedAction_Inactive = 64,
  TIM5_ForcedAction_Active = 80
} enum_290;

typedef enum enum_291 TIM5_Prescaler_TypeDef;

typedef enum enum_293 TIM5_OPMode_TypeDef;

typedef enum enum_304 {
  TIM5_ICPolarity_Rising = 0,
  TIM5_ICPolarity_Falling = 1
} enum_304;

typedef enum enum_304 TIM5_ICPolarity_TypeDef;

typedef enum enum_305 {
  TIM5_ICSelection_DirectTI = 1,
  TIM5_ICSelection_IndirectTI = 2,
  TIM5_ICSelection_TRGI = 3
} enum_305;

typedef enum enum_305 TIM5_ICSelection_TypeDef;

typedef enum enum_297 TIM5_OutputState_TypeDef;

typedef enum enum_314 {
  TIM5_EventSource_Update = 1,
  TIM5_EventSource_CC1 = 2,
  TIM5_EventSource_CC2 = 4,
  TIM5_EventSource_Trigger = 64,
  TIM5_EventSource_Break = 128
} enum_314;

typedef enum enum_314 TIM5_EventSource_TypeDef;

typedef enum enum_292 TIM5_OCMode_TypeDef;

typedef enum enum_307 {
  TIM5_IT_Update = 1,
  TIM5_IT_CC1 = 2,
  TIM5_IT_CC2 = 4,
  TIM5_IT_Trigger = 64,
  TIM5_IT_Break = 128
} enum_307;

typedef enum enum_307 TIM5_IT_TypeDef;

typedef enum enum_318 {
  TIM5_FLAG_Update = 1,
  TIM5_FLAG_CC1 = 2,
  TIM5_FLAG_CC2 = 4,
  TIM5_FLAG_Trigger = 64,
  TIM5_FLAG_Break = 128,
  TIM5_FLAG_CC1OF = 512,
  TIM5_FLAG_CC2OF = 1024
} enum_318;

typedef enum enum_318 TIM5_FLAG_TypeDef;

typedef enum enum_298 TIM5_BreakState_TypeDef;

typedef enum enum_299 TIM5_BreakPolarity_TypeDef;

typedef enum enum_310 {
  TIM5_TIxExternalCLK1Source_TI1ED = 64,
  TIM5_TIxExternalCLK1Source_TI1 = 80,
  TIM5_TIxExternalCLK1Source_TI2 = 96
} enum_310;

typedef enum enum_310 TIM5_TIxExternalCLK1Source_TypeDef;

typedef enum enum_296 TIM5_OCPolarity_TypeDef;

typedef enum enum_317 {
  TIM5_SlaveMode_Reset = 4,
  TIM5_SlaveMode_Gated = 5,
  TIM5_SlaveMode_Trigger = 6,
  TIM5_SlaveMode_External1 = 7
} enum_317;

typedef enum enum_317 TIM5_SlaveMode_TypeDef;

typedef enum enum_319 {
  TIM5_DMASource_Update = 1,
  TIM5_DMASource_CC1 = 2,
  TIM5_DMASource_CC2 = 4
} enum_319;

typedef enum enum_319 TIM5_DMASource_TypeDef;

typedef enum enum_303 {
  TIM5_OCIdleState_Reset = 0,
  TIM5_OCIdleState_Set = 1
} enum_303;

typedef enum enum_303 TIM5_OCIdleState_TypeDef;

typedef enum enum_311 {
  TIM5_ExtTRGPolarity_NonInverted = 0,
  TIM5_ExtTRGPolarity_Inverted = 128
} enum_311;

typedef enum enum_311 TIM5_ExtTRGPolarity_TypeDef;

typedef enum enum_308 {
  TIM5_ExtTRGPSC_OFF = 0,
  TIM5_ExtTRGPSC_DIV2 = 16,
  TIM5_ExtTRGPSC_DIV4 = 32,
  TIM5_ExtTRGPSC_DIV8 = 48
} enum_308;

typedef enum enum_308 TIM5_ExtTRGPSC_TypeDef;

typedef enum enum_312 {
  TIM5_PSCReloadMode_Update = 0,
  TIM5_PSCReloadMode_Immediate = 1
} enum_312;

typedef enum enum_312 TIM5_PSCReloadMode_TypeDef;

typedef enum enum_301 {
  TIM5_LockLevel_Off = 0,
  TIM5_LockLevel_1 = 1,
  TIM5_LockLevel_2 = 2,
  TIM5_LockLevel_3 = 3
} enum_301;

typedef enum enum_313 {
  TIM5_EncoderMode_TI1 = 1,
  TIM5_EncoderMode_TI2 = 2,
  TIM5_EncoderMode_TI12 = 3
} enum_313;

typedef enum enum_313 TIM5_EncoderMode_TypeDef;

typedef enum enum_300 {
  TIM5_AutomaticOutput_Disable = 0,
  TIM5_AutomaticOutput_Enable = 64
} enum_300;

typedef enum enum_309 {
  TIM5_TRGSelection_TIM4 = 0,
  TIM5_TRGSelection_TIM1 = 16,
  TIM5_TRGSelection_TIM3 = 32,
  TIM5_TRGSelection_TIM2 = 48,
  TIM5_TRGSelection_TI1F_ED = 64,
  TIM5_TRGSelection_TI1FP1 = 80,
  TIM5_TRGSelection_TI2FP2 = 96,
  TIM5_TRGSelection_ETRF = 112
} enum_309;

typedef enum enum_306 {
  TIM5_ICPSC_DIV1 = 0,
  TIM5_ICPSC_DIV2 = 4,
  TIM5_ICPSC_DIV4 = 8,
  TIM5_ICPSC_DIV8 = 12
} enum_306;

typedef enum enum_306 TIM5_ICPSC_TypeDef;

typedef enum enum_315 {
  TIM5_UpdateSource_Global = 0,
  TIM5_UpdateSource_Regular = 1
} enum_315;

typedef enum enum_315 TIM5_UpdateSource_TypeDef;

typedef enum enum_316 {
  TIM5_TRGOSource_Reset = 0,
  TIM5_TRGOSource_Enable = 16,
  TIM5_TRGOSource_Update = 32,
  TIM5_TRGOSource_OC1 = 48,
  TIM5_TRGOSource_OC1REF = 64,
  TIM5_TRGOSource_OC2REF = 80
} enum_316;

typedef enum enum_316 TIM5_TRGOSource_TypeDef;

typedef enum enum_300 TIM5_AutomaticOutput_TypeDef;

typedef enum enum_309 TIM5_TRGSelection_TypeDef;

typedef enum enum_290 TIM5_ForcedAction_TypeDef;

typedef enum enum_301 TIM5_LockLevel_TypeDef;

typedef enum enum_81 {
  DAC_TriangleAmplitude_1 = 0,
  DAC_TriangleAmplitude_3 = 1,
  DAC_TriangleAmplitude_7 = 2,
  DAC_TriangleAmplitude_15 = 3,
  DAC_TriangleAmplitude_31 = 4,
  DAC_TriangleAmplitude_63 = 5,
  DAC_TriangleAmplitude_127 = 6,
  DAC_TriangleAmplitude_255 = 7,
  DAC_TriangleAmplitude_511 = 8,
  DAC_TriangleAmplitude_1023 = 9,
  DAC_TriangleAmplitude_2047 = 10,
  DAC_TriangleAmplitude_4095 = 11
} enum_81;

typedef enum enum_81 DAC_TriangleAmplitude_TypeDef;

typedef enum enum_73 {
  DAC_Trigger_T4_TRGO = 0,
  DAC_Trigger_T5_TRGO = 8,
  DAC_Trigger_Ext = 16,
  DAC_Trigger_None = 48,
  DAC_Trigger_Software = 56
} enum_73;

typedef enum enum_73 DAC_Trigger_TypeDef;

typedef enum enum_80 {
  DAC_LFSRUnmask_Bit0 = 0,
  DAC_LFSRUnmask_Bits1_0 = 1,
  DAC_LFSRUnmask_Bits2_0 = 2,
  DAC_LFSRUnmask_Bits3_0 = 3,
  DAC_LFSRUnmask_Bits4_0 = 4,
  DAC_LFSRUnmask_Bits5_0 = 5,
  DAC_LFSRUnmask_Bits6_0 = 6,
  DAC_LFSRUnmask_Bits7_0 = 7,
  DAC_LFSRUnmask_Bits8_0 = 8,
  DAC_LFSRUnmask_Bits9_0 = 9,
  DAC_LFSRUnmask_Bits10_0 = 10,
  DAC_LFSRUnmask_Bits11_0 = 11
} enum_80;

typedef enum enum_80 DAC_LFSRUnmask_TypeDef;

typedef enum enum_79 { DAC_FLAG_DMAUDR = 1 } enum_79;

typedef enum enum_74 {
  DAC_Align_12b_R = 0,
  DAC_Align_12b_L = 4,
  DAC_Align_8b_R = 8
} enum_74;

typedef enum enum_74 DAC_Align_TypeDef;

typedef enum enum_79 DAC_FLAG_TypeDef;

typedef enum enum_75 { DAC_Channel_1 = 0, DAC_Channel_2 = 1 } enum_75;

typedef enum enum_75 DAC_Channel_TypeDef;

typedef enum enum_77 {
  DAC_OutputBuffer_Enable = 0,
  DAC_OutputBuffer_Disable = 2
} enum_77;

typedef enum enum_77 DAC_OutputBuffer_TypeDef;

typedef enum enum_78 { DAC_IT_DMAUDR = 32 } enum_78;

typedef enum enum_78 DAC_IT_TypeDef;

typedef enum enum_76 { DAC_Wave_Noise = 64, DAC_Wave_Triangle = 128 } enum_76;

typedef enum enum_76 DAC_Wave_TypeDef;

#define CR1_Offset 0

#define CR2_Offset 1

#define CH2RDHRH_Offset 20

#define CH1RDHRH_Offset 8

#define DCH1RDHRH_Offset 32

typedef enum enum_135 {
  RST_FLAG_PORF = 1,
  RST_FLAG_IWDGF = 2,
  RST_FLAG_ILLOPF = 4,
  RST_FLAG_SWIMF = 8,
  RST_FLAG_WWDGF = 16,
  RST_FLAG_BORF = 32
} enum_135;

typedef enum enum_135 RST_FLAG_TypeDef;

typedef enum enum_117 {
  ITC_PriorityLevel_2 = 0,
  ITC_PriorityLevel_1 = 1,
  ITC_PriorityLevel_0 = 2,
  ITC_PriorityLevel_3 = 3
} enum_117;

typedef enum enum_117 ITC_PriorityLevel_TypeDef;

typedef enum enum_116 {
  FLASH_IRQn = 1,
  DMA1_CHANNEL0_1_IRQn = 2,
  DMA1_CHANNEL2_3_IRQn = 3,
  EXTIE_F_PVD_IRQn = 5,
  EXTI0_IRQn = 8,
  EXTI1_IRQn = 9,
  EXTI2_IRQn = 10,
  EXTI3_IRQn = 11,
  EXTI4_IRQn = 12,
  EXTI5_IRQn = 13,
  EXTI6_IRQn = 14,
  EXTI7_IRQn = 15,
  ADC1_COMP_IRQn = 18,
  TIM4_UPD_OVF_TRG_IRQn = 25,
  SPI1_IRQn = 26
} enum_116;

typedef enum enum_116 IRQn_TypeDef;

#define CPU_SOFT_INT_DISABLED 40

typedef enum enum_42 {
  ADC_Group_SlowChannels = 0,
  ADC_Group_FastChannels = 1
} enum_42;

typedef enum enum_42 ADC_Group_TypeDef;

typedef enum enum_39 { ADC_Prescaler_1 = 0, ADC_Prescaler_2 = 128 } enum_39;

typedef enum enum_37 {
  ADC_ConversionMode_Single = 0,
  ADC_ConversionMode_Continuous = 4
} enum_37;

typedef enum enum_38 {
  ADC_Resolution_12Bit = 0,
  ADC_Resolution_10Bit = 32,
  ADC_Resolution_8Bit = 64,
  ADC_Resolution_6Bit = 96
} enum_38;

typedef enum enum_36 {
  ADC_Channel_24 = 1,
  ADC_Channel_25 = 2,
  ADC_Channel_26 = 4,
  ADC_Channel_27 = 8,
  ADC_Channel_Vrefint = 16,
  ADC_Channel_TempSensor = 32,
  ADC_Channel_24To27 = 255,
  ADC_Channel_16 = 257,
  ADC_Channel_17 = 258,
  ADC_Channel_18 = 260,
  ADC_Channel_19 = 264,
  ADC_Channel_20 = 272,
  ADC_Channel_21 = 288,
  ADC_Channel_22 = 320,
  ADC_Channel_23 = 384,
  ADC_Channel_16To23 = 511,
  ADC_Channel_8 = 513,
  ADC_Channel_9 = 514,
  ADC_Channel_10 = 516,
  ADC_Channel_11 = 520,
  ADC_Channel_12 = 528,
  ADC_Channel_13 = 544,
  ADC_Channel_14 = 576,
  ADC_Channel_15 = 640,
  ADC_Channel_08To15 = 767,
  ADC_Channel_0 = 769,
  ADC_Channel_1 = 770,
  ADC_Channel_2 = 772,
  ADC_Channel_3 = 776,
  ADC_Channel_4 = 784,
  ADC_Channel_5 = 800,
  ADC_Channel_6 = 832,
  ADC_Channel_7 = 896,
  ADC_Channel_00To07 = 1023
} enum_36;

typedef enum enum_44 {
  ADC_AnalogWatchdogSelection_Channel0 = 0,
  ADC_AnalogWatchdogSelection_Channel1 = 1,
  ADC_AnalogWatchdogSelection_Channel2 = 2,
  ADC_AnalogWatchdogSelection_Channel3 = 3,
  ADC_AnalogWatchdogSelection_Channel4 = 4,
  ADC_AnalogWatchdogSelection_Channel5 = 5,
  ADC_AnalogWatchdogSelection_Channel6 = 6,
  ADC_AnalogWatchdogSelection_Channel7 = 7,
  ADC_AnalogWatchdogSelection_Channel8 = 8,
  ADC_AnalogWatchdogSelection_Channel9 = 9,
  ADC_AnalogWatchdogSelection_Channel10 = 10,
  ADC_AnalogWatchdogSelection_Channel11 = 11,
  ADC_AnalogWatchdogSelection_Channel12 = 12,
  ADC_AnalogWatchdogSelection_Channel13 = 13,
  ADC_AnalogWatchdogSelection_Channel14 = 14,
  ADC_AnalogWatchdogSelection_Channel15 = 15,
  ADC_AnalogWatchdogSelection_Channel16 = 16,
  ADC_AnalogWatchdogSelection_Channel17 = 17,
  ADC_AnalogWatchdogSelection_Channel18 = 18,
  ADC_AnalogWatchdogSelection_Channel19 = 19,
  ADC_AnalogWatchdogSelection_Channel20 = 20,
  ADC_AnalogWatchdogSelection_Channel21 = 21,
  ADC_AnalogWatchdogSelection_Channel22 = 22,
  ADC_AnalogWatchdogSelection_Channel23 = 23,
  ADC_AnalogWatchdogSelection_Channel24 = 24,
  ADC_AnalogWatchdogSelection_Channel25 = 25,
  ADC_AnalogWatchdogSelection_Channel26 = 26,
  ADC_AnalogWatchdogSelection_Channel27 = 27,
  ADC_AnalogWatchdogSelection_Vrefint = 28,
  ADC_AnalogWatchdogSelection_TempSensor = 29
} enum_44;

typedef enum enum_45 {
  ADC_IT_EOC = 8,
  ADC_IT_AWD = 16,
  ADC_IT_OVER = 128
} enum_45;

typedef enum enum_46 {
  ADC_FLAG_EOC = 1,
  ADC_FLAG_AWD = 2,
  ADC_FLAG_OVER = 4
} enum_46;

typedef enum enum_46 ADC_FLAG_TypeDef;

typedef enum enum_43 {
  ADC_SamplingTime_4Cycles = 0,
  ADC_SamplingTime_9Cycles = 1,
  ADC_SamplingTime_16Cycles = 2,
  ADC_SamplingTime_24Cycles = 3,
  ADC_SamplingTime_48Cycles = 4,
  ADC_SamplingTime_96Cycles = 5,
  ADC_SamplingTime_192Cycles = 6,
  ADC_SamplingTime_384Cycles = 7
} enum_43;

typedef enum enum_40 {
  ADC_ExtTRGSensitivity_Rising = 32,
  ADC_ExtTRGSensitivity_Falling = 64,
  ADC_ExtTRGSensitivity_All = 96
} enum_40;

typedef enum enum_40 ADC_ExtTRGSensitivity_TypeDef;

typedef enum enum_41 {
  ADC_ExtEventSelection_None = 0,
  ADC_ExtEventSelection_Trigger1 = 8,
  ADC_ExtEventSelection_Trigger2 = 16,
  ADC_ExtEventSelection_Trigger3 = 24
} enum_41;

typedef enum enum_36 ADC_Channel_TypeDef;

typedef enum enum_45 ADC_IT_TypeDef;

typedef enum enum_39 ADC_Prescaler_TypeDef;

typedef enum enum_41 ADC_ExtEventSelection_TypeDef;

typedef enum enum_38 ADC_Resolution_TypeDef;

typedef enum enum_44 ADC_AnalogWatchdogSelection_TypeDef;

typedef enum enum_37 ADC_ConversionMode_TypeDef;

typedef enum enum_43 ADC_SamplingTime_TypeDef;

typedef enum enum_333 {
  USART_LastBit_Disable = 0,
  USART_LastBit_Enable = 1
} enum_333;

typedef enum enum_333 USART_LastBit_TypeDef;

typedef enum enum_332 { USART_CPHA_1Edge = 0, USART_CPHA_2Edge = 2 } enum_332;

typedef enum enum_331 { USART_CPOL_Low = 0, USART_CPOL_High = 4 } enum_331;

typedef enum enum_330 {
  USART_Clock_Disable = 0,
  USART_Clock_Enable = 8
} enum_330;

typedef enum enum_321 {
  USART_IT_PE = 256,
  USART_IT_FE = 257,
  USART_IT_NF = 258,
  USART_IT_OR = 565,
  USART_IT_IDLE = 580,
  USART_IT_RXNE = 597,
  USART_IT_TC = 614,
  USART_IT_TXE = 631,
  USART_IT_ERR = 1280
} enum_321;

typedef enum enum_321 USART_IT_TypeDef;

typedef enum enum_324 {
  USART_Parity_No = 0,
  USART_Parity_Even = 4,
  USART_Parity_Odd = 6
} enum_324;

typedef enum enum_324 USART_Parity_TypeDef;

typedef enum enum_327 { USART_Mode_Rx = 4, USART_Mode_Tx = 8 } enum_327;

typedef enum enum_327 USART_Mode_TypeDef;

typedef enum enum_325 {
  USART_LINBreakDetectionLength_10BITS = 0,
  USART_LINBreakDetectionLength_11BITS = 1
} enum_325;

typedef enum enum_325 USART_LINBreakDetectionLength_TypeDef;

typedef enum enum_331 USART_CPOL_TypeDef;

typedef enum enum_329 {
  USART_IrDAMode_Normal = 0,
  USART_IrDAMode_LowPower = 1
} enum_329;

typedef enum enum_329 USART_IrDAMode_TypeDef;

typedef enum enum_323 {
  USART_StopBits_1 = 0,
  USART_StopBits_2 = 32,
  USART_StopBits_1_5 = 48
} enum_323;

typedef enum enum_323 USART_StopBits_TypeDef;

typedef enum enum_328 { USART_DMAReq_RX = 64, USART_DMAReq_TX = 128 } enum_328;

typedef enum enum_328 USART_DMAReq_TypeDef;

typedef enum enum_320 {
  USART_FLAG_PE = 1,
  USART_FLAG_FE = 2,
  USART_FLAG_NF = 4,
  USART_FLAG_OR = 8,
  USART_FLAG_IDLE = 16,
  USART_FLAG_RXNE = 32,
  USART_FLAG_TC = 64,
  USART_FLAG_TXE = 128,
  USART_FLAG_SBK = 257
} enum_320;

typedef enum enum_320 USART_FLAG_TypeDef;

typedef enum enum_322 {
  USART_WakeUp_IdleLine = 0,
  USART_WakeUp_AddressMark = 8
} enum_322;

typedef enum enum_322 USART_WakeUp_TypeDef;

typedef enum enum_332 USART_CPHA_TypeDef;

typedef enum enum_326 {
  USART_WordLength_8b = 0,
  USART_WordLength_9b = 16
} enum_326;

typedef enum enum_330 USART_Clock_TypeDef;

typedef enum enum_326 USART_WordLength_TypeDef;

#define USART_DATA_9BITS_MAX 511

#define USART_ADDRESS_MAX 16

typedef enum enum_223 { TIM2_Channel_1 = 0, TIM2_Channel_2 = 1 } enum_223;

typedef enum enum_223 TIM2_Channel_TypeDef;

typedef enum enum_219 {
  TIM2_ForcedAction_Inactive = 64,
  TIM2_ForcedAction_Active = 80
} enum_219;

typedef enum enum_243 {
  TIM2_EventSource_Update = 1,
  TIM2_EventSource_CC1 = 2,
  TIM2_EventSource_CC2 = 4,
  TIM2_EventSource_Trigger = 64,
  TIM2_EventSource_Break = 128
} enum_243;

typedef enum enum_243 TIM2_EventSource_TypeDef;

typedef enum enum_227 {
  TIM2_BreakState_Disable = 0,
  TIM2_BreakState_Enable = 16
} enum_227;

typedef enum enum_227 TIM2_BreakState_TypeDef;

typedef enum enum_225 {
  TIM2_OCPolarity_High = 0,
  TIM2_OCPolarity_Low = 1
} enum_225;

typedef enum enum_224 {
  TIM2_CounterMode_Up = 0,
  TIM2_CounterMode_Down = 16,
  TIM2_CounterMode_CenterAligned1 = 32,
  TIM2_CounterMode_CenterAligned2 = 64,
  TIM2_CounterMode_CenterAligned3 = 96
} enum_224;

typedef enum enum_222 {
  TIM2_OPMode_Repetitive = 0,
  TIM2_OPMode_Single = 1
} enum_222;

typedef enum enum_221 {
  TIM2_OCMode_Timing = 0,
  TIM2_OCMode_Active = 16,
  TIM2_OCMode_Inactive = 32,
  TIM2_OCMode_Toggle = 48,
  TIM2_OCMode_PWM1 = 96,
  TIM2_OCMode_PWM2 = 112
} enum_221;

typedef enum enum_220 {
  TIM2_Prescaler_1 = 0,
  TIM2_Prescaler_2 = 1,
  TIM2_Prescaler_4 = 2,
  TIM2_Prescaler_8 = 3,
  TIM2_Prescaler_16 = 4,
  TIM2_Prescaler_32 = 5,
  TIM2_Prescaler_64 = 6,
  TIM2_Prescaler_128 = 7
} enum_220;

typedef enum enum_229 {
  TIM2_AutomaticOutput_Disable = 0,
  TIM2_AutomaticOutput_Enable = 64
} enum_229;

typedef enum enum_228 {
  TIM2_BreakPolarity_Low = 0,
  TIM2_BreakPolarity_High = 32
} enum_228;

typedef enum enum_233 {
  TIM2_ICPolarity_Rising = 0,
  TIM2_ICPolarity_Falling = 1
} enum_233;

typedef enum enum_233 TIM2_ICPolarity_TypeDef;

typedef enum enum_226 {
  TIM2_OutputState_Disable = 0,
  TIM2_OutputState_Enable = 1
} enum_226;

typedef enum enum_237 {
  TIM2_ExtTRGPSC_OFF = 0,
  TIM2_ExtTRGPSC_DIV2 = 16,
  TIM2_ExtTRGPSC_DIV4 = 32,
  TIM2_ExtTRGPSC_DIV8 = 48
} enum_237;

typedef enum enum_237 TIM2_ExtTRGPSC_TypeDef;

typedef enum enum_230 {
  TIM2_LockLevel_Off = 0,
  TIM2_LockLevel_1 = 1,
  TIM2_LockLevel_2 = 2,
  TIM2_LockLevel_3 = 3
} enum_230;

typedef enum enum_230 TIM2_LockLevel_TypeDef;

typedef enum enum_236 {
  TIM2_IT_Update = 1,
  TIM2_IT_CC1 = 2,
  TIM2_IT_CC2 = 4,
  TIM2_IT_Trigger = 64,
  TIM2_IT_Break = 128
} enum_236;

typedef enum enum_235 {
  TIM2_ICPSC_DIV1 = 0,
  TIM2_ICPSC_DIV2 = 4,
  TIM2_ICPSC_DIV4 = 8,
  TIM2_ICPSC_DIV8 = 12
} enum_235;

typedef enum enum_234 {
  TIM2_ICSelection_DirectTI = 1,
  TIM2_ICSelection_IndirectTI = 2,
  TIM2_ICSelection_TRGI = 3
} enum_234;

typedef enum enum_232 {
  TIM2_OCIdleState_Reset = 0,
  TIM2_OCIdleState_Set = 1
} enum_232;

typedef enum enum_231 {
  TIM2_OSSIState_Disable = 0,
  TIM2_OSSIState_Enable = 4
} enum_231;

typedef enum enum_222 TIM2_OPMode_TypeDef;

typedef enum enum_239 {
  TIM2_TIxExternalCLK1Source_TI1ED = 64,
  TIM2_TIxExternalCLK1Source_TI1 = 80,
  TIM2_TIxExternalCLK1Source_TI2 = 96
} enum_239;

typedef enum enum_238 {
  TIM2_TRGSelection_TIM4 = 0,
  TIM2_TRGSelection_TIM1 = 16,
  TIM2_TRGSelection_TIM3 = 32,
  TIM2_TRGSelection_TIM5 = 48,
  TIM2_TRGSelection_TI1F_ED = 64,
  TIM2_TRGSelection_TI1FP1 = 80,
  TIM2_TRGSelection_TI2FP2 = 96,
  TIM2_TRGSelection_ETRF = 112
} enum_238;

typedef enum enum_229 TIM2_AutomaticOutput_TypeDef;

typedef enum enum_232 TIM2_OCIdleState_TypeDef;

typedef enum enum_236 TIM2_IT_TypeDef;

typedef enum enum_247 {
  TIM2_FLAG_Update = 1,
  TIM2_FLAG_CC1 = 2,
  TIM2_FLAG_CC2 = 4,
  TIM2_FLAG_Trigger = 64,
  TIM2_FLAG_Break = 128,
  TIM2_FLAG_CC1OF = 512,
  TIM2_FLAG_CC2OF = 1024
} enum_247;

typedef enum enum_246 {
  TIM2_SlaveMode_Reset = 4,
  TIM2_SlaveMode_Gated = 5,
  TIM2_SlaveMode_Trigger = 6,
  TIM2_SlaveMode_External1 = 7
} enum_246;

typedef enum enum_245 {
  TIM2_TRGOSource_Reset = 0,
  TIM2_TRGOSource_Enable = 16,
  TIM2_TRGOSource_Update = 32,
  TIM2_TRGOSource_OC1 = 48,
  TIM2_TRGOSource_OC1REF = 64,
  TIM2_TRGOSource_OC2REF = 80
} enum_245;

typedef enum enum_244 {
  TIM2_UpdateSource_Global = 0,
  TIM2_UpdateSource_Regular = 1
} enum_244;

typedef enum enum_242 {
  TIM2_EncoderMode_TI1 = 1,
  TIM2_EncoderMode_TI2 = 2,
  TIM2_EncoderMode_TI12 = 3
} enum_242;

typedef enum enum_238 TIM2_TRGSelection_TypeDef;

typedef enum enum_241 {
  TIM2_PSCReloadMode_Update = 0,
  TIM2_PSCReloadMode_Immediate = 1
} enum_241;

typedef enum enum_240 {
  TIM2_ExtTRGPolarity_NonInverted = 0,
  TIM2_ExtTRGPolarity_Inverted = 128
} enum_240;

typedef enum enum_248 {
  TIM2_DMASource_Update = 1,
  TIM2_DMASource_CC1 = 2,
  TIM2_DMASource_CC2 = 4
} enum_248;

typedef enum enum_225 TIM2_OCPolarity_TypeDef;

typedef enum enum_241 TIM2_PSCReloadMode_TypeDef;

typedef enum enum_226 TIM2_OutputState_TypeDef;

typedef enum enum_239 TIM2_TIxExternalCLK1Source_TypeDef;

typedef enum enum_247 TIM2_FLAG_TypeDef;

typedef enum enum_245 TIM2_TRGOSource_TypeDef;

typedef enum enum_219 TIM2_ForcedAction_TypeDef;

typedef enum enum_244 TIM2_UpdateSource_TypeDef;

typedef enum enum_228 TIM2_BreakPolarity_TypeDef;

typedef enum enum_231 TIM2_OSSIState_TypeDef;

typedef enum enum_246 TIM2_SlaveMode_TypeDef;

typedef enum enum_248 TIM2_DMASource_TypeDef;

typedef enum enum_221 TIM2_OCMode_TypeDef;

typedef enum enum_224 TIM2_CounterMode_TypeDef;

typedef enum enum_220 TIM2_Prescaler_TypeDef;

typedef enum enum_235 TIM2_ICPSC_TypeDef;

typedef enum enum_240 TIM2_ExtTRGPolarity_TypeDef;

typedef enum enum_242 TIM2_EncoderMode_TypeDef;

typedef enum enum_234 TIM2_ICSelection_TypeDef;

typedef struct RTC_TimeTypeDef RTC_TimeTypeDef, *PRTC_TimeTypeDef;

typedef enum enum_139 { RTC_H12_AM = 0, RTC_H12_PM = 64 } enum_139;

typedef enum enum_139 RTC_H12_TypeDef;

struct RTC_TimeTypeDef {
  uint8_t RTC_Hours;
  uint8_t RTC_Minutes;
  uint8_t RTC_Seconds;
  RTC_H12_TypeDef RTC_H12;
};

typedef enum enum_143 {
  RTC_WakeUpClock_RTCCLK_Div16 = 0,
  RTC_WakeUpClock_RTCCLK_Div8 = 1,
  RTC_WakeUpClock_RTCCLK_Div4 = 2,
  RTC_WakeUpClock_RTCCLK_Div2 = 3,
  RTC_WakeUpClock_CK_SPRE_16bits = 4,
  RTC_WakeUpClock_CK_SPRE_17bits = 6
} enum_143;

typedef enum enum_143 RTC_WakeUpClock_TypeDef;

typedef enum enum_149 { RTC_Format_BIN = 0, RTC_Format_BCD = 1 } enum_149;

typedef enum enum_149 RTC_Format_TypeDef;

typedef enum enum_152 {
  RTC_TamperLevel_Low = 0,
  RTC_TamperLevel_High = 84
} enum_152;

typedef enum enum_152 RTC_TamperLevel_TypeDef;

typedef enum enum_159 {
  RTC_SmoothCalibPeriod_32sec = 0,
  RTC_SmoothCalibPeriod_16sec = 32,
  RTC_SmoothCalibPeriod_8sec = 64
} enum_159;

typedef enum enum_159 RTC_SmoothCalibPeriod_TypeDef;

typedef enum enum_148 {
  RTC_StoreOperation_Reset = 0,
  RTC_StoreOperation_Set = 4
} enum_148;

typedef enum enum_148 RTC_StoreOperation_TypeDef;

typedef enum enum_151 {
  RTC_IT_ALRA = 16,
  RTC_IT_WUT = 64,
  RTC_IT_TAMP = 3841
} enum_151;

typedef enum enum_151 RTC_IT_TypeDef;

typedef struct RTC_InitTypeDef RTC_InitTypeDef, *PRTC_InitTypeDef;

typedef enum enum_138 {
  RTC_HourFormat_24 = 0,
  RTC_HourFormat_12 = 64
} enum_138;

typedef enum enum_138 RTC_HourFormat_TypeDef;

struct RTC_InitTypeDef {
  RTC_HourFormat_TypeDef RTC_HourFormat;
  uint8_t RTC_AsynchPrediv;
  uint16_t RTC_SynchPrediv;
};

typedef enum enum_137 {
  RTC_Month_January = 1,
  RTC_Month_February = 2,
  RTC_Month_March = 3,
  RTC_Month_April = 4,
  RTC_Month_May = 5,
  RTC_Month_June = 6,
  RTC_Month_July = 7,
  RTC_Month_August = 8,
  RTC_Month_September = 9,
  RTC_Month_October = 16,
  RTC_Month_November = 17,
  RTC_Month_December = 18
} enum_137;

typedef enum enum_137 RTC_Month_TypeDef;

typedef enum enum_153 {
  RTC_TamperState_Disable = 0,
  RTC_TamperState_Enable = 1
} enum_153;

typedef enum enum_153 RTC_TamperState_TypeDef;

typedef enum enum_160 {
  RTC_SmoothCalibPlusPulses_Reset = 0,
  RTC_SmoothCalibPlusPulses_Set = 128
} enum_160;

typedef enum enum_160 RTC_SmoothCalibPlusPulses_TypeDef;

typedef enum enum_136 {
  RTC_Weekday_Monday = 1,
  RTC_Weekday_Tuesday = 2,
  RTC_Weekday_Wednesday = 3,
  RTC_Weekday_Thursday = 4,
  RTC_Weekday_Friday = 5,
  RTC_Weekday_Saturday = 6,
  RTC_Weekday_Sunday = 7
} enum_136;

typedef enum enum_136 RTC_Weekday_TypeDef;

typedef enum enum_150 {
  RTC_FLAG_ALRAF = 1,
  RTC_FLAG_WUTF = 4,
  RTC_FLAG_TAMP1F = 32,
  RTC_FLAG_TAMP2F = 64,
  RTC_FLAG_TAMP3F = 128,
  RTC_FLAG_ALRAWF = 256,
  RTC_FLAG_RECALPF = 512,
  RTC_FLAG_WUTWF = 1024,
  RTC_FLAG_SHPF = 2048,
  RTC_FLAG_INITS = 4096,
  RTC_FLAG_RSF = 8192,
  RTC_FLAG_INITF = 16384
} enum_150;

typedef enum enum_150 RTC_Flag_TypeDef;

typedef enum enum_140 {
  RTC_AlarmDateWeekDaySel_Date = 0,
  RTC_AlarmDateWeekDaySel_WeekDay = 64
} enum_140;

typedef enum enum_140 RTC_AlarmDateWeekDaySel_TypeDef;

typedef enum enum_156 {
  RTC_TamperFilter_1Sample = 0,
  RTC_TamperFilter_2Sample = 8,
  RTC_TamperFilter_4Sample = 16,
  RTC_TamperFilter_8Sample = 24
} enum_156;

typedef enum enum_156 RTC_TamperFilter_TypeDef;

typedef enum enum_141 {
  RTC_AlarmMask_None = 0,
  RTC_AlarmMask_DateWeekDay = 16,
  RTC_AlarmMask_Hours = 32,
  RTC_AlarmMask_Minutes = 64,
  RTC_AlarmMask_Seconds = 128,
  RTC_AlarmMask_All = 240
} enum_141;

typedef enum enum_141 RTC_AlarmMask_TypeDef;

typedef struct RTC_DateTypeDef RTC_DateTypeDef, *PRTC_DateTypeDef;

struct RTC_DateTypeDef {
  RTC_Weekday_TypeDef RTC_WeekDay;
  RTC_Month_TypeDef RTC_Month;
  uint8_t RTC_Date;
  uint8_t RTC_Year;
};

typedef enum enum_144 {
  RTC_Output_Disable = 0,
  RTC_Output_Alarm = 32,
  RTC_Output_WakeUp = 96
} enum_144;

typedef enum enum_144 RTC_Output_TypeDef;

typedef enum enum_146 {
  RTC_CalibOutput_512Hz = 0,
  RTC_CalibOutput_1Hz = 128
} enum_146;

typedef enum enum_146 RTC_CalibOutput_TypeDef;

typedef enum enum_147 {
  RTC_DayLightSaving_ADD1H = 1,
  RTC_DayLightSaving_SUB1H = 2
} enum_147;

typedef enum enum_145 {
  RTC_OutputPolarity_High = 0,
  RTC_OutputPolarity_Low = 16
} enum_145;

typedef enum enum_142 {
  RTC_AlarmSubSecondMask_All = 0,
  RTC_AlarmSubSecondMask_SS14_1 = 1,
  RTC_AlarmSubSecondMask_SS14_2 = 2,
  RTC_AlarmSubSecondMask_SS14_3 = 3,
  RTC_AlarmSubSecondMask_SS14_4 = 4,
  RTC_AlarmSubSecondMask_SS14_5 = 5,
  RTC_AlarmSubSecondMask_SS14_6 = 6,
  RTC_AlarmSubSecondMask_SS14_7 = 7,
  RTC_AlarmSubSecondMask_SS14_8 = 8,
  RTC_AlarmSubSecondMask_SS14_9 = 9,
  RTC_AlarmSubSecondMask_SS14_10 = 10,
  RTC_AlarmSubSecondMask_SS14_11 = 11,
  RTC_AlarmSubSecondMask_SS14_12 = 12,
  RTC_AlarmSubSecondMask_SS14_13 = 13,
  RTC_AlarmSubSecondMask_SS14 = 14,
  RTC_AlarmSubSecondMask_None = 15
} enum_142;

typedef enum enum_147 RTC_DayLightSaving_TypeDef;

typedef enum enum_157 {
  RTC_TamperSamplingFreq_RTCCLK_Div32768 = 0,
  RTC_TamperSamplingFreq_RTCCLK_Div16384 = 1,
  RTC_TamperSamplingFreq_RTCCLK_Div8192 = 2,
  RTC_TamperSamplingFreq_RTCCLK_Div4096 = 3,
  RTC_TamperSamplingFreq_RTCCLK_Div2048 = 4,
  RTC_TamperSamplingFreq_RTCCLK_Div1024 = 5,
  RTC_TamperSamplingFreq_RTCCLK_Div512 = 6,
  RTC_TamperSamplingFreq_RTCCLK_Div256 = 7
} enum_157;

typedef enum enum_157 RTC_TamperSamplingFreq_TypeDef;

typedef struct RTC_AlarmTypeDef RTC_AlarmTypeDef, *PRTC_AlarmTypeDef;

struct RTC_AlarmTypeDef {
  struct RTC_TimeTypeDef RTC_AlarmTime;
  uint8_t RTC_AlarmMask;
  RTC_AlarmDateWeekDaySel_TypeDef RTC_AlarmDateWeekDaySel;
  uint8_t RTC_AlarmDateWeekDay;
};

typedef enum enum_142 RTC_AlarmSubSecondMask_TypeDef;

typedef enum enum_158 {
  RTC_ShiftAdd1S_Reset = 0,
  RTC_ShiftAdd1S_Set = 128
} enum_158;

typedef enum enum_155 {
  RTC_TamperPrechargeDuration_1RTCCLK = 0,
  RTC_TamperPrechargeDuration_2RTCCLK = 32,
  RTC_TamperPrechargeDuration_4RTCCLK = 64,
  RTC_TamperPrechargeDuration_8RTCCLK = 96,
  RTC_TamperPrechargeDuration_None = 128
} enum_155;

typedef enum enum_154 {
  RTC_Tamper_1 = 2,
  RTC_Tamper_2 = 8,
  RTC_Tamper_3 = 32
} enum_154;

typedef enum enum_145 RTC_OutputPolarity_TypeDef;

typedef enum enum_154 RTC_Tamper_TypeDef;

typedef enum enum_155 RTC_TamperPrechargeDuration_TypeDef;

typedef enum enum_158 RTC_ShiftAdd1S_TypeDef;

typedef enum enum_176 {
  SPI_IT_ERR = 5,
  SPI_IT_RXNE = 6,
  SPI_IT_TXE = 23,
  SPI_IT_WKUP = 52,
  SPI_IT_CRCERR = 69,
  SPI_IT_MODF = 85,
  SPI_IT_OVR = 101
} enum_176;

typedef enum enum_175 {
  SPI_FLAG_RXNE = 1,
  SPI_FLAG_TXE = 2,
  SPI_FLAG_WKUP = 8,
  SPI_FLAG_CRCERR = 16,
  SPI_FLAG_MODF = 32,
  SPI_FLAG_OVR = 64,
  SPI_FLAG_BSY = 128
} enum_175;

typedef enum enum_174 { SPI_CRC_RX = 0, SPI_CRC_TX = 1 } enum_174;

typedef enum enum_175 SPI_FLAG_TypeDef;

typedef enum enum_173 { SPI_DMAReq_RX = 1, SPI_DMAReq_TX = 2 } enum_173;

typedef enum enum_172 { SPI_FirstBit_MSB = 0, SPI_FirstBit_LSB = 128 } enum_172;

typedef enum enum_171 { SPI_CPHA_1Edge = 0, SPI_CPHA_2Edge = 1 } enum_171;

typedef enum enum_170 { SPI_CPOL_Low = 0, SPI_CPOL_High = 2 } enum_170;

typedef enum enum_171 SPI_CPHA_TypeDef;

typedef enum enum_167 { SPI_Direction_Rx = 0, SPI_Direction_Tx = 1 } enum_167;

typedef enum enum_167 SPI_Direction_TypeDef;

typedef enum enum_169 {
  SPI_BaudRatePrescaler_2 = 0,
  SPI_BaudRatePrescaler_4 = 8,
  SPI_BaudRatePrescaler_8 = 16,
  SPI_BaudRatePrescaler_16 = 24,
  SPI_BaudRatePrescaler_32 = 32,
  SPI_BaudRatePrescaler_64 = 40,
  SPI_BaudRatePrescaler_128 = 48,
  SPI_BaudRatePrescaler_256 = 56
} enum_169;

typedef enum enum_169 SPI_BaudRatePrescaler_TypeDef;

typedef enum enum_168 { SPI_Mode_Slave = 0, SPI_Mode_Master = 4 } enum_168;

typedef enum enum_168 SPI_Mode_TypeDef;

typedef enum enum_172 SPI_FirstBit_TypeDef;

typedef enum enum_166 { SPI_NSS_Hard = 0, SPI_NSS_Soft = 2 } enum_166;

typedef enum enum_166 SPI_NSS_TypeDef;

typedef enum enum_165 {
  SPI_Direction_2Lines_FullDuplex = 0,
  SPI_Direction_2Lines_RxOnly = 4,
  SPI_Direction_1Line_Rx = 128,
  SPI_Direction_1Line_Tx = 192
} enum_165;

typedef enum enum_165 SPI_DirectionMode_TypeDef;

typedef enum enum_170 SPI_CPOL_TypeDef;

typedef enum enum_173 SPI_DMAReq_TypeDef;

typedef enum enum_174 SPI_CRC_TypeDef;

typedef enum enum_176 SPI_IT_TypeDef;

typedef enum enum_132 {
  LCD_PageSelection_FirstPage = 0,
  LCD_PageSelection_SecondPage = 4
} enum_132;

typedef enum enum_131 {
  LCD_PortMaskRegister_0 = 0,
  LCD_PortMaskRegister_1 = 1,
  LCD_PortMaskRegister_2 = 2,
  LCD_PortMaskRegister_3 = 3,
  LCD_PortMaskRegister_4 = 4,
  LCD_PortMaskRegister_5 = 5
} enum_131;

typedef enum enum_130 {
  LCD_RAMRegister_0 = 0,
  LCD_RAMRegister_1 = 1,
  LCD_RAMRegister_2 = 2,
  LCD_RAMRegister_3 = 3,
  LCD_RAMRegister_4 = 4,
  LCD_RAMRegister_5 = 5,
  LCD_RAMRegister_6 = 6,
  LCD_RAMRegister_7 = 7,
  LCD_RAMRegister_8 = 8,
  LCD_RAMRegister_9 = 9,
  LCD_RAMRegister_10 = 10,
  LCD_RAMRegister_11 = 11,
  LCD_RAMRegister_12 = 12,
  LCD_RAMRegister_13 = 13,
  LCD_RAMRegister_14 = 14,
  LCD_RAMRegister_15 = 15,
  LCD_RAMRegister_16 = 16,
  LCD_RAMRegister_17 = 17,
  LCD_RAMRegister_18 = 18,
  LCD_RAMRegister_19 = 19,
  LCD_RAMRegister_20 = 20,
  LCD_RAMRegister_21 = 21
} enum_130;

typedef enum enum_129 {
  LCD_BlinkFrequency_Div8 = 0,
  LCD_BlinkFrequency_Div16 = 8,
  LCD_BlinkFrequency_Div32 = 16,
  LCD_BlinkFrequency_Div64 = 24,
  LCD_BlinkFrequency_Div128 = 32,
  LCD_BlinkFrequency_Div256 = 40,
  LCD_BlinkFrequency_Div512 = 48,
  LCD_BlinkFrequency_Div1024 = 56
} enum_129;

typedef enum enum_129 LCD_BlinkFrequency_TypeDef;

typedef enum enum_130 LCD_RAMRegister_TypeDef;

typedef enum enum_132 LCD_PageSelection_TypeDef;

typedef enum enum_122 {
  LCD_Prescaler_1 = 0,
  LCD_Prescaler_2 = 16,
  LCD_Prescaler_4 = 32,
  LCD_Prescaler_8 = 48,
  LCD_Prescaler_16 = 64,
  LCD_Prescaler_32 = 80,
  LCD_Prescaler_64 = 96,
  LCD_Prescaler_128 = 112,
  LCD_Prescaler_256 = 128,
  LCD_Prescaler_512 = 144,
  LCD_Prescaler_1024 = 160,
  LCD_Prescaler_2048 = 176,
  LCD_Prescaler_4096 = 192,
  LCD_Prescaler_8192 = 208,
  LCD_Prescaler_16384 = 224,
  LCD_Prescaler_32768 = 240
} enum_122;

typedef enum enum_122 LCD_Prescaler_TypeDef;

typedef enum enum_124 {
  LCD_Contrast_Level_0 = 0,
  LCD_Contrast_Level_1 = 2,
  LCD_Contrast_Level_2 = 4,
  LCD_Contrast_Level_3 = 6,
  LCD_Contrast_Level_4 = 8,
  LCD_Contrast_Level_5 = 10,
  LCD_Contrast_Level_6 = 12,
  LCD_Contrast_Level_7 = 14
} enum_124;

typedef enum enum_124 LCD_Contrast_TypeDef;

typedef enum enum_125 {
  LCD_VoltageSource_Internal = 0,
  LCD_VoltageSource_External = 1
} enum_125;

typedef enum enum_125 LCD_VoltageSource_TypeDef;

typedef enum enum_128 {
  LCD_BlinkMode_Off = 0,
  LCD_BlinkMode_SEG0_COM0 = 64,
  LCD_BlinkMode_SEG0_AllCOM = 128,
  LCD_BlinkMode_AllSEG_AllCOM = 192
} enum_128;

typedef enum enum_128 LCD_BlinkMode_TypeDef;

typedef enum enum_126 {
  LCD_PulseOnDuration_0 = 0,
  LCD_PulseOnDuration_1 = 32,
  LCD_PulseOnDuration_2 = 64,
  LCD_PulseOnDuration_3 = 96,
  LCD_PulseOnDuration_4 = 128,
  LCD_PulseOnDuration_5 = 160,
  LCD_PulseOnDuration_6 = 192,
  LCD_PulseOnDuration_7 = 224
} enum_126;

typedef enum enum_126 LCD_PulseOnDuration_TypeDef;

typedef enum enum_123 {
  LCD_Divider_16 = 0,
  LCD_Divider_17 = 1,
  LCD_Divider_18 = 2,
  LCD_Divider_19 = 3,
  LCD_Divider_20 = 4,
  LCD_Divider_21 = 5,
  LCD_Divider_22 = 6,
  LCD_Divider_23 = 7,
  LCD_Divider_24 = 8,
  LCD_Divider_25 = 9,
  LCD_Divider_26 = 10,
  LCD_Divider_27 = 11,
  LCD_Divider_28 = 12,
  LCD_Divider_29 = 13,
  LCD_Divider_30 = 14,
  LCD_Divider_31 = 15
} enum_123;

typedef enum enum_123 LCD_Divider_TypeDef;

typedef enum enum_131 LCD_PortMaskRegister_TypeDef;

typedef enum enum_120 {
  LCD_Duty_Static = 0,
  LCD_Duty_1_2 = 2,
  LCD_Duty_1_3 = 4,
  LCD_Duty_1_4 = 6,
  LCD_Duty_1_8 = 32
} enum_120;

typedef enum enum_120 LCD_Duty_TypeDef;

typedef enum enum_121 {
  LCD_Bias_1_3 = 0,
  LCD_Bias_1_2 = 1,
  LCD_Bias_1_4 = 16
} enum_121;

typedef enum enum_121 LCD_Bias_TypeDef;

typedef enum enum_127 {
  LCD_DeadTime_0 = 0,
  LCD_DeadTime_1 = 1,
  LCD_DeadTime_2 = 2,
  LCD_DeadTime_3 = 3,
  LCD_DeadTime_4 = 4,
  LCD_DeadTime_5 = 5,
  LCD_DeadTime_6 = 6,
  LCD_DeadTime_7 = 7
} enum_127;

typedef enum enum_127 LCD_DeadTime_TypeDef;

typedef enum enum_87 {
  DMA1_FLAG_GB = 2,
  DMA1_FLAG_TC0 = 258,
  DMA1_FLAG_HT0 = 260,
  DMA1_FLAG_PEND0 = 320,
  DMA1_FLAG_BUSY0 = 384,
  DMA1_FLAG_TC1 = 514,
  DMA1_FLAG_HT1 = 516,
  DMA1_FLAG_PEND1 = 576,
  DMA1_FLAG_BUSY1 = 640,
  DMA1_FLAG_TC2 = 1026,
  DMA1_FLAG_HT2 = 1028,
  DMA1_FLAG_PEND2 = 1088,
  DMA1_FLAG_BUSY2 = 1152,
  DMA1_FLAG_TC3 = 2050,
  DMA1_FLAG_HT3 = 2052,
  DMA1_FLAG_PEND3 = 2112,
  DMA1_FLAG_BUSY3 = 2176,
  DMA1_FLAG_IFC0 = 4097,
  DMA1_FLAG_IFC1 = 4098,
  DMA1_FLAG_IFC2 = 4100,
  DMA1_FLAG_IFC3 = 4104
} enum_87;

typedef enum enum_87 DMA_FLAG_TypeDef;

typedef enum enum_85 {
  DMA_Priority_Low = 0,
  DMA_Priority_Medium = 16,
  DMA_Priority_High = 32,
  DMA_Priority_VeryHigh = 48
} enum_85;

typedef enum enum_85 DMA_Priority_TypeDef;

typedef enum enum_88 { DMA_ITx_TC = 2, DMA_ITx_HT = 4 } enum_88;

typedef enum enum_89 {
  DMA1_IT_TC0 = 18,
  DMA1_IT_HT0 = 20,
  DMA1_IT_TC1 = 34,
  DMA1_IT_HT1 = 36,
  DMA1_IT_TC2 = 66,
  DMA1_IT_HT2 = 68,
  DMA1_IT_TC3 = 130,
  DMA1_IT_HT3 = 132
} enum_89;

typedef enum enum_86 {
  DMA_MemoryDataSize_Byte = 0,
  DMA_MemoryDataSize_HalfWord = 8
} enum_86;

typedef enum enum_88 DMA_ITx_TypeDef;

typedef enum enum_84 {
  DMA_MemoryIncMode_Dec = 0,
  DMA_MemoryIncMode_Inc = 32
} enum_84;

typedef enum enum_82 {
  DMA_DIR_PeripheralToMemory = 0,
  DMA_DIR_MemoryToPeripheral = 8,
  DMA_DIR_Memory0ToMemory1 = 64
} enum_82;

typedef enum enum_83 { DMA_Mode_Normal = 0, DMA_Mode_Circular = 16 } enum_83;

typedef enum enum_86 DMA_MemoryDataSize_TypeDef;

typedef enum enum_89 DMA_IT_TypeDef;

typedef enum enum_84 DMA_MemoryIncMode_TypeDef;

typedef enum enum_82 DMA_DIR_TypeDef;

typedef enum enum_83 DMA_Mode_TypeDef;

void WeldingRoutine(void)

{
  short sVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined2 uVar4;
  char cVar5;
  WeldingType WVar6;
  Machine_Status MVar7;
  Fault_Codes FVar8;
  byte bVar9;
  bool bVar10;
  undefined2 extraout_X;
  undefined2 extraout_X_00;
  undefined2 extraout_X_01;
  undefined2 extraout_X_02;
  undefined2 extraout_X_03;
  undefined uStack_1;
  word puVar5;
  undefined *puVar6;
  word puVar7;
  word puVar8;
  word puVar9;
  word puVar10;
  word puVar11;
  word puVar12;
  word puVar13;
  word puVar14;
  word puVar15;
  word puVar4;
  bool cVar3;
  System_State bVar4;

  _StackDataManipulation();
  DataCopy_PointerToDAT_0000(&DAT_0010);
  DataIncremet1InDAT_0003();
  DataCopy_DAT_0000ToPointer(&DAT_0010);
  DataCopy_PointerToDAT_0000(&DAT_0010);
  sVar1 = RAM0000;
  bVar10 = false;
  if (sVar1 == 0) {
    uVar3 = RAM0002;
    bVar10 = uVar3 < 0x7531;
  }
  if (!bVar10) {
    DAT_0010 = 0;
    RAM0012 = 0x7531;
  }
  puVar4 = NTC1_Data;
  // Check NTC 1 & 2  temp OK, MachineStatus != (welding || OverHeatinh/error)
  if ((((&DAT_0635 < puVar4) && (puVar5 = NTC2_Data, &DAT_0649 < puVar5)) &&
       (MVar7 = MachineStatus, MVar7 != Welding)) &&
      (MVar7 = MachineStatus, MVar7 != OverHeating / Error)) {
    DataCopy_PointerToDAT_0000(&DAT_0010);
    sVar1 = RAM0000;
    bVar10 = false;
    if (sVar1 == 0) {
      uVar3 = RAM0002;
      bVar10 = uVar3 < 30000;
    }
    if (((!bVar10) && (uVar3 = AnalogValue_AC_IN, uVar3 < 0x13)) &&
        (cVar5 = Fault_Ok, cVar5 != '\0')) {
      uVar3 = NTC1_Data;
      if ((0x898 < uVar3) && (uVar3 = NTC2_Data, 0x898 < uVar3)) {
        DAT_0000 = 0;
        // Fans OFF
        DigitalWrite(0x10, &Peripherals::PORTE.ODR);
      }
      goto LAB_8158;
    }
  }
  cVar3 = MainRelayState;
  // Check if Main Relay is Off & PWM voltage is discharged
  if ((cVar3 == false) &&
      (puVar6 = (undefined *)Comp_Out_Data, &DAT_0673 <= puVar6)) {
    DAT_0000 = 0;
    // Fans OFF
    DigitalWrite(0x10, &Peripherals::PORTE.ODR);
  } else {
    DAT_0000 = 1;
    // Fans ON
    DigitalWrite(0x10, &Peripherals::PORTE.ODR);
  }
LAB_8158:
  puVar7 = NTC1_Data;
  if ((puVar7 < &DAT_02bc) || (puVar8 = NTC2_Data, puVar8 < &DAT_0258)) {
    MachineStatus = OverHeating / Error;
    puVar9 = NTC1_Data;
    if (puVar9 < &DAT_02bc) {
      FVar8 = FaultCodes;
      FaultCodes = FVar8 | NTC1 OverTemp;
    }
    puVar10 = NTC2_Data;
    if (puVar10 < &DAT_0258) {
      FVar8 = FaultCodes;
      FaultCodes = FVar8 | NTC2 OverTemp;
    }
  }
  uVar3 = AnalogValue_AC_IN;
  if (uVar3 < 0xe7) {
    AC_IN_FaultDelay = 0;
  } else {
    cVar5 = AC_IN_FaultDelay;
    AC_IN_FaultDelay = cVar5 + '\x01';
    bVar9 = AC_IN_FaultDelay;
    if (0x1e < bVar9) {
      MachineStatus = OverHeating / Error;
      FVar8 = FaultCodes;
      FaultCodes = FVar8 | AC OverVoltage;
    }
  }
  puVar11 = Comp_Out_Data;
  if (puVar11 < &DAT_05dd) {
    cVar5 = Fault_Ok;
    if ((cVar5 == '\x01') && (bVar4 = SytemState, bVar4 != Init / Booting)) {
      EEPROM_SetWeldingType();
      register0x0008 = (BADSPACEBASE *)&uStack_1;
      MachineStatus = OverHeating / Error;
      Fault_Ok = 0;
    }
  } else {
    MVar7 = MachineStatus;
    if (MVar7 == Welding) {
      uVar3 = _15_DC_OK_Data;
      if (0xa00 < uVar3) {
        FVar8 = FaultCodes;
        FaultCodes = FVar8 | 315 DC Bus Undervoltage;
        MachineStatus = OverHeating / Error;
      }
    } else {
      uVar3 = _15_DC_OK_Data;
      if (uVar3 < 0x700) {
        FVar8 = FaultCodes;
        FaultCodes = FVar8 | 315 DC Bus Fault;
        MachineStatus = OverHeating / Error;
      }
      uVar3 = _15_DC_OK_Data;
      if (0xa00 < uVar3) {
        FVar8 = FaultCodes;
        FaultCodes = FVar8 | 315 DC Bus Undervoltage;
        MachineStatus = OverHeating / Error;
      }
    }
  }
  MVar7 = MachineStatus;
  // Welding Machine Status : Idle
  if ((MVar7 == Idle_1) || (MVar7 == Idle_2)) {
    WVar6 = WeldingType;
    // Welding type = MMA (rotilic / celulose)
    if ((WVar6 == Routilic) || (WVar6 = WeldingType, WVar6 == Celulose)) {
      uVar4 = AnalogValue_DAC_Out;
      *(undefined3 *)((short)register0x0008 + -2) = 0x8244;
      DAC_AnalogWrite(0, uVar4);
      bVar10 = IsTigMode;
      if (bVar10 != true) {
        bVar10 = MainRelayState;
        if (bVar10 != true) {
          DAT_0000 = 1;
          // PWM-ON
          *(undefined3 *)((short)register0x0008 + -2) = 0x830c;
          DigitalWrite(1, &Peripherals::PORTD.ODR);
          PWM_End_Delay = 0;
          PWM_Start_Delay = 0;
          DataCopyToDAT_0008();
          return;
        }
        DAT_0000 = 0;
        // PWM-OFF
        *(undefined3 *)((short)register0x0008 + -2) = 0x82bd;
        DigitalWrite(1, &Peripherals::PORTD.ODR);
        // Read VRD
        *(undefined3 *)((short)register0x0008 + -2) = 0x82c6;
        bVar10 = DigitalRead(4, &Peripherals::PORTD.ODR);
        if ((bVar10) && (uVar3 = AnalogValue_AC_IN, uVar3 < 0x12)) {
          PWM_End_Delay = 0;
          DataCopyToDAT_0008();
          return;
        }
        *(undefined3 *)((short)register0x0008 + -2) = 0x82da;
        DAC_AnalogWrite(0, 3000);
        uVar3 = Interrupt_StageLoop;
        Interrupt_StageLoop = uVar3 & 0xffef;
        MachineStatus = MmaRampUp;
        PWM_End_Delay = 0;
        PWM_Start_Delay = 0;
        DataCopyToDAT_0008();
        return;
      }
      DAT_0000 = 1;
      // PWM-ON
      *(undefined3 *)((short)register0x0008 + -2) = 0x8258;
      DigitalWrite(1, &Peripherals::PORTD.ODR);
      bVar10 = MainRelayState;
      if (bVar10 == true) {
        // Read VRD
        *(undefined3 *)((short)register0x0008 + -2) = 0x826b;
        bVar10 = DigitalRead(4, &Peripherals::PORTD.ODR);
        if (bVar10) {
          PWM_End_Delay = 0;
          PWM_Start_Delay = 0;
          DataCopyToDAT_0008();
          return;
        }
        *(undefined3 *)((short)register0x0008 + -2) = 0x8277;
        DAC_AnalogWrite(0, 200);
        uVar3 = Interrupt_StageLoop;
        Interrupt_StageLoop = uVar3 & 0xffef;
        DAT_0000 = 0;
        // PWM-OFF
        *(undefined3 *)((short)register0x0008 + -2) = 0x828f;
        DigitalWrite(1, &Peripherals::PORTD.ODR);
        MachineStatus = MmaRampUp;
        PWM_End_Delay = 0;
        PWM_Start_Delay = 0;
        DataCopyToDAT_0008();
        return;
      }
    } else {
      // Welding type = TIG
      DAT_0004 = 0xa28;
      RAM0002 = 200;
      RAM0000 = 0x1c2;
      *(undefined3 *)((short)register0x0008 + -2) = 0x8331;
      uVar2 = _Read_Something_ADC1(1);
      DAT_0001 = uVar2;
      RAM0008 = extraout_X;
      *(undefined3 *)((short)register0x0008 + -3) = 0x8339;
      DAC_AnalogWrite(0, 0);
      bVar10 = IsTigMode;
      if (bVar10 == true) {
        DAT_0000 = 1;
        // PWM-ON
        *(undefined3 *)((short)register0x0008 + -3) = 0x834d;
        DigitalWrite(1, &Peripherals::PORTD.ODR);
        bVar10 = MainRelayState;
        if (bVar10 == true) {
          // Read VRD
          *(undefined3 *)((short)register0x0008 + -3) = 0x8360;
          bVar10 = DigitalRead(4, &Peripherals::PORTD.ODR);
          if (!bVar10) {
            cVar5 = PWM_End_Delay;
            PWM_End_Delay = cVar5 + '\x01';
            bVar9 = PWM_End_Delay;
            if (2 < bVar9) {
              DAT_0000 = 0;
              // PWM-OFF
              *(undefined3 *)((short)register0x0008 + -3) = 0x8384;
              DigitalWrite(1, &Peripherals::PORTD.ODR);
              MachineStatus = TigRampUp;
              TigRampUp_Delay = 0;
              PWM_End_Delay = 10;
              PWM_Start_Delay = 0;
              DataCopyToDAT_0008();
              return;
            }
          }
        }
      } else {
        bVar10 = MainRelayState;
        if (bVar10 != true) {
          DAT_0000 = 1;
          // PWM-ON
          *(undefined3 *)((short)register0x0008 + -3) = 0x83f1;
          DigitalWrite(1, &Peripherals::PORTD.ODR);
          PWM_End_Delay = 0;
          PWM_Start_Delay = 0;
          DataCopyToDAT_0008();
          return;
        }
        DAT_0000 = 0;
        // PWM-OFF
        *(undefined3 *)((short)register0x0008 + -3) = 0x83aa;
        DigitalWrite(1, &Peripherals::PORTD.ODR);
        // Read VRD
        *(undefined3 *)((short)register0x0008 + -3) = 0x83b3;
        bVar10 = DigitalRead(4, &Peripherals::PORTD.ODR);
        if ((!bVar10) || (uVar3 = AnalogValue_AC_IN, 0x13 < uVar3)) {
          cVar5 = PWM_End_Delay;
          PWM_End_Delay = cVar5 + '\x01';
          bVar9 = PWM_End_Delay;
          if (3 < bVar9) {
            MachineStatus = TigRampUp;
            PWM_End_Delay = 0;
            PWM_Start_Delay = 0;
            DataCopyToDAT_0008();
            return;
          }
        }
      }
    }
  } else {
    // Machine status = TigRampUp
    if (MVar7 == TigRampUp) {
      bVar10 = IsTigMode;
      if (bVar10 == true) {
        cVar5 = PWM_End_Delay;
        PWM_End_Delay = cVar5 + '\x05';
        bVar9 = PWM_End_Delay;
        if (0x55 < bVar9) {
          PWM_End_Delay = 0x41;
        }
        DAT_0004 = 0xa28;
        RAM0002 = 200;
        RAM0000 = 0x1c2;
        bVar9 = PWM_End_Delay;
        *(undefined3 *)((short)register0x0008 + -2) = 0x8455;
        uVar2 = _Read_Something_ADC1((ushort)bVar9);
        DAT_0001 = uVar2;
        RAM0008 = extraout_X_00;
        uVar4 = RAM0008;
        *(undefined3 *)((short)register0x0008 + -3) = 0x845e;
        DAC_AnalogWrite(0, uVar4);
        // Read VRD
        *(undefined3 *)((short)register0x0008 + -3) = 0x8467;
        bVar10 = DigitalRead(4, &Peripherals::PORTD.ODR);
        if (bVar10) {
          DAT_0004 = 0xa28;
          RAM0002 = 200;
          RAM0000 = 0x1c2;
          *(undefined3 *)((short)register0x0008 + -3) = 0x8488;
          uVar2 = _Read_Something_ADC1(0x6e);
          DAT_0001 = uVar2;
          RAM0008 = extraout_X_01;
          uVar4 = RAM0008;
          *(undefined3 *)((short)register0x0008 + -4) = 0x8491;
          DAC_AnalogWrite(0, uVar4);
          cVar5 = TigRampUp_Delay;
          TigRampUp_Delay = cVar5 + '\x01';
          bVar9 = TigRampUp_Delay;
          if (3 < bVar9) {
            MachineStatus = Welding;
          }
          PWM_End_Delay = 0;
          PWM_Start_Delay = 0;
          DataCopyToDAT_0008();
          return;
        }
      }
    } else if (MVar7 == Welding) {
      // MachineStatus = Welding
      DAT_0010 = 0;
      RAM0012 = 0x733c;
      WVar6 = WeldingType;
      if ((WVar6 == Routilic) || (WVar6 = WeldingType, WVar6 == Celulose)) {
        // Read VRD
        *(undefined3 *)((short)register0x0008 + -2) = 0x84d6;
        bVar10 = DigitalRead(4, &Peripherals::PORTD.ODR);
        if (!bVar10) {
          cVar5 = PWM_Start_Delay;
          PWM_Start_Delay = cVar5 + '\x01';
          bVar9 = PWM_Start_Delay;
          if (bVar9 < 0x97) {
            uVar4 = AnalogValue_DAC_Out;
            *(undefined3 *)((short)register0x0008 + -2) = 0x85a7;
            DAC_AnalogWrite(0, uVar4);
            DataCopyToDAT_0008();
            return;
          }
          PWM_Start_Delay = 0x96;
          DAT_0004 = 0xa28;
          RAM0002 = 200;
          RAM0000 = 0x1c2;
          *(undefined3 *)((short)register0x0008 + -2) = 0x8581;
          uVar2 = _Read_Something_ADC1(10);
          DAT_0001 = uVar2;
          RAM0008 = extraout_X_02;
          uVar4 = RAM0008;
          *(undefined3 *)((short)register0x0008 + -3) = 0x858a;
          DAC_AnalogWrite(0, uVar4);
          DAT_0000 = 1;
          // PWM-ON
          *(undefined3 *)((short)register0x0008 + -3) = 0x8597;
          DigitalWrite(1, &Peripherals::PORTD.ODR);
          PWM_End_Delay = 0;
          DataCopyToDAT_0008();
          return;
        }
        PWM_Start_Delay = 0;
        uVar4 = AnalogValue_DAC_Out;
        *(undefined3 *)((short)register0x0008 + -2) = 0x84e6;
        DAC_AnalogWrite(0, uVar4);
        bVar10 = IsTigMode;
        if (bVar10 == true) {
          uVar3 = AnalogValue_AC_IN;
          if (uVar3 < 0xd) {
            cVar5 = PWM_End_Delay;
            PWM_End_Delay = cVar5 + '\x01';
            bVar9 = PWM_End_Delay;
            if (99 < bVar9) {
              PWM_End_Delay = 0;
              MachineStatus = Idle_1;
              DataCopyToDAT_0008();
              return;
            }
          } else {
            uVar3 = AnalogValue_AC_IN;
            if (0xc < uVar3) {
              PWM_End_Delay = 0;
              DataCopyToDAT_0008();
              return;
            }
          }
        } else {
          uVar3 = AnalogValue_AC_IN;
          if (0xe < uVar3) {
            PWM_End_Delay = 0;
            DataCopyToDAT_0008();
            return;
          }
          cVar5 = PWM_End_Delay;
          PWM_End_Delay = cVar5 + '\x01';
          bVar9 = PWM_End_Delay;
          if (0x13 < bVar9) {
            PWM_End_Delay = 0;
            MachineStatus = Idle_1;
            DataCopyToDAT_0008();
            return;
          }
        }
      } else {
        // Read VRD
        *(undefined3 *)((short)register0x0008 + -2) = 0x85b4;
        bVar10 = DigitalRead(4, &Peripherals::PORTD.ODR);
        if (!bVar10) {
          cVar5 = PWM_Start_Delay;
          PWM_Start_Delay = cVar5 + '\x01';
          bVar9 = PWM_Start_Delay;
          if (bVar9 < 6) {
            uVar4 = AnalogValue_DAC_Out;
            *(undefined3 *)((short)register0x0008 + -2) = 0x867a;
            DAC_AnalogWrite(0, uVar4);
            DataCopyToDAT_0008();
            return;
          }
          PWM_Start_Delay = 0x32;
          DAT_0004 = 0xa28;
          RAM0002 = 200;
          RAM0000 = 0x1c2;
          *(undefined3 *)((short)register0x0008 + -2) = 0x8654;
          uVar2 = _Read_Something_ADC1(10);
          DAT_0001 = uVar2;
          RAM0008 = extraout_X_03;
          uVar4 = RAM0008;
          *(undefined3 *)((short)register0x0008 + -3) = 0x865d;
          DAC_AnalogWrite(0, uVar4);
          DAT_0000 = 1;
          // PWM-ON
          *(undefined3 *)((short)register0x0008 + -3) = 0x866a;
          DigitalWrite(1, &Peripherals::PORTD.ODR);
          PWM_End_Delay = 0;
          DataCopyToDAT_0008();
          return;
        }
        PWM_Start_Delay = 0;
        uVar4 = AnalogValue_DAC_Out;
        *(undefined3 *)((short)register0x0008 + -2) = 0x85c4;
        DAC_AnalogWrite(0, uVar4);
        bVar10 = IsTigMode;
        if (bVar10 == true) {
          uVar3 = AnalogValue_AC_IN;
          if (0x10 < uVar3) {
            PWM_End_Delay = 0;
            DataCopyToDAT_0008();
            return;
          }
          cVar5 = PWM_End_Delay;
          PWM_End_Delay = cVar5 + '\x01';
          bVar9 = PWM_End_Delay;
          if (0x13 < bVar9) {
            PWM_End_Delay = 0;
            MachineStatus = Idle_1;
            DataCopyToDAT_0008();
            return;
          }
        } else {
          uVar3 = AnalogValue_AC_IN;
          if (0xb < uVar3) {
            PWM_End_Delay = 0;
            DataCopyToDAT_0008();
            return;
          }
          cVar5 = PWM_End_Delay;
          PWM_End_Delay = cVar5 + '\x01';
          bVar9 = PWM_End_Delay;
          if (0x13 < bVar9) {
            PWM_End_Delay = 0;
            MachineStatus = Idle_1;
            DataCopyToDAT_0008();
            return;
          }
        }
      }
    } else if (MVar7 == OverHeating / Error) {
      // Machine Status = OverHeating / Error
      DAT_0000 = 1;
      // PWM-ON
      *(undefined3 *)((short)register0x0008 + -2) = 0x868b;
      DigitalWrite(1, &Peripherals::PORTD.ODR);
      FVar8 = FaultCodes;
      if (((FVar8 & NTC1 OverTemp) != No Fault) &&
          (puVar12 = NTC1_Data, &UNK_04b0 < puVar12)) {
        FVar8 = FaultCodes;
        FaultCodes = FVar8 & ~NTC1 OverTemp;
      }
      FVar8 = FaultCodes;
      if (((FVar8 & NTC2 OverTemp) != No Fault) &&
          (puVar13 = NTC2_Data, &UNK_0384 < puVar13)) {
        FVar8 = FaultCodes;
        FaultCodes = FVar8 & ~NTC2 OverTemp;
      }
      FVar8 = FaultCodes;
      if (((FVar8 & 315 DC Bus Fault) != No Fault) &&
          (puVar14 = _15_DC_OK_Data, &UNK_072c < puVar14)) {
        FVar8 = FaultCodes;
        FaultCodes = FVar8 & ~315 DC Bus Fault;
      }
      FVar8 = FaultCodes;
      if (((FVar8 & 315 DC Bus Undervoltage) != No Fault) &&
          (uVar3 = _15_DC_OK_Data, uVar3 < 0x9b9)) {
        FVar8 = FaultCodes;
        FaultCodes = FVar8 & ~315 DC Bus Undervoltage;
      }
      FVar8 = FaultCodes;
      if ((FVar8 == No Fault) && (cVar5 = Fault_Ok, cVar5 != '\0')) {
        MachineStatus = Idle_1;
      }
      cVar5 = Fault_Ok;
      if (cVar5 == '\0') {
        puVar15 = Comp_Out_Data;
        if (&DAT_0672 < puVar15) {
          SytemState = Init / Booting;
          DataCopyToDAT_0008();
          return;
        }
        DAT_0000 = 0;
        // MAIN_RELAY-OFF
        *(undefined3 *)((short)register0x0008 + -2) = 0x8703;
        DigitalWrite(0x20, &Peripherals::PORTE.ODR);
        MainRelayState = false;
      }
    } else {
      // Machine Status = Mma Ramp Up
      if (MVar7 != MmaRampUp) {
        DataCopyToDAT_0008();
        return;
      }
      uVar4 = Interrupt_StageLoop;
      if (((byte)uVar4 >> 4 & 1) != 0) {
        MachineStatus = Welding;
        DataCopyToDAT_0008();
        return;
      }
    }
  }
  DataCopyToDAT_0008();
  return;
}

void __farcall ChangeWeldingType(void)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  undefined2 uVar4;
  short sVar5;
  WeldingType WVar6;
  bool bVar7;
  Machine_Status MVar8;
  undefined *puVar6;

  MVar8 = MachineStatus;
  if (MVar8 == Idle_1) {
    uVar4 = ButtonPressed;
    uVar2 = ButtonLastState;
    DAT_0000 = (byte)uVar2 & 1;
    bVar1 = DAT_0000;
    // Change welding Type if machine in Idle_1
    if (((byte)uVar4 & 1 & bVar1) != 0) {
      uVar3 = ButtonPressed;
      ButtonPressed = uVar3 & 0xfffe;
      WVar6 = WeldingType;
      if (WVar6 == Routilic) {
        WeldingType = Celulose;
        IsTigMode = false;
      } else if (WVar6 == Celulose) {
        WeldingType = Tig;
        IsTigMode = true;
      } else if (WVar6 == Tig) {
        WeldingType = Routilic;
        IsTigMode = false;
      } else {
        WeldingType = Routilic;
        IsTigMode = false;
      }
      MachineStatus = Idle_2;
      BtnDepress_Debouncer = 0;
      BtnPressed_Debouncer = 0;
    }
  } else {
    // check if machine is in idle_2
    if (MVar8 != Idle_2) {
      if (MVar8 == TigRampUp) {
        return;
      }
      if (MVar8 == Welding) {
        return;
      }
      if (MVar8 == OverHeating / Error) {
        return;
      }
      return;
    }
  }
  uVar4 = ButtonPressed;
  uVar2 = ButtonLastState;
  DAT_0000 = (byte)uVar2 & 1;
  bVar1 = DAT_0000;
  if (((byte)uVar4 & 1 & bVar1) == 0) {
    uVar3 = ButtonLastState;
    if ((uVar3 & 1) != 0) {
      sVar5 = BtnDepress_Debouncer;
      BtnDepress_Debouncer = sVar5 + 1;
      puVar6 = (undefined *)BtnDepress_Debouncer;
      if (puVar6 == &DAT_012c) {
        BtnPressed_Debouncer = 0;
        bVar7 = IsTigMode;
        if (bVar7 == false) {
          IsTigMode = true;
        } else {
          IsTigMode = false;
        }
        WVar6 = WeldingType;
        if (WVar6 == Tig) {
          WeldingType = Routilic;
          IsTigMode = false;
        } else {
          WVar6 = WeldingType;
          if (WVar6 == Celulose) {
            WeldingType = Tig;
            IsTigMode = true;
          } else {
            WVar6 = WeldingType;
            if (WVar6 == Routilic) {
              WeldingType = Celulose;
              IsTigMode = false;
            }
          }
        }
      }
    }
  } else {
    uVar3 = ButtonPressed;
    ButtonPressed = uVar3 & 0xfffe;
    BtnDepress_Debouncer = 0;
    BtnPressed_Debouncer = 0;
    WVar6 = WeldingType;
    if (WVar6 == Routilic) {
      WeldingType = Celulose;
      IsTigMode = false;
    } else if (WVar6 == Celulose) {
      WeldingType = Tig;
      IsTigMode = true;
    } else if (WVar6 == Tig) {
      WeldingType = Routilic;
      IsTigMode = false;
    } else {
      WeldingType = Routilic;
      IsTigMode = false;
    }
  }
  sVar5 = BtnPressed_Debouncer;
  BtnPressed_Debouncer = sVar5 + 1;
  uVar3 = BtnPressed_Debouncer;
  if (200 < uVar3) {
    MachineStatus = Idle_1;
    BtnPressed_Debouncer = 0;
  }
  return;
}

ushort __farcall Main(void)

{
  System_State SVar1;
  ushort uVar2;
  undefined2 uVar3;
  short sVar4;
  byte bVar5;
  ushort uVar6;
  ushort extraout_X;
  word puVar1;
  word puVar2;
  word puVar3;
  word puVar4;

  SVar1 = SytemState;
  // System Init / Booting
  if (SVar1 == Init / Booting) {
    // First Run DAT_0093 =0
    sVar4 = InitStep;
    //
    // INIT Step1
    // Turn Comp_ON - HIGH
    if (sVar4 == 0) {
      DAT_0000 = 1;
      // Port D0-ON Port E5/E4/E0/E1/E3/E2-OFF Port D3/D4-OFF (Comp_ON -HIGH)
      DigitalWrite(1, &Peripherals::PORTD.ODR);
      DAT_0000 = 0;
      DigitalWrite(0x20, &Peripherals::PORTE.ODR);
      MainRelayState = false;
      DAT_0000 = 0;
      DigitalWrite(0x10, &Peripherals::PORTE.ODR);
      DAT_0000 = 0;
      DigitalWrite(8, &Peripherals::PORTD.ODR);
      DAT_0000 = 0;
      DigitalWrite(0x10, &Peripherals::PORTD.ODR);
      DAT_0000 = 0;
      DigitalWrite(1, &Peripherals::PORTE.ODR);
      DAT_0000 = 0;
      DigitalWrite(2, &Peripherals::PORTE.ODR);
      DAT_0000 = 0;
      DigitalWrite(8, &Peripherals::PORTE.ODR);
      DAT_0000 = 0;
      DigitalWrite(4, &Peripherals::PORTE.ODR);
      do {
        uVar2 = AnalogValue_Vin_15V;
        // loop while AnalogValue_Vin_15V < 0x78 (15v voltage regulator ok))
      } while (uVar2 < 0x78);
      Fault_Ok = 1;
      EEPROM_GetWeldingType();
      InitStep = 1;
      return 1;
    }
    uVar3 = Interrupt_StageLoop;
    bVar5 = (byte)uVar3 >> 1 & 1;
    uVar6 = (ushort)bVar5;
    // Check if 2º Stage loop occur
    if (bVar5 != 0) {
      uVar2 = Interrupt_StageLoop;
      Interrupt_StageLoop = uVar2 & 0xfffd;
      sVar4 = MAIN_DC_BUS_Charge_Timer;
      MAIN_DC_BUS_Charge_Timer = sVar4 + 1;
      uVar6 = MAIN_DC_BUS_Charge_Timer;
      if (0x32 < uVar6) {
        MAIN_DC_BUS_Charge_Timer = 0;
        puVar1 = _15_DC_OK_Data;
        // Check if Main DC bus Capacitors charged (315dc) and comparator ok
        if (((&DAT_0725 < puVar1) &&
             (puVar2 = Comp_Out_Data, &DAT_0672 < puVar2)) &&
            (uVar2 = AnalogValue_Vin_15V, 0x78 < uVar2)) {
          DAT_0000 = 1;
          // Main Relay ON
          DigitalWrite(0x20, &Peripherals::PORTE.ODR);
          MainRelayState = true;
        }
        sVar4 = InitStep;
        //
        // INIT Step2
        // Turn all LED's HIGH
        if (sVar4 == 1) {
          DAT_0000 = 1;
          // Port D3/D4-ON Port E0/E1/E3/E2-ON
          DigitalWrite(8, &Peripherals::PORTD.ODR);
          DAT_0000 = 1;
          DigitalWrite(0x10, &Peripherals::PORTD.ODR);
          DAT_0000 = 1;
          DigitalWrite(1, &Peripherals::PORTE.ODR);
          DAT_0000 = 1;
          DigitalWrite(2, &Peripherals::PORTE.ODR);
          DAT_0000 = 1;
          DigitalWrite(8, &Peripherals::PORTE.ODR);
          DAT_0000 = 1;
          DigitalWrite(4, &Peripherals::PORTE.ODR);
          MAIN_DC_BUS_Charge_Timer = 0x14;
          sVar4 = InitStep;
          InitStep = sVar4 + 1U;
          return sVar4 + 1U;
        }
        //
        // INIT Step3
        // Turn all LED's LOW
        if (sVar4 == 2) {
          DAT_0000 = 0;
          // Port D3/D4-OFF Port E0/E1/E3/E2-OFF
          DigitalWrite(8, &Peripherals::PORTD.ODR);
          DAT_0000 = 0;
          DigitalWrite(0x10, &Peripherals::PORTD.ODR);
          DAT_0000 = 0;
          DigitalWrite(1, &Peripherals::PORTE.ODR);
          DAT_0000 = 0;
          DigitalWrite(2, &Peripherals::PORTE.ODR);
          DAT_0000 = 0;
          DigitalWrite(8, &Peripherals::PORTE.ODR);
          DAT_0000 = 0;
          DigitalWrite(4, &Peripherals::PORTE.ODR);
          MAIN_DC_BUS_Charge_Timer = 0x14;
          sVar4 = InitStep;
          InitStep = sVar4 + 1U;
          return sVar4 + 1U;
        }
        //
        // INIT Step4
        // Turn all LED'S HIGH
        if (sVar4 == 3) {
          DAT_0000 = 1;
          // Port D3/D4-ON Port E0/E1/E3/E2-ON
          DigitalWrite(8, &Peripherals::PORTD.ODR);
          DAT_0000 = 1;
          DigitalWrite(0x10, &Peripherals::PORTD.ODR);
          DAT_0000 = 1;
          DigitalWrite(1, &Peripherals::PORTE.ODR);
          DAT_0000 = 1;
          DigitalWrite(2, &Peripherals::PORTE.ODR);
          DAT_0000 = 1;
          DigitalWrite(8, &Peripherals::PORTE.ODR);
          DAT_0000 = 1;
          DigitalWrite(4, &Peripherals::PORTE.ODR);
          MAIN_DC_BUS_Charge_Timer = 0x14;
          sVar4 = InitStep;
          InitStep = sVar4 + 1U;
          return sVar4 + 1U;
        }
        //
        // INIT Step5
        // Turn all LED'S LOW
        if (sVar4 == 4) {
          DAT_0000 = 0;
          // Port D3/D4-OFF Port E0/E1/E3/E2-OFF
          DigitalWrite(8, &Peripherals::PORTD.ODR);
          DAT_0000 = 0;
          DigitalWrite(0x10, &Peripherals::PORTD.ODR);
          DAT_0000 = 0;
          DigitalWrite(1, &Peripherals::PORTE.ODR);
          DAT_0000 = 0;
          DigitalWrite(2, &Peripherals::PORTE.ODR);
          DAT_0000 = 0;
          DigitalWrite(8, &Peripherals::PORTE.ODR);
          DAT_0000 = 0;
          DigitalWrite(4, &Peripherals::PORTE.ODR);
          MAIN_DC_BUS_Charge_Timer = 0x14;
          sVar4 = InitStep;
          InitStep = sVar4 + 1U;
          return sVar4 + 1U;
        }
        //
        // INIT Step6
        // Turn all LED'S HIGH
        if (sVar4 == 5) {
          DAT_0000 = 1;
          // Port D3/D4-ON Port E0/E1/E3/E2-ON
          DigitalWrite(8, &Peripherals::PORTD.ODR);
          DAT_0000 = 1;
          DigitalWrite(0x10, &Peripherals::PORTD.ODR);
          DAT_0000 = 1;
          DigitalWrite(1, &Peripherals::PORTE.ODR);
          DAT_0000 = 1;
          DigitalWrite(2, &Peripherals::PORTE.ODR);
          DAT_0000 = 1;
          DigitalWrite(8, &Peripherals::PORTE.ODR);
          DAT_0000 = 1;
          DigitalWrite(4, &Peripherals::PORTE.ODR);
          MAIN_DC_BUS_Charge_Timer = 0x14;
          sVar4 = InitStep;
          InitStep = sVar4 + 1U;
          return sVar4 + 1U;
        }
        //
        // INIT Step7
        // Turn all LED'S LOW
        if (sVar4 == 6) {
          DAT_0000 = 0;
          // Port D3/D4-OFF Port E0/E1/E3/E2-OFF
          DigitalWrite(8, &Peripherals::PORTD.ODR);
          DAT_0000 = 0;
          DigitalWrite(0x10, &Peripherals::PORTD.ODR);
          DAT_0000 = 0;
          DigitalWrite(1, &Peripherals::PORTE.ODR);
          DAT_0000 = 0;
          DigitalWrite(2, &Peripherals::PORTE.ODR);
          DAT_0000 = 0;
          DigitalWrite(8, &Peripherals::PORTE.ODR);
          DAT_0000 = 0;
          DigitalWrite(4, &Peripherals::PORTE.ODR);
          MAIN_DC_BUS_Charge_Timer = 0x14;
          sVar4 = InitStep;
          InitStep = sVar4 + 1U;
          return sVar4 + 1U;
        }
        if (sVar4 - 7U != 0) {
          return sVar4 - 7U;
        }
        InitStep = 0;
        MAIN_DC_BUS_Charge_Timer = 0;
        SytemState = System Ready;
        DAT_00a2 = 2;
        MachineStatus = Idle_1;
        RAM007d = 0;
        uVar2 = ButtonLastState;
        ButtonLastState = uVar2 & 0xfffe;
        uVar2 = ButtonPressed;
        ButtonPressed = uVar2 & 0xfffe;
        uVar2 = ButtonDepressed;
        ButtonDepressed = uVar2 & 0xfffe;
        return uVar2 & 0xfffe;
      }
    }
  } else {
    // System Ready / Working
    if (SVar1 == System Ready) {
      uVar3 = Interrupt_StageLoop;
      bVar5 = (byte)uVar3 >> 1 & 1;
      uVar6 = (ushort)bVar5;
      // Check if 2º Stage loop occur
      if (bVar5 != 0) {
        uVar2 = Interrupt_StageLoop;
        Interrupt_StageLoop = uVar2 & 0xfffd;
        puVar3 = _15_DC_OK_Data;
        // Check if Main DC bus and Comparator ok after Main relay ON
        if (((&DAT_0725 < puVar3) &&
             (puVar4 = Comp_Out_Data, &DAT_0672 < puVar4)) &&
            (uVar2 = AnalogValue_Vin_15V, 0x78 < uVar2)) {
          DAT_0000 = 1;
          // Main Relay-On LED5-on
          DigitalWrite(0x20, &Peripherals::PORTE.ODR);
          MainRelayState = true;
        }
        CheckButton();
        ChangeWeldingType();
        ChangeFrontLeds();
        WeldingRoutine();
        return extraout_X;
      }
    } else {
      SytemState = Init / Booting;
    }
  }
  return uVar6;
}

undefined __farcall INTERRUPT_AnalogRead(void)

{
  short sVar1;
  undefined *puVar2;
  undefined2 uVar3;
  ushort uVar4;
  char cVar5;
  undefined uVar6;
  byte extraout_CC;
  byte extraout_CC_00;
  byte extraout_CC_01;
  byte extraout_CC_02;
  byte extraout_CC_03;
  byte extraout_CC_04;
  bool bVar7;
  undefined extraout_A;
  undefined2 extraout_X;
  undefined2 extraout_X_00;
  undefined2 extraout_X_01;
  undefined2 extraout_X_02;
  undefined2 extraout_X_03;
  undefined2 extraout_X_04;
  undefined2 extraout_X_05;
  undefined2 extraout_X_06;
  byte *puVar11;
  byte *pbVar8;
  byte *puVar12;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar13;
  undefined auStack_1f[27];
  undefined2 uStack_4;
  undefined uStack_2;
  undefined uStack_1;

  uStack_2 = 0;
  uStack_1 = 0x8c;
  INTERRUPT_Something4();
  uStack_1 = DAT_0008;
  uStack_4 = 0x8c;
  uStack_2 = 0x43;
  // Read Vfb
  ADC_Read_Store_(0);
  puVar11 = (byte *)((short)&uStack_4 + 1);
  RAM000e = extraout_X;
  RAM000c = 0;
  uStack_4 = 0x8c4c;
  DataCopy_DWORD_DAT_000c_To_DAT0000();
  uStack_4 = 0x8c52;
  DataMultiplyBy2('\x06');
  uStack_4 = 0x8c56;
  DataCopy_DWORD_DAT_0000_To_DAT000c();
  DAT_0008 = 3;
  uStack_4 = 0x8c61;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_0025);
  uStack_4 = 0x8c65;
  DataCopy_DWORD_DAT_000c_To_DAT0004();
  uStack_4 = 0x8c69;
  FUN_9689();
  if ((bool)(extraout_CC & 1)) {
    uStack_4 = 0x8c72;
    DataCopy_DWORD_DAT_000c_To_DAT0000();
    uStack_4 = 0x8c76;
    ALU_4();
  } else {
    uStack_4 = 0x8c7f;
    DataCopy_PointerToDAT_0000((undefined2 *)&DAT_0025);
    uStack_4 = 0x8c83;
    DataCopy_DWORD_DAT_000c_To_DAT0004();
    uStack_4 = 0x8c87;
    ALU_6();
    puVar11 = (byte *)&uStack_4;
  }
  sVar1 = RAM0000;
  bVar7 = false;
  if (sVar1 == 0) {
    puVar2 = (undefined *)RAM0002;
    bVar7 = puVar2 < &LAB_dc01;
  }
  if (bVar7) {
    sVar1 = RAM0000;
    bVar7 = false;
    if (sVar1 == 0) {
      uVar4 = RAM0002;
      bVar7 = uVar4 < 0x5001;
    }
    if (bVar7) {
      sVar1 = RAM0000;
      bVar7 = false;
      if (sVar1 == 0) {
        uVar4 = RAM0002;
        bVar7 = uVar4 < 0x3201;
      }
      if (!bVar7) {
        cVar5 = DAT_0008;
        DAT_0008 = cVar5 + '\x02';
      }
    } else {
      cVar5 = DAT_0008;
      DAT_0008 = cVar5 + '\x04';
    }
  } else {
    cVar5 = DAT_0008;
    DAT_0008 = cVar5 + '\b';
  }
  uVar6 = DAT_0008;
  puVar11[-2] = 0;
  puVar11[-1] = 0x8c;
  puVar11[0x10000] = 0xd0;
  DataCopy_PointerToDAT_0004((undefined2 *)&DAT_0021);
  puVar11[-2] = 0;
  puVar11[-1] = 0x8c;
  puVar11[0x10000] = 0xd4;
  DataCopy_DWORD_DAT_000c_To_DAT0000();
  puVar11[-2] = 0;
  puVar11[-1] = 0x8c;
  puVar11[0x10000] = 0xd8;
  FUN_9f68();
  puVar11[-3] = 0;
  puVar11[-2] = 0x8c;
  puVar11[-1] = 0xdf;
  DataCopy_DAT_0000ToPointer((undefined2 *)&DAT_0021);
  uVar6 = DAT_0008;
  puVar11[-3] = 0;
  puVar11[-2] = 0x8c;
  puVar11[-1] = 0xe8;
  DataCopy_PointerToDAT_0004((undefined2 *)&DAT_0025);
  puVar11[-3] = 0;
  puVar11[-2] = 0x8c;
  puVar11[-1] = 0xef;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_0021);
  puVar11[-3] = 0;
  puVar11[-2] = 0x8c;
  puVar11[-1] = 0xf3;
  FUN_9f68();
  puVar11[-4] = 0;
  puVar11[-3] = 0x8c;
  puVar11[-2] = 0xfa;
  DataCopy_DAT_0000ToPointer((undefined2 *)&DAT_0025);
  puVar11[-4] = 0;
  puVar11[-3] = 0x8d;
  puVar11[-2] = 1;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_0025);
  puVar11[-4] = 0;
  puVar11[-3] = 0x8d;
  puVar11[-2] = 7;
  DataDivideBy2('\b');
  uVar3 = RAM0002;
  VFB_Data = uVar3;
  puVar11[-4] = 0;
  puVar11[-3] = 0x8d;
  puVar11[-2] = 0x12;
  ADC_Read_Store_(1);
  pbVar8 = puVar11 + -3;
  RAM000e = extraout_X_00;
  RAM000c = 0;
  puVar11[-5] = 0;
  puVar11[-4] = 0x8d;
  puVar11[-3] = 0x1b;
  DataCopy_DWORD_DAT_000c_To_DAT0000();
  puVar11[-5] = 0;
  puVar11[-4] = 0x8d;
  puVar11[-3] = 0x21;
  DataMultiplyBy2('\x06');
  puVar11[-5] = 0;
  puVar11[-4] = 0x8d;
  puVar11[-3] = 0x25;
  DataCopy_DWORD_DAT_0000_To_DAT000c();
  DAT_0008 = 3;
  puVar11[-5] = 0;
  puVar11[-4] = 0x8d;
  puVar11[-3] = 0x30;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_002d);
  puVar11[-5] = 0;
  puVar11[-4] = 0x8d;
  puVar11[-3] = 0x34;
  DataCopy_DWORD_DAT_000c_To_DAT0004();
  puVar11[-5] = 0;
  puVar11[-4] = 0x8d;
  puVar11[-3] = 0x38;
  FUN_9689();
  if ((bool)(extraout_CC_00 & 1)) {
    puVar11[-5] = 0;
    puVar11[-4] = 0x8d;
    puVar11[-3] = 0x41;
    DataCopy_DWORD_DAT_000c_To_DAT0000();
    puVar11[-5] = 0;
    puVar11[-4] = 0x8d;
    puVar11[-3] = 0x45;
    ALU_4();
  } else {
    puVar11[-5] = 0;
    puVar11[-4] = 0x8d;
    puVar11[-3] = 0x4e;
    DataCopy_PointerToDAT_0000((undefined2 *)&DAT_002d);
    puVar11[-5] = 0;
    puVar11[-4] = 0x8d;
    puVar11[-3] = 0x52;
    DataCopy_DWORD_DAT_000c_To_DAT0004();
    puVar11[-5] = 0;
    puVar11[-4] = 0x8d;
    puVar11[-3] = 0x56;
    ALU_6();
    pbVar8 = puVar11 + -4;
  }
  sVar1 = RAM0000;
  bVar7 = false;
  if (sVar1 == 0) {
    puVar2 = (undefined *)RAM0002;
    bVar7 = puVar2 < &LAB_dc01;
  }
  if (bVar7) {
    sVar1 = RAM0000;
    bVar7 = false;
    if (sVar1 == 0) {
      uVar4 = RAM0002;
      bVar7 = uVar4 < 0x5001;
    }
    if (bVar7) {
      sVar1 = RAM0000;
      bVar7 = false;
      if (sVar1 == 0) {
        uVar4 = RAM0002;
        bVar7 = uVar4 < 0x3201;
      }
      if (!bVar7) {
        cVar5 = DAT_0008;
        DAT_0008 = cVar5 + '\x02';
      }
    } else {
      cVar5 = DAT_0008;
      DAT_0008 = cVar5 + '\x04';
    }
  } else {
    cVar5 = DAT_0008;
    DAT_0008 = cVar5 + '\b';
  }
  uVar6 = DAT_0008;
  *(undefined3 *)(pbVar8 + -2) = 0x8d9f;
  DataCopy_PointerToDAT_0004((undefined2 *)&DAT_0029);
  *(undefined3 *)(pbVar8 + -2) = 0x8da3;
  DataCopy_DWORD_DAT_000c_To_DAT0000();
  *(undefined3 *)(pbVar8 + -2) = 0x8da7;
  FUN_9f68();
  *(undefined3 *)(pbVar8 + -3) = 0x8dae;
  DataCopy_DAT_0000ToPointer((undefined2 *)&DAT_0029);
  uVar6 = DAT_0008;
  *(undefined3 *)(pbVar8 + -3) = 0x8db7;
  DataCopy_PointerToDAT_0004((undefined2 *)&DAT_002d);
  *(undefined3 *)(pbVar8 + -3) = 0x8dbe;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_0029);
  *(undefined3 *)(pbVar8 + -3) = 0x8dc2;
  FUN_9f68();
  *(undefined3 *)(pbVar8 + -4) = 0x8dc9;
  DataCopy_DAT_0000ToPointer((undefined2 *)&DAT_002d);
  *(undefined3 *)(pbVar8 + -4) = 0x8dd0;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_002d);
  *(undefined3 *)(pbVar8 + -4) = 0x8dd6;
  DataDivideBy2('\b');
  uVar3 = RAM0002;
  AC_In_OK_Data = uVar3;
  *(undefined3 *)(pbVar8 + -4) = 0x8de1;
  ADC_Read_Store_(2);
  puVar12 = pbVar8 + -3;
  RAM000e = extraout_X_01;
  RAM000c = 0;
  *(undefined3 *)(pbVar8 + -5) = 0x8dea;
  DataCopy_DWORD_DAT_000c_To_DAT0000();
  *(undefined3 *)(pbVar8 + -5) = 0x8df0;
  DataMultiplyBy2('\x06');
  *(undefined3 *)(pbVar8 + -5) = 0x8df4;
  DataCopy_DWORD_DAT_0000_To_DAT000c();
  DAT_0008 = 3;
  *(undefined3 *)(pbVar8 + -5) = 0x8dff;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_0035);
  *(undefined3 *)(pbVar8 + -5) = 0x8e03;
  DataCopy_DWORD_DAT_000c_To_DAT0004();
  *(undefined3 *)(pbVar8 + -5) = 0x8e07;
  FUN_9689();
  if ((bool)(extraout_CC_01 & 1)) {
    *(undefined3 *)(pbVar8 + -5) = 0x8e10;
    DataCopy_DWORD_DAT_000c_To_DAT0000();
    *(undefined3 *)(pbVar8 + -5) = 0x8e14;
    ALU_4();
  } else {
    *(undefined3 *)(pbVar8 + -5) = 0x8e1d;
    DataCopy_PointerToDAT_0000((undefined2 *)&DAT_0035);
    *(undefined3 *)(pbVar8 + -5) = 0x8e21;
    DataCopy_DWORD_DAT_000c_To_DAT0004();
    *(undefined3 *)(pbVar8 + -5) = 0x8e25;
    ALU_6();
    puVar12 = pbVar8 + -4;
  }
  sVar1 = RAM0000;
  bVar7 = false;
  if (sVar1 == 0) {
    puVar2 = (undefined *)RAM0002;
    bVar7 = puVar2 < &LAB_dc01;
  }
  if (bVar7) {
    sVar1 = RAM0000;
    bVar7 = false;
    if (sVar1 == 0) {
      uVar4 = RAM0002;
      bVar7 = uVar4 < 0x5001;
    }
    if (bVar7) {
      sVar1 = RAM0000;
      bVar7 = false;
      if (sVar1 == 0) {
        uVar4 = RAM0002;
        bVar7 = uVar4 < 0x3201;
      }
      if (!bVar7) {
        cVar5 = DAT_0008;
        DAT_0008 = cVar5 + '\x02';
      }
    } else {
      cVar5 = DAT_0008;
      DAT_0008 = cVar5 + '\x04';
    }
  } else {
    cVar5 = DAT_0008;
    DAT_0008 = cVar5 + '\b';
  }
  uVar6 = DAT_0008;
  *(undefined3 *)(puVar12 + -2) = 0x8e6e;
  DataCopy_PointerToDAT_0004((undefined2 *)&DAT_0031);
  *(undefined3 *)(puVar12 + -2) = 0x8e72;
  DataCopy_DWORD_DAT_000c_To_DAT0000();
  *(undefined3 *)(puVar12 + -2) = 0x8e76;
  FUN_9f68();
  *(undefined3 *)(puVar12 + -3) = 0x8e7d;
  DataCopy_DAT_0000ToPointer((undefined2 *)&DAT_0031);
  uVar6 = DAT_0008;
  *(undefined3 *)(puVar12 + -3) = 0x8e86;
  DataCopy_PointerToDAT_0004((undefined2 *)&DAT_0035);
  *(undefined3 *)(puVar12 + -3) = 0x8e8d;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_0031);
  *(undefined3 *)(puVar12 + -3) = 0x8e91;
  FUN_9f68();
  *(undefined3 *)(puVar12 + -4) = 0x8e98;
  DataCopy_DAT_0000ToPointer((undefined2 *)&DAT_0035);
  *(undefined3 *)(puVar12 + -4) = 0x8e9f;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_0035);
  *(undefined3 *)(puVar12 + -4) = 0x8ea5;
  DataDivideBy2('\b');
  uVar3 = RAM0002;
  Comp_Out_Data = uVar3;
  *(undefined3 *)(puVar12 + -4) = 0x8eb0;
  ADC_Read_Store_(3);
  puVar9 = puVar12 + -3;
  RAM000e = extraout_X_02;
  RAM000c = 0;
  *(undefined3 *)(puVar12 + -5) = 0x8eb9;
  DataCopy_DWORD_DAT_000c_To_DAT0000();
  *(undefined3 *)(puVar12 + -5) = 0x8ebf;
  DataMultiplyBy2('\x06');
  *(undefined3 *)(puVar12 + -5) = 0x8ec3;
  DataCopy_DWORD_DAT_0000_To_DAT000c();
  DAT_0008 = 3;
  *(undefined3 *)(puVar12 + -5) = 0x8ece;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_003d);
  *(undefined3 *)(puVar12 + -5) = 0x8ed2;
  DataCopy_DWORD_DAT_000c_To_DAT0004();
  *(undefined3 *)(puVar12 + -5) = 0x8ed6;
  FUN_9689();
  if ((bool)(extraout_CC_02 & 1)) {
    *(undefined3 *)(puVar12 + -5) = 0x8edf;
    DataCopy_DWORD_DAT_000c_To_DAT0000();
    *(undefined3 *)(puVar12 + -5) = 0x8ee3;
    ALU_4();
  } else {
    *(undefined3 *)(puVar12 + -5) = 0x8eec;
    DataCopy_PointerToDAT_0000((undefined2 *)&DAT_003d);
    *(undefined3 *)(puVar12 + -5) = 0x8ef0;
    DataCopy_DWORD_DAT_000c_To_DAT0004();
    *(undefined3 *)(puVar12 + -5) = 0x8ef4;
    ALU_6();
    puVar9 = puVar12 + -4;
  }
  sVar1 = RAM0000;
  bVar7 = false;
  if (sVar1 == 0) {
    puVar2 = (undefined *)RAM0002;
    bVar7 = puVar2 < &LAB_dc01;
  }
  if (bVar7) {
    sVar1 = RAM0000;
    bVar7 = false;
    if (sVar1 == 0) {
      uVar4 = RAM0002;
      bVar7 = uVar4 < 0x5001;
    }
    if (bVar7) {
      sVar1 = RAM0000;
      bVar7 = false;
      if (sVar1 == 0) {
        uVar4 = RAM0002;
        bVar7 = uVar4 < 0x3201;
      }
      if (!bVar7) {
        cVar5 = DAT_0008;
        DAT_0008 = cVar5 + '\x02';
      }
    } else {
      cVar5 = DAT_0008;
      DAT_0008 = cVar5 + '\x04';
    }
  } else {
    cVar5 = DAT_0008;
    DAT_0008 = cVar5 + '\b';
  }
  uVar6 = DAT_0008;
  *(undefined3 *)(puVar9 + -2) = 0x8f3d;
  DataCopy_PointerToDAT_0004((undefined2 *)&DAT_0039);
  *(undefined3 *)(puVar9 + -2) = 0x8f41;
  DataCopy_DWORD_DAT_000c_To_DAT0000();
  *(undefined3 *)(puVar9 + -2) = 0x8f45;
  FUN_9f68();
  *(undefined3 *)(puVar9 + -3) = 0x8f4c;
  DataCopy_DAT_0000ToPointer((undefined2 *)&DAT_0039);
  uVar6 = DAT_0008;
  *(undefined3 *)(puVar9 + -3) = 0x8f55;
  DataCopy_PointerToDAT_0004((undefined2 *)&DAT_003d);
  *(undefined3 *)(puVar9 + -3) = 0x8f5c;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_0039);
  *(undefined3 *)(puVar9 + -3) = 0x8f60;
  FUN_9f68();
  *(undefined3 *)(puVar9 + -4) = 0x8f67;
  DataCopy_DAT_0000ToPointer((undefined2 *)&DAT_003d);
  *(undefined3 *)(puVar9 + -4) = 0x8f6e;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_003d);
  *(undefined3 *)(puVar9 + -4) = 0x8f74;
  DataDivideBy2('\b');
  uVar3 = RAM0002;
  _15_DC_OK_Data = uVar3;
  *(undefined3 *)(puVar9 + -4) = 0x8f7f;
  ADC_Read_Store_(4);
  RAM000e = extraout_X_03;
  RAM000c = 0;
  *(undefined3 *)(puVar9 + -5) = 0x8f88;
  DataCopy_DWORD_DAT_000c_To_DAT0000();
  *(undefined3 *)(puVar9 + -5) = 0x8f8e;
  DataMultiplyBy2('\x06');
  *(undefined3 *)(puVar9 + -5) = 0x8f92;
  DataCopy_DWORD_DAT_0000_To_DAT000c();
  DAT_0008 = 5;
  uVar6 = DAT_0008;
  *(undefined3 *)(puVar9 + -5) = 0x8f9f;
  DataCopy_PointerToDAT_0004((undefined2 *)&DAT_0041);
  *(undefined3 *)(puVar9 + -5) = 0x8fa3;
  DataCopy_DWORD_DAT_000c_To_DAT0000();
  *(undefined3 *)(puVar9 + -5) = 0x8fa7;
  FUN_9f68();
  *(undefined3 *)(puVar9 + -6) = 0x8fae;
  DataCopy_DAT_0000ToPointer((undefined2 *)&DAT_0041);
  uVar6 = DAT_0008;
  *(undefined3 *)(puVar9 + -6) = 0x8fb7;
  DataCopy_PointerToDAT_0004((undefined2 *)&DAT_0045);
  *(undefined3 *)(puVar9 + -6) = 0x8fbe;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_0041);
  *(undefined3 *)(puVar9 + -6) = 0x8fc2;
  FUN_9f68();
  *(undefined3 *)(puVar9 + -7) = 0x8fc9;
  DataCopy_DAT_0000ToPointer((undefined2 *)&DAT_0045);
  *(undefined3 *)(puVar9 + -7) = 0x8fd0;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_0045);
  *(undefined3 *)(puVar9 + -7) = 0x8fd6;
  DataDivideBy2('\b');
  uVar3 = RAM0002;
  NTC1_Data = uVar3;
  *(undefined3 *)(puVar9 + -7) = 0x8fe1;
  ADC_Read_Store_(5);
  RAM000e = extraout_X_04;
  RAM000c = 0;
  *(undefined3 *)(puVar9 + -8) = 0x8fea;
  DataCopy_DWORD_DAT_000c_To_DAT0000();
  *(undefined3 *)(puVar9 + -8) = 0x8ff0;
  DataMultiplyBy2('\x06');
  *(undefined3 *)(puVar9 + -8) = 0x8ff4;
  DataCopy_DWORD_DAT_0000_To_DAT000c();
  DAT_0008 = 5;
  uVar6 = DAT_0008;
  *(undefined3 *)(puVar9 + -8) = 0x9001;
  DataCopy_PointerToDAT_0004((undefined2 *)&DAT_0049);
  *(undefined3 *)(puVar9 + -8) = 0x9005;
  DataCopy_DWORD_DAT_000c_To_DAT0000();
  *(undefined3 *)(puVar9 + -8) = 0x9009;
  FUN_9f68();
  *(undefined3 *)(puVar9 + -9) = 0x9010;
  DataCopy_DAT_0000ToPointer((undefined2 *)&DAT_0049);
  uVar6 = DAT_0008;
  *(undefined3 *)(puVar9 + -9) = 0x9019;
  DataCopy_PointerToDAT_0004((undefined2 *)&DAT_004d);
  *(undefined3 *)(puVar9 + -9) = 0x9020;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_0049);
  *(undefined3 *)(puVar9 + -9) = 0x9024;
  FUN_9f68();
  *(undefined3 *)(puVar9 + -10) = 0x902b;
  DataCopy_DAT_0000ToPointer((undefined2 *)&DAT_004d);
  *(undefined3 *)(puVar9 + -10) = 0x9032;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_004d);
  *(undefined3 *)(puVar9 + -10) = 0x9038;
  DataDivideBy2('\b');
  uVar3 = RAM0002;
  NTC2_Data = uVar3;
  *(undefined3 *)(puVar9 + -10) = 0x9043;
  ADC_Read_Store_(6);
  puVar10 = puVar9 + -9;
  RAM000e = extraout_X_05;
  RAM000c = 0;
  *(undefined3 *)(puVar9 + -0xb) = 0x904c;
  DataCopy_DWORD_DAT_000c_To_DAT0000();
  *(undefined3 *)(puVar9 + -0xb) = 0x9052;
  DataMultiplyBy2('\x06');
  *(undefined3 *)(puVar9 + -0xb) = 0x9056;
  DataCopy_DWORD_DAT_0000_To_DAT000c();
  DAT_0008 = 3;
  *(undefined3 *)(puVar9 + -0xb) = 0x9061;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_0055);
  *(undefined3 *)(puVar9 + -0xb) = 0x9065;
  DataCopy_DWORD_DAT_000c_To_DAT0004();
  *(undefined3 *)(puVar9 + -0xb) = 0x9069;
  FUN_9689();
  if ((bool)(extraout_CC_03 & 1)) {
    *(undefined3 *)(puVar9 + -0xb) = 0x9072;
    DataCopy_DWORD_DAT_000c_To_DAT0000();
    *(undefined3 *)(puVar9 + -0xb) = 0x9076;
    ALU_4();
  } else {
    *(undefined3 *)(puVar9 + -0xb) = 0x907f;
    DataCopy_PointerToDAT_0000((undefined2 *)&DAT_0055);
    *(undefined3 *)(puVar9 + -0xb) = 0x9083;
    DataCopy_DWORD_DAT_000c_To_DAT0004();
    *(undefined3 *)(puVar9 + -0xb) = 36999;
    ALU_6();
    puVar10 = puVar9 + -10;
  }
  sVar1 = RAM0000;
  bVar7 = false;
  if (sVar1 == 0) {
    puVar2 = (undefined *)RAM0002;
    bVar7 = puVar2 < &LAB_dc01;
  }
  if (bVar7) {
    sVar1 = RAM0000;
    bVar7 = false;
    if (sVar1 == 0) {
      uVar4 = RAM0002;
      bVar7 = uVar4 < 0x5001;
    }
    if (bVar7) {
      sVar1 = RAM0000;
      bVar7 = false;
      if (sVar1 == 0) {
        uVar4 = RAM0002;
        bVar7 = uVar4 < 0x3201;
      }
      if (!bVar7) {
        cVar5 = DAT_0008;
        DAT_0008 = cVar5 + '\x02';
      }
    } else {
      cVar5 = DAT_0008;
      DAT_0008 = cVar5 + '\x04';
    }
  } else {
    cVar5 = DAT_0008;
    DAT_0008 = cVar5 + '\b';
  }
  uVar6 = DAT_0008;
  *(undefined3 *)(puVar10 + -2) = 0x90d0;
  DataCopy_PointerToDAT_0004((undefined2 *)&DAT_0051);
  *(undefined3 *)(puVar10 + -2) = 0x90d4;
  DataCopy_DWORD_DAT_000c_To_DAT0000();
  *(undefined3 *)(puVar10 + -2) = 0x90d8;
  FUN_9f68();
  *(undefined3 *)(puVar10 + -3) = 0x90df;
  DataCopy_DAT_0000ToPointer((undefined2 *)&DAT_0051);
  uVar6 = DAT_0008;
  *(undefined3 *)(puVar10 + -3) = 0x90e8;
  DataCopy_PointerToDAT_0004((undefined2 *)&DAT_0055);
  *(undefined3 *)(puVar10 + -3) = 0x90ef;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_0051);
  *(undefined3 *)(puVar10 + -3) = 0x90f3;
  FUN_9f68();
  *(undefined3 *)(puVar10 + -4) = 0x90fa;
  DataCopy_DAT_0000ToPointer((undefined2 *)&DAT_0055);
  *(undefined3 *)(puVar10 + -4) = 0x9101;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_0055);
  *(undefined3 *)(puVar10 + -4) = 0x9107;
  DataDivideBy2('\b');
  uVar3 = RAM0002;
  VIN_Ok_Data = uVar3;
  *(undefined3 *)(puVar10 + -4) = 0x9112;
  ADC_Read_Store_(7);
  puVar13 = puVar10 + -3;
  RAM000e = extraout_X_06;
  RAM000c = 0;
  *(undefined3 *)(puVar10 + -5) = 0x911b;
  DataCopy_DWORD_DAT_000c_To_DAT0000();
  *(undefined3 *)(puVar10 + -5) = 0x9121;
  DataMultiplyBy2('\x06');
  *(undefined3 *)(puVar10 + -5) = 0x9125;
  DataCopy_DWORD_DAT_0000_To_DAT000c();
  DAT_0008 = 3;
  *(undefined3 *)(puVar10 + -5) = 0x9130;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_005d);
  *(undefined3 *)(puVar10 + -5) = 0x9134;
  DataCopy_DWORD_DAT_000c_To_DAT0004();
  *(undefined3 *)(puVar10 + -5) = 0x9138;
  FUN_9689();
  if ((bool)(extraout_CC_04 & 1)) {
    *(undefined3 *)(puVar10 + -5) = 0x9141;
    DataCopy_DWORD_DAT_000c_To_DAT0000();
    *(undefined3 *)(puVar10 + -5) = 0x9145;
    ALU_4();
  } else {
    *(undefined3 *)(puVar10 + -5) = 0x914e;
    DataCopy_PointerToDAT_0000((undefined2 *)&DAT_005d);
    *(undefined3 *)(puVar10 + -5) = 0x9152;
    DataCopy_DWORD_DAT_000c_To_DAT0004();
    *(undefined3 *)(puVar10 + -5) = 0x9156;
    ALU_6();
    puVar13 = puVar10 + -4;
  }
  sVar1 = RAM0000;
  bVar7 = false;
  if (sVar1 == 0) {
    puVar2 = (undefined *)RAM0002;
    bVar7 = puVar2 < &LAB_dc01;
  }
  if (bVar7) {
    sVar1 = RAM0000;
    bVar7 = false;
    if (sVar1 == 0) {
      uVar4 = RAM0002;
      bVar7 = uVar4 < 0x5001;
    }
    if (bVar7) {
      sVar1 = RAM0000;
      bVar7 = false;
      if (sVar1 == 0) {
        uVar4 = RAM0002;
        bVar7 = uVar4 < 0x3201;
      }
      if (!bVar7) {
        cVar5 = DAT_0008;
        DAT_0008 = cVar5 + '\x02';
      }
    } else {
      cVar5 = DAT_0008;
      DAT_0008 = cVar5 + '\x04';
    }
  } else {
    cVar5 = DAT_0008;
    DAT_0008 = cVar5 + '\b';
  }
  uVar6 = DAT_0008;
  *(undefined3 *)(puVar13 + -2) = 0x919f;
  DataCopy_PointerToDAT_0004((undefined2 *)&DAT_0059);
  *(undefined3 *)(puVar13 + -2) = 0x91a3;
  DataCopy_DWORD_DAT_000c_To_DAT0000();
  *(undefined3 *)(puVar13 + -2) = 0x91a7;
  FUN_9f68();
  *(undefined3 *)(puVar13 + -3) = 0x91ae;
  DataCopy_DAT_0000ToPointer((undefined2 *)&DAT_0059);
  uVar6 = DAT_0008;
  *(undefined3 *)(puVar13 + -3) = 0x91b7;
  DataCopy_PointerToDAT_0004((undefined2 *)&DAT_005d);
  *(undefined3 *)(puVar13 + -3) = 0x91be;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_0059);
  *(undefined3 *)(puVar13 + -3) = 0x91c2;
  FUN_9f68();
  *(undefined3 *)(puVar13 + -4) = 0x91c9;
  DataCopy_DAT_0000ToPointer((undefined2 *)&DAT_005d);
  *(undefined3 *)(puVar13 + -4) = 0x91d0;
  DataCopy_PointerToDAT_0000((undefined2 *)&DAT_005d);
  *(undefined3 *)(puVar13 + -4) = 0x91d6;
  DataDivideBy2('\b');
  uVar3 = RAM0002;
  Potentiometer_Data = uVar3;
  DAT_0008 = puVar13[-1];
  *(undefined3 *)(puVar13 + -3) = 0x91e2;
  DataCopy_StackToDAT_000c();
  return extraout_A;
}

void __farcall Interrupt_AnalogDataManipulation(void) {
  //********************** ChatGPT simplified *******************************

  short sVar5, sVar8;
  WeldingType WVar6 = WeldingType; // Assuming WeldingType is an enum or similar
  ushort uVar9;
  undefined2 uVar4, extraout_X, extraout_X_00, extraout_X_01, extraout_X_02,
      extraout_X_03, extraout_X_04, extraout_X_05;
  undefined1 uVar2;

  // Setup parameters for reading VFB Data
  DAT_0004 = 400;
  RAM0002 = 0x870;
  RAM0000 = 0x5a;
  uVar4 = VFB_Data;
  DAT_0001 = ? Read_Something_ADC1(uVar4);
  AnalogValue_VFB = extraout_X;

  // Setup parameters for reading AC Input Data
  DAT_0004 = 200;
  RAM0002 = 0xf0a;
  RAM0000 = 0x14;
  uVar4 = AC_In_OK_Data;
  DAT_0001 = ? Read_Something_ADC1(uVar4, 0x1a);
  AnalogValue_AC_IN = extraout_X_00;

  // Setup parameters for reading VIN Data
  DAT_0004 = 0x96;
  RAM0002 = 0xa28;
  RAM0000 = 10;
  uVar4 = VIN_Ok_Data;
  DAT_0001 = ? Read_Something_ADC1(uVar4, 0x37);
  AnalogValue_Vin_15V = extraout_X_01;

  // Process Potentiometer Data
  undefined *puVar7 = (undefined *)Potentiometer_Data;
  if (&DAT_012b < puVar7) {
    if (Potentiometer_Data < 0xfa1) {
      puVar7 = (undefined *)Potentiometer_Data;
    } else {
      puVar7 = (undefined *)0xfa0;
    }
  } else {
    puVar7 = &DAT_012c;
  }

  // Read AMPS Data
  DAT_0004 = 200;
  RAM0002 = 4000;
  RAM0000 = 0x14;
  DAT_0001 = ? Read_Something_ADC1(puVar7, 0x74);
  AnalogValue_AMPS(Pot) = extraout_X_02;

  // Handle Routilic Welding Type
  if (WeldingType == Routilic) {
    uVar9 = AnalogValue_VFB;
    sVar8 = 0; // Default value
    if (uVar9 < 0x9b) {
      // Condition-based assignments
      if (uVar9 < 0xf)
        sVar8 = 0x19;
      else if (uVar9 < 0x14)
        sVar8 = 0x18;
      else if (uVar9 < 0x19)
        sVar8 = 0x17;
      else if (uVar9 < 0x1e)
        sVar8 = 0x16;
      else if (uVar9 < 0x23)
        sVar8 = 0x15;
      else if (uVar9 < 0x2d)
        sVar8 = 0x14;
      else if (uVar9 < 0x37)
        sVar8 = 0x13;
      else if (uVar9 < 0x41)
        sVar8 = 0x12;
      else if (uVar9 < 0x4b)
        sVar8 = 0x11;
      else if (uVar9 < 0x55)
        sVar8 = 0xf;
      else if (uVar9 < 0x5f)
        sVar8 = 0xd;
      else if (uVar9 < 0x69)
        sVar8 = 0xb;
      else if (uVar9 < 0x73)
        sVar8 = 9;
      else if (uVar9 < 0x7d)
        sVar8 = 7;
      else if (uVar9 < 0x87)
        sVar8 = 5;
      else if (uVar9 < 0x91)
        sVar8 = 3;
      else if (uVar9 < 0x9b)
        sVar8 = 1;
    }

    // Update AMPS based on AnalogValue_AC_IN
    if (AnalogValue_AC_IN > 0x1e && AnalogValue_AC_IN < 0x8c) {
      sVar5 = AnalogValue_AMPS(Pot);
      AnalogValue_AMPS(Pot) = sVar8 + sVar5;
      if (AnalogValue_AMPS(Pot) > 200) {
        AnalogValue_AMPS(Pot) = 200;
      }
    }
  }
  // Handle Celulose Welding Type
  else if (WeldingType == Celulose) {
    uVar9 = AnalogValue_VFB;
    if (uVar9 < 0xb4 && AnalogValue_AC_IN < 0xa0) {
      if (AnalogValue_AC_IN < 0x82 && AnalogValue_AC_IN > 0x1e) {
        sVar8 = AnalogValue_VFB;
        uVar4 = AnalogValue_VFB;
        RAM0000 = 0x3c;
        uVar1 = DAT_0000;
        uVar3 = DAT_0001;
        // Perform calculations
        uVar9 = ALU_7(0xb4 - sVar8, uVar1, uVar3);
        AnalogValue_AMPS(Pot) = uVar9 / 0x8c + 10 + AnalogValue_AMPS(Pot);
      } else if (AnalogValue_AC_IN > 0x1e) {
        sVar8 = AnalogValue_VFB;
        uVar4 = AnalogValue_VFB;
        RAM0000 = 0x3c;
        uVar1 = DAT_0000;
        uVar3 = DAT_0001;
        // Perform calculations
        uVar9 = ALU_7(0xbe - sVar8, uVar1, uVar3);
        AnalogValue_AMPS(Pot) = uVar9 / 0xa0 + 10 + AnalogValue_AMPS(Pot);
      }
    }
    // Cap AMPS value
    if (AnalogValue_AMPS(Pot) > 200) {
      AnalogValue_AMPS(Pot) = 200;
    }
  }
  // Handle TIG Welding Type
  else if (WeldingType == Tig) {
    DAT_0004 = 0xa0a;
    RAM0002 = 200;
    RAM0000 = 0x1ae;
    DAT_0001 = ? Read_Something_ADC1(AnalogValue_AMPS(Pot), 0x33);
    AnalogValue_DAC_Out = extraout_X_04;
    return;
  }

  // Handle other Welding Types
  DAT_0004 = 0xa28;
  RAM0002 = 200;
  RAM0000 = 0x1c2;
  DAT_0001 = ? Read_Something_ADC1(AnalogValue_AMPS(Pot), 0xe);
  AnalogValue_DAC_Out = extraout_X_03;
}

void __farcall DataIncremet1InDAT_0003(void)

{
  undefined uVar1;
  char cVar2;

  cVar2 = DAT_0003;
  DAT_0003 = cVar2 + '\x01';
  cVar2 = DAT_0003;
  if (((cVar2 == '\0') && (cVar2 = Dat_0002, Dat_0002 = cVar2 + '\x01',
                           cVar2 = Dat_0002, cVar2 == '\0')) &&
      (cVar2 = DAT_0001, DAT_0001 = cVar2 + '\x01', cVar2 = DAT_0001,
       cVar2 == '\0')) {
    uVar1 = DAT_0000;
    cVar2 = DAT_0000;
    DAT_0000 = cVar2 + '\x01';
    uVar1 = DAT_0000;
    uVar1 = DAT_0000;
  }
  return;
}

char __farcall ALU_3(void)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined uVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;

  bVar3 = DAT_0003;
  bVar8 = DAT_0006._1_1_;
  cVar9 = DAT_0006._1_1_;
  DAT_0003 = bVar3 + cVar9;
  bVar2 = Dat_0002;
  bVar7 = DAT_0006._0_1_;
  cVar9 = DAT_0006._0_1_;
  bVar1 = CARRY1(bVar2, bVar7) || CARRY1(bVar2 + cVar9, CARRY1(bVar3, bVar8));
  Dat_0002 = bVar2 + cVar9 + CARRY1(bVar3, bVar8);
  bVar2 = DAT_0001;
  bVar3 = DAT_0004._1_1_;
  cVar6 = DAT_0004._1_1_;
  DAT_0001 = bVar2 + cVar6 + bVar1;
  cVar9 = DAT_0000;
  uVar4 = DAT_0004._0_1_;
  uVar4 = DAT_0004._0_1_;
  cVar5 = DAT_0004._0_1_;
  cVar9 = cVar9 + cVar5 + (CARRY1(bVar2, bVar3) || CARRY1(bVar2 + cVar6, bVar1));
  DAT_0000 = cVar9;
  return cVar9;
/*
bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined uVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  char cVar9;

  bVar3 = DAT_0003;       [d0,d1,d2,d3]+[d4,d5,d6,d7]
  bVar8 = DAT_0007;
  cVar9 = DAT_0007;
  DAT_0003 = bVar3 + cVar9;
  bVar2 = Dat_0002;
  bVar7 = DAT_0006;
  cVar9 = DAT_0006;
  bVar1 = CARRY1(bVar2, bVar7) || CARRY1(bVar2 + cVar9, CARRY1(bVar3, bVar8));
  Dat_0002 = bVar2 + cVar9 + CARRY1(bVar3, bVar8);
  bVar2 = DAT_0001;
  bVar3 = DAT_0005;
  cVar6 = DAT_0005;
  DAT_0001 = bVar2 + cVar6 + bVar1;
  cVar9 = DAT_0000;
  uVar4 = DAT_0004;
  uVar4 = DAT_0004;
  cVar5 = DAT_0004;
  DAT_0000 = cVar9 + cVar5 + (CARRY1(bVar2, bVar3) || CARRY1(bVar2 + cVar6, bVar1)); 
  return cVar9;
*/

  /* chatGPT simplified
  char __farcall ALU_3(void)
{
  byte bVar2 = Dat_0002;
  byte bVar3 = DAT_0003;
  byte bVar7 = DAT_0006._0_1_;
  byte bVar8 = DAT_0006._1_1_;
  char cVar9 = DAT_0006._1_1_;

  // Update DAT_0003 with the sum of DAT_0003 and DAT_0006._1_1_
  DAT_0003 = bVar3 + cVar9;

  // Check for carries and update Dat_0002
  bool bVar1 = CARRY1(bVar2, bVar7) || CARRY1(bVar2 + cVar9, CARRY1(bVar3,
bVar8)); Dat_0002 = bVar2 + cVar9 + CARRY1(bVar3, bVar8);

  // Update DAT_0001
  DAT_0001 += DAT_0004._1_1_ + bVar1;

  // Update DAT_0000
  DAT_0000 += DAT_0004._0_1_ + (CARRY1(bVar2, DAT_0004._1_1_) || CARRY1(bVar2 +
DAT_0004._1_1_, bVar1));

  return DAT_0000;  // Return the updated value of DAT_0000
}

   */
}

char ALU_6(void)

{
  byte bVar1;
  byte bVar2;
  undefined uVar3;
  char cVar4;
  char cVar5;

  cVar5 = DAT_0003;
  uVar3 = DAT_0006._1_1_;
  uVar3 = DAT_0006._1_1_;
  cVar4 = DAT_0006._1_1_;
  DAT_0003 = cVar5 - cVar4;
  bVar1 = Dat_0002;
  bVar2 = DAT_0006._0_1_;
  uVar3 = DAT_0006._0_1_;
  cVar5 = DAT_0006._0_1_;
  Dat_0002 = (bVar1 - cVar5) - (bVar1 < bVar2);
  bVar1 = DAT_0001;
  bVar2 = DAT_0004._1_1_;
  uVar3 = DAT_0004._1_1_;
  cVar5 = DAT_0004._1_1_;
  DAT_0001 = (bVar1 - cVar5) - (bVar1 < bVar2);
  bVar1 = DAT_0000;
  bVar2 = DAT_0004._0_1_;
  uVar3 = DAT_0004._0_1_;
  cVar5 = DAT_0004._0_1_;
  cVar5 = (bVar1 - cVar5) - (bVar1 < bVar2);
  DAT_0000 = cVar5;
  return cVar5;
}

char __farcall ALU_4(void)

{
  byte bVar1;
  char cVar2;
  byte *in_X;

  cVar2 = DAT_0003;
  DAT_0003 = cVar2 - in_X[3];
  bVar1 = Dat_0002;
  Dat_0002 = (bVar1 - in_X[2]) - (bVar1 < in_X[2]);
  bVar1 = DAT_0001;
  DAT_0001 = (bVar1 - in_X[1]) - (bVar1 < in_X[1]);
  bVar1 = DAT_0000;
  cVar2 = (bVar1 - *in_X) - (bVar1 < *in_X);
  DAT_0000 = cVar2;
  return cVar2;
}

// DAT_0000=d4*d3+d5*d2+d6*d1+d3^2+d4*d2+d5*d1+d6*d0
// DAT_0001=d5*d3+d6*d2+d1
// DAT_0002=d6*d3

undefined1 __farcall ALU_1(void)

{
  undefined1 __farcall ALU_1(void) {
    char cVar1, cVar5;
    ushort uVar7, uVar8;
    short sVar4;

    // Initial calculations using DAT_0000 and DAT_0001
    cVar1 = DAT_0000;
    cVar5 = DAT_0001;
    DAT_0000 = (char)DAT_0006 * cVar1;
    DAT_0000 += (char)RAM0005 * cVar5;

    // Similar operation for DAT_0002
    cVar5 = Dat_0002;
    DAT_0000 += (char)DAT_0004 * cVar5;

    // Similar operation for DAT_0003
    cVar5 = DAT_0003;
    DAT_0000 += (char)RAM0003 * cVar5;

    // Update RAM0000 with multiplication and addition
    DAT_0001 = 0;
    sVar4 = RAM0000;
    RAM0000 = ((DAT_0006 & 0xff) * (ushort)DAT_0001) + sVar4;

    // Perform operations with Dat_0002 and RAM0005
    RAM0000 = ((RAM0005 & 0xff) * (ushort)Dat_0002) + RAM0000;

    // Update RAM0000 using DAT_0004
    RAM0000 = ((DAT_0004 & 0xff) * (ushort)DAT_0003) + RAM0000;

    // Update RAM0001 using Dat_0002 and handle carry
    uVar8 = (DAT_0006 & 0xff) * (ushort)Dat_0002;
    RAM0001 = uVar8 + RAM0001;
    if (CARRY2(uVar8, RAM0001)) {
      DAT_0000 += 1;
    }

    // Update RAM0001 using RAM0005
    uVar8 = (RAM0005 & 0xff) * (ushort)DAT_0003;
    RAM0001 = uVar8 + RAM0001;
    if (CARRY2(uVar8, RAM0001)) {
      DAT_0000 += 1;
    }

    // Update RAM0002 and handle carry
    uVar8 = (DAT_0006 & 0xff) * (ushort)DAT_0003;
    RAM0002 = uVar8 + RAM0002;
    if (CARRY2(uVar8, RAM0002)) {
      RAM0000 += 1;
    }

    return DAT_0001;
  }
}

ushort __farcall ALU_2(void)

{
  ushort __farcall ALU_2(void) {
    ushort uVar10 = RAM0000;

    // Check if RAM0000 is non-zero
    if (uVar10 != 0) {
      char shift_count = ' ';

      // If DAT_0000 is zero, transfer RAM0001 to RAM0000
      if (DAT_0000 == '\0') {
        RAM0000 = RAM0001;
        Dat_0002 = DAT_0003;
        DAT_0003 = 0;
        shift_count = '\x18'; // Set shift count to 24 (hex 18)
      }

      ushort uVar11 = 0;
      bool carry = true;

      // Bitwise loop: Shift left and propagate carry
      while (shift_count-- > 0) {
        byte bVar5 = DAT_0003;
        DAT_0003 = (DAT_0003 << 1) | carry;

        byte bVar4 = Dat_0002;
        Dat_0002 = (Dat_0002 << 1) | (bVar5 & 0x80) >> 7;

        DAT_0001 = (DAT_0001 << 1) | (Dat_0002 & 0x80) >> 7;
        DAT_0000 = (DAT_0000 << 1) | (DAT_0001 & 0x80) >> 7;

        // Update uVar10 and uVar11 with carry propagation
        uVar11 = (uVar11 << 1) | (DAT_0000 & 0x80) >> 7;
        uVar10 = (uVar10 << 1) | (uVar11 & 0x8000) >> 15;

        // Check if uVar10 and uVar11 are less than or equal to DAT_0004 and
        // DAT_0006
        carry = uVar10 < DAT_0004 || (uVar10 == DAT_0004 && uVar11 < DAT_0006);

        // Subtract DAT_0004 and DAT_0006 if condition is met
        if (!carry) {
          uVar11 -= DAT_0006;
          if (uVar11 & 0x8000) {
            uVar10 -= 1;
          }
          uVar10 -= DAT_0004;
        }
      }

      // Final update
      DAT_0004 = uVar10;
      DAT_0006 = uVar11;

      // Complement RAM values and return
      RAM0000 = ~RAM0000;
      RAM0002 = ~RAM0002;
      return ~RAM0002;
    }

    // If RAM0000 is zero, perform division
    if (DAT_0004 == 0) {
      ushort result = RAM0002 / DAT_0006;
      RAM0002 = result;
      DAT_0006 = RAM0002 % DAT_0006;
      return result;
    }

    // Reset if DAT_0004 is not zero
    DAT_0004 = 0;
    DAT_0006 = (DAT_0003 << 8) | Dat_0002;
    RAM0000 = 0;
    RAM0002 = 0;
    return uVar10;
  }
}

word __farcall FUN_9689(void)

{
  undefined2 uVar1;
  word sVar3;
  word sVar2;

  sVar3 = RAM0000;
  uVar1 = DAT_0004;
  uVar1 = DAT_0004;
  sVar2 = DAT_0004;
  if (sVar3 == sVar2) {
    sVar3 = RAM0002;
    uVar1 = DAT_0006;
    uVar1 = DAT_0006;
    uVar1 = DAT_0006;
  }
  return sVar3;
}

void __farcall DataMultiplyBy2(char param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;

  if (param_1 != '\0') {
    do {
      bVar2 = DAT_0003;
      cVar1 = DAT_0003;
      DAT_0003 = cVar1 << 1;
      bVar3 = Dat_0002;
      cVar1 = Dat_0002;
      Dat_0002 = cVar1 << 1 | (bVar2 & 0x80) != 0;
      bVar2 = DAT_0001;
      cVar1 = DAT_0001;
      DAT_0001 = cVar1 << 1 | (bVar3 & 0x80) != 0;
      cVar1 = DAT_0000;
      DAT_0000 = cVar1 << 1 | (bVar2 & 0x80) != 0;
      param_1 = param_1 + -1;
    } while (param_1 != '\0');
  }
  return;
}

void __farcall DataDivideBy2(char param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;

  if (param_1 != '\0') {
    do {
      bVar1 = DAT_0000;
      bVar2 = DAT_0000;
      DAT_0000 = bVar2 >> 1;
      bVar2 = DAT_0001;
      bVar3 = DAT_0001;
      DAT_0001 = ((bVar1 & 1) != 0) << 7 | bVar3 >> 1;
      bVar1 = Dat_0002;
      bVar3 = Dat_0002;
      Dat_0002 = ((bVar2 & 1) != 0) << 7 | bVar3 >> 1;
      bVar2 = DAT_0003;
      DAT_0003 = ((bVar1 & 1) != 0) << 7 | bVar2 >> 1;
      param_1 = param_1 + -1;
    } while (param_1 != '\0');
  }
  return;
}

undefined2 __farcall FUN_96b6(undefined2 param_1)

{
  char cVar1;
  undefined uVar2;
  undefined2 uVar3;

  RAM0002 = param_1;
  uVar3 = 0;
  cVar1 = Dat_0002;
  uVar2 = Dat_0002;
  if (cVar1 < '\0') {
    uVar3 = 0xffff;
  }
  RAM0000 = uVar3;
  return uVar3;
}

void __farcall GPIO_INIT(void)

{
  undefined uVar1;
  byte bVar2;

  // DAT_000:
  // .------7------.--------6--------.------------5-----------.----------4-------.
  // |    IN/out   |  Resistor       | Interrupt/speed |DigitalWrite(*OUT)|
  // |0-Input mode |0-Floating       |0-No interrupt/Low Speed|0- Low |
  // |1-Output mode|1-PullUp/Pushpull|1-Interrupt / High Speed|1- High |
  // `-------------*-----------------*------------------------*------------------´´
  uVar1 = DAT_0008;
  DAT_0008 = 0x70;
  DAT_0000 = 0;
  bVar2 = DAT_0008;
  GPIO_SetPortInputOutput(bVar2, &Peripherals::PORTA.ODR);
  DAT_0000 = 0;
  bVar2 = DAT_0008;
  // Set PA4/PA5/PA6 Input, Floating, No interrupt
  GPIO_SetPortMode_Write(bVar2, &Peripherals::PORTA.ODR);
  DAT_0008 = 2;
  DAT_0000 = 1;
  bVar2 = DAT_0008;
  GPIO_SetPortInputOutput(bVar2, &Peripherals::PORTB.ODR);
  DAT_0000 = 0x40;
  bVar2 = DAT_0008;
  // Set PB1 Input, Pull-up, No interrupt
  GPIO_SetPortMode_Write(bVar2, &Peripherals::PORTB.ODR);
  DAT_0008 = 0x9c;
  DAT_0000 = 0;
  bVar2 = DAT_0008;
  GPIO_SetPortInputOutput(bVar2, &Peripherals::PORTC.ODR);
  DAT_0000 = 0;
  bVar2 = DAT_0008;
  // Set PC2/PC3/PC4/PC7 Input, Floating, No interrupt
  GPIO_SetPortMode_Write(bVar2, &Peripherals::PORTC.ODR);
  DAT_0008 = 0x80;
  DAT_0000 = 0;
  bVar2 = DAT_0008;
  GPIO_SetPortInputOutput(bVar2, &Peripherals::PORTA.ODR);
  DAT_0000 = 0;
  bVar2 = DAT_0008;
  // Set PD7 Input, Floating, No interrupt (potentiometer)
  GPIO_SetPortMode_Write(bVar2, &Peripherals::PORTD.ODR);
  DAT_0008 = 2;
  DAT_0000 = 1;
  bVar2 = DAT_0008;
  GPIO_SetPortInputOutput(bVar2, &Peripherals::PORTB.ODR);
  DAT_0000 = 0x40;
  bVar2 = DAT_0008;
  // Set PD1 Input, Pull-up, No interrupt
  GPIO_SetPortMode_Write(bVar2, &Peripherals::PORTD.ODR);
  DAT_0008 = 4;
  DAT_0000 = 1;
  bVar2 = DAT_0008;
  GPIO_SetPortInputOutput(bVar2, &Peripherals::PORTB.ODR);
  DAT_0000 = 0;
  bVar2 = DAT_0008;
  // Set PD2 Input, Floating, No interrupt
  GPIO_SetPortMode_Write(bVar2, &Peripherals::PORTD.ODR);
  DAT_0008 = 0x19;
  DAT_0000 = 1;
  bVar2 = DAT_0008;
  GPIO_SetPortInputOutput(bVar2, &Peripherals::PORTD.ODR);
  DAT_0000 = 0xf0;
  bVar2 = DAT_0008;
  // Set PD0/PD3/PD4 Output, Push-pull,High Speed -Set High (Comp_on, Led8,
  // Led10)
  GPIO_SetPortMode_Write(bVar2, &Peripherals::PORTD.ODR);
  DAT_0008 = 0xf;
  DAT_0000 = 1;
  bVar2 = DAT_0008;
  GPIO_SetPortInputOutput(bVar2, &Peripherals::PORTE.ODR);
  DAT_0000 = 0xf0;
  bVar2 = DAT_0008;
  // Set PE0/PE1/PE2/PE3 Output,Push-Pull, High Speed -Set High (Led7, Led6,
  // Led5, Led1)
  GPIO_SetPortMode_Write(bVar2, &Peripherals::PORTE.ODR);
  // Set PE4/PE5 Output,Push-Pull, High Speed -Set Low (Fans, Main relay)
  bVar2 = Peripherals::PORTE.CR1;
  Peripherals::PORTE.CR1 = bVar2 | 0x30;
  DAT_0000 = 0;
  DigitalWrite(0x10, &Peripherals::PORTE.ODR);
  DAT_0000 = 0;
  DigitalWrite(0x20, &Peripherals::PORTE.ODR);
  bVar2 = Peripherals::PORTE.DDR;
  Peripherals::PORTE.DDR = bVar2 | 0x30;
  bVar2 = Peripherals::PORTE.CR2;
  Peripherals::PORTE.CR2 = bVar2 | 0x30;
  DAT_0008 = 1;
  DAT_0000 = 0;
  bVar2 = DAT_0008;
  GPIO_SetPortInputOutput(bVar2, &Peripherals::PORTF.ODR);
  DAT_0000 = 0x90;
  bVar2 = DAT_0008;
  // Set PF0 Output, Floating, Low speed -Set HIGH
  GPIO_SetPortMode_Write(bVar2, &Peripherals::PORTF.ODR);
  DAT_0008 = uVar1;
  return;
}

// ADC1_In:
// 0-A6 VFB
// 1-A5 AC_In_OK
// 2-A4 Compout
// 3-C7 315_DC_OK
// 4-C4 NTC1
// 5-C3 NTC2
// 6-C2 VIN_OK (15Volts)
// 7-D7 Potentiometer

void ADC_Read_Store_(byte ADC1_Port_Channel)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  byte bVar5;
  undefined2 extraout_X;
  undefined2 *puStack_15;
  ushort local_13[5];
  undefined2 local_9;

  bVar5 = INTERRUPT_Something3();
  DAT_000b = bVar5;
  bVar5 = DAT_000b;
  puStack_15 = (undefined2 *)0x9802;
  ADC_AnalogRead(bVar5);
  DAT_000a = 0;
  DAT_0003 = 0;
  Dat_0002 = 0;
  while (bVar5 = DAT_000a, bVar5 < 10) {
    bVar5 = DAT_000a;
    RAM0000 = (ushort)bVar5 << 1;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    sVar2 = RAM0000;
    puStack_15 = (undefined2 *)((short)local_13 + sVar2);
    bVar5 = DAT_000b;
    ADC_AnalogRead(bVar5);
    *puStack_15 = extraout_X;
    cVar4 = DAT_000a;
    DAT_000a = cVar4 + '\x01';
  }
  DAT_000a = 0;
  while (bVar5 = DAT_000a, bVar5 < 9) {
    bVar5 = DAT_000a;
    RAM0000 = (ushort)bVar5 << 1;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    sVar2 = RAM0000;
    if (local_13[0] < *(ushort *)((short)local_13 + sVar2 + 2)) {
      RAM0002 = local_13[0];
      bVar5 = DAT_000a;
      RAM0000 = (ushort)bVar5 << 1;
      uVar1 = RAM0000;
      uVar1 = RAM0000;
      uVar1 = RAM0000;
      uVar1 = RAM0000;
      uVar1 = RAM0000;
      sVar2 = RAM0000;
      local_13[0] = *(ushort *)((short)local_13 + sVar2 + 2);
      bVar5 = DAT_000a;
      RAM0000 = (ushort)bVar5 << 1;
      uVar1 = RAM0000;
      uVar1 = RAM0000;
      uVar1 = RAM0000;
      uVar1 = RAM0000;
      uVar1 = RAM0000;
      sVar2 = RAM0000;
      uVar1 = RAM0002;
      *(undefined2 *)((short)local_13 + sVar2 + 2) = uVar1;
    }
    cVar4 = DAT_000a;
    DAT_000a = cVar4 + '\x01';
  }
  DAT_000a = 9;
  while (bVar5 = DAT_000a, 1 < bVar5) {
    bVar5 = DAT_000a;
    RAM0000 = (ushort)bVar5 << 1;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    sVar2 = RAM0000;
    if (*(ushort *)((short)&puStack_15 + sVar2) < 0x97f8) {
      RAM0002 = 0x97f8;
      bVar5 = DAT_000a;
      RAM0000 = (ushort)bVar5 << 1;
      uVar1 = RAM0000;
      uVar1 = RAM0000;
      uVar1 = RAM0000;
      uVar1 = RAM0000;
      uVar1 = RAM0000;
      sVar2 = RAM0000;
      local_9 = *(undefined2 *)((short)&puStack_15 + sVar2);
      bVar5 = DAT_000a;
      RAM0000 = (ushort)bVar5 << 1;
      uVar1 = RAM0000;
      uVar1 = RAM0000;
      uVar1 = RAM0000;
      uVar1 = RAM0000;
      uVar1 = RAM0000;
      sVar2 = RAM0000;
      uVar1 = RAM0002;
      *(undefined2 *)((short)&puStack_15 + sVar2) = uVar1;
    }
    cVar4 = DAT_000a;
    DAT_000a = cVar4 + -1;
  }
  DAT_0003 = 0;
  Dat_0002 = 0;
  DAT_000a = 1;
  while (bVar5 = DAT_000a, bVar5 < 9) {
    bVar5 = DAT_000a;
    RAM0000 = (ushort)bVar5 << 1;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    sVar2 = RAM0000;
    uVar1 = RAM0002;
    uVar1 = RAM0002;
    uVar1 = RAM0002;
    uVar1 = RAM0002;
    uVar1 = RAM0002;
    sVar3 = RAM0002;
    RAM0002 = *(short *)((short)local_13 + sVar2) + sVar3;
    cVar4 = DAT_000a;
    DAT_000a = cVar4 + '\x01';
  }
  uVar1 = RAM0002;
  RAM_copy1();
  return;
}

// WARNING: Restarted to delay deadcode elimination for space: stack

byte __farcall ADC_AnalogRead(byte channel)

{
  undefined uVar1;
  undefined uVar2;
  byte bVar3;
  byte bVar4;
  undefined extraout_XL;
  undefined extraout_XL_00;
  undefined extraout_XL_01;
  undefined extraout_XL_02;
  undefined in_stack_00000001[16];
  ADC1 ADC1;
  ADC1 ADC2;
  ADC1 ADC3;
  ADC1 ADC4;

  uVar1 = DAT_0008;
  // channel = ADC Channel select
  if (channel < 8) {
    ShiftLeftData(channel);
    DAT_0008 = extraout_XL;
    bVar4 = DAT_0008;
    bVar3 = Peripherals::ADC1.SQR4;
    Peripherals::ADC1.SQR4 = bVar4 | bVar3;
    ADC_ConversionStart(&Peripherals::ADC1.CR1);
    ADC1.CR2 = uVar1;
    ADC1._2_16_ = in_stack_00000001;
    ADC1.CR1 = 0x47;
    bVar4 = ADC_CheckEndOfConversion(1, ADC1);
    if (bVar4 == 0) {
      bVar4 = ADC_ConversionStart(&Peripherals::ADC1.CR1);
    }
    ADC_ReturnDataRegistersLowHigh(bVar4, &Peripherals::ADC1);
    bVar4 = DAT_0008;
    DAT_0008 = ~bVar4;
    uVar2 = DAT_0008;
    uVar2 = DAT_0008;
    bVar4 = DAT_0008;
    bVar3 = Peripherals::ADC1.SQR4;
    channel = bVar4 & bVar3;
    Peripherals::ADC1.SQR4 = channel;
  } else if (channel < 0x10) {
    ShiftLeftData(channel - 8);
    DAT_0008 = extraout_XL_00;
    bVar4 = DAT_0008;
    bVar3 = Peripherals::ADC1.SQR3;
    Peripherals::ADC1.SQR3 = bVar4 | bVar3;
    ADC_ConversionStart(&Peripherals::ADC1.CR1);
    ADC2.CR2 = uVar1;
    ADC2._2_16_ = in_stack_00000001;
    ADC2.CR1 = 0x8e;
    bVar4 = ADC_CheckEndOfConversion(1, ADC2);
    if (bVar4 == 0) {
      bVar4 = ADC_ConversionStart(&Peripherals::ADC1.CR1);
    }
    ADC_ReturnDataRegistersLowHigh(bVar4, &Peripherals::ADC1);
    bVar4 = DAT_0008;
    DAT_0008 = ~bVar4;
    uVar2 = DAT_0008;
    uVar2 = DAT_0008;
    bVar4 = DAT_0008;
    bVar3 = Peripherals::ADC1.SQR3;
    channel = bVar4 & bVar3;
    Peripherals::ADC1.SQR3 = channel;
  } else if (channel < 0x18) {
    ShiftLeftData(channel - 0x10);
    DAT_0008 = extraout_XL_01;
    bVar4 = DAT_0008;
    bVar3 = Peripherals::ADC1.SQR2;
    Peripherals::ADC1.SQR2 = bVar4 | bVar3;
    ADC_ConversionStart(&Peripherals::ADC1.CR1);
    ADC3.CR2 = uVar1;
    ADC3._2_16_ = in_stack_00000001;
    ADC3.CR1 = 0xd5;
    bVar4 = ADC_CheckEndOfConversion(1, ADC3);
    if (bVar4 == 0) {
      bVar4 = ADC_ConversionStart(&Peripherals::ADC1.CR1);
    }
    ADC_ReturnDataRegistersLowHigh(bVar4, &Peripherals::ADC1);
    bVar4 = DAT_0008;
    DAT_0008 = ~bVar4;
    uVar2 = DAT_0008;
    uVar2 = DAT_0008;
    bVar4 = DAT_0008;
    bVar3 = Peripherals::ADC1.SQR2;
    channel = bVar4 & bVar3;
    Peripherals::ADC1.SQR2 = channel;
  } else if (channel == 0x18) {
    ShiftLeftData('\0');
    DAT_0008 = extraout_XL_02;
    bVar4 = DAT_0008;
    bVar3 = Peripherals::ADC1.SQR1;
    Peripherals::ADC1.SQR1 = bVar4 | bVar3;
    ADC_ConversionStart(&Peripherals::ADC1.CR1);
    ADC4.CR2 = uVar1;
    ADC4._2_16_ = in_stack_00000001;
    ADC4.CR1 = 0x1b;
    bVar4 = ADC_CheckEndOfConversion(1, ADC4);
    if (bVar4 == 0) {
      bVar4 = ADC_ConversionStart(&Peripherals::ADC1.CR1);
    }
    ADC_ReturnDataRegistersLowHigh(bVar4, &Peripherals::ADC1);
    bVar4 = DAT_0008;
    DAT_0008 = ~bVar4;
    uVar2 = DAT_0008;
    uVar2 = DAT_0008;
    bVar4 = DAT_0008;
    bVar3 = Peripherals::ADC1.SQR1;
    channel = bVar4 & bVar3;
    Peripherals::ADC1.SQR1 = channel;
  }
  DAT_0008 = uVar1;
  return channel;
}

undefined2 __farcall _StackDataManipulation(void)

{
  undefined2 in_X;

  return in_X;
}

// WARNING: This is an inlined function

undefined2 __farcall DataCopy_Param_2ToDAT_008(undefined2 param_1)

{
  undefined2 in_X;

  RAM0008 = param_1;
  return in_X;
}

void INTERRUPT_Something1(void)

{
  INTERRUPT_SomethingDataManipulation(0);
  return;
}

void INTERRUPT_Something2(void)

{
  INTERRUPT_SomethingDataManipulation(4);
  return;
}

byte __farcall INTERRUPT_Something3(void)

{
  byte extraout_A;

  INTERRUPT_SomethingDataManipulation(8);
  return extraout_A;
}

void INTERRUPT_Something4(void)

{
  INTERRUPT_SomethingDataManipulation(0xc);
  return;
}

undefined2 __farcall INTERRUPT_SomethingDataManipulation(undefined param_1)

{
  undefined2 in_X;

  return in_X;
}

// WARNING: This is an inlined function

void DataCopy_StackToDAT_0000(byte param_1, byte param_2)

{
  undefined in_stack_00000005;
  undefined in_stack_00000007;

  RAM0000 = _param_1;
  RAM0002 = _param_2;
  StackManipulation1();
  return;
}

void DataCopy_StackToDAT_0004(void)

{
  undefined2 in_stack_00000004;
  undefined2 in_stack_00000006;

  DAT_0004 = in_stack_00000004;
  DAT_0006 = in_stack_00000006;
  StackManipulation1();
  return;
}

void __farcall DataCopy_StackToDAT_0008(void)

{
  undefined2 in_stack_00000004;
  undefined2 in_stack_00000006;

  RAM0008 = in_stack_00000004;
  RAM000a = in_stack_00000006;
  StackManipulation1();
  return;
}

void DataCopy_StackToDAT_000c(void)

{
  undefined2 in_stack_00000004;
  undefined2 in_stack_00000006;

  RAM000c = in_stack_00000004;
  RAM000e = in_stack_00000006;
  StackManipulation1();
  return;
}

void __farcall StackManipulation1(void)

{
  return;
}

void DataStackManipulation(void)

{
  DataCopy_StackToDAT_000c();
  DataCopy_StackToDAT_0008();
  return;
}

void __farcall RAM_copy1(void)

{
  DataCopy_StackToDAT_0008();
  return;
}

// WARNING: Inlined function: DataCopy_Param_2ToDAT_008

void __farcall DataCopyToDAT_0008(void)

{
  undefined2 in_stack_00000001;

  RAM0008 = in_stack_00000001;
  return;
}

// copy DAT_000a=DAT_0000 DAT_000b=DAT_0001

void __farcall DataCopy_WORD_DAT_0000_To_DAT000a(void)

{
  undefined uVar1;

  uVar1 = DAT_0000;
  DAT_000a = uVar1;
  uVar1 = DAT_0001;
  DAT_000b = uVar1;
  return;
}

// DAT_0000 <= DAT_0008
// DAT_0001 <= DAT_0009
// DAT_0002 <= DAT_000a
// DAT_0003 <= DAT_000b

void __farcall DataCopy_DWORD_DAT_0008_To_DAT0000(void)

{
  undefined uVar1;

  uVar1 = DAT_0008;
  DAT_0000 = uVar1;
  uVar1 = DAT_0009;
  DAT_0001 = uVar1;
  uVar1 = DAT_000a;
  Dat_0002 = uVar1;
  uVar1 = DAT_000b;
  DAT_0003 = uVar1;
  return;
}

// DAT_0000 <= DAT_000c
// DAT_0001 <= DAT_000d
// DAT_0002 <= DAT_000e
// DAT_0003 <= DAT_000f

void __farcall DataCopy_DWORD_DAT_000c_To_DAT0000(void)

{
  undefined uVar1;

  uVar1 = DAT_000c;
  DAT_0000 = uVar1;
  uVar1 = DAT_000d;
  DAT_0001 = uVar1;
  uVar1 = DAT_000e;
  Dat_0002 = uVar1;
  uVar1 = DAT_000f;
  DAT_0003 = uVar1;
  return;
}

void __farcall DataCopy_DWORD_DAT_0000_To_DAT0004(void)

{
  undefined uVar1;

  uVar1 = DAT_0000;
  DAT_0004._0_1_ = uVar1;
  uVar1 = DAT_0001;
  DAT_0004._1_1_ = uVar1;
  uVar1 = Dat_0002;
  DAT_0006._0_1_ = uVar1;
  uVar1 = DAT_0003;
  DAT_0006._1_1_ = uVar1;
  return;
}

void __farcall DataCopy_DWORD_DAT_0008_To_DAT0004(void)

{
  undefined uVar1;

  uVar1 = DAT_0008;
  DAT_0004._0_1_ = uVar1;
  uVar1 = DAT_0009;
  DAT_0004._1_1_ = uVar1;
  uVar1 = DAT_000a;
  DAT_0006._0_1_ = uVar1;
  uVar1 = DAT_000b;
  DAT_0006._1_1_ = uVar1;
  return;
}

// DAT_0004 <= DAT_000c
// DAT_0005 <= DAT_000d
// DAT_0006 <= DAT_000e
// DAT_0007 <= DAT_000f

void __farcall DataCopy_DWORD_DAT_000c_To_DAT0004(void)

{
  undefined uVar1;

  uVar1 = DAT_000c;
  DAT_0004._0_1_ = uVar1;
  uVar1 = DAT_000d;
  DAT_0004._1_1_ = uVar1;
  uVar1 = DAT_000e;
  DAT_0006._0_1_ = uVar1;
  uVar1 = DAT_000f;
  DAT_0006._1_1_ = uVar1;
  return;
}

void __farcall DataCopy_DWORD_DAT_0004_To_DAT0008(void)

{
  undefined uVar1;

  uVar1 = DAT_0004._0_1_;
  DAT_0008 = uVar1;
  uVar1 = DAT_0004._1_1_;
  DAT_0009 = uVar1;
  uVar1 = DAT_0006._0_1_;
  DAT_000a = uVar1;
  uVar1 = DAT_0006._1_1_;
  DAT_000b = uVar1;
  return;
}

// DAT_000c <= DAT_0000
// DAT_000d <= DAT_0001
// DAT_000e <= DAT_0002
// DAT_000f <= DAT_0003

void __farcall DataCopy_DWORD_DAT_0000_To_DAT000c(void)

{
  undefined uVar1;

  uVar1 = DAT_0000;
  DAT_000c = uVar1;
  uVar1 = DAT_0001;
  DAT_000d = uVar1;
  uVar1 = Dat_0002;
  DAT_000e = uVar1;
  uVar1 = DAT_0003;
  DAT_000f = uVar1;
  return;
}

void CheckButton(void)

{
  undefined uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined2 uVar5;
  bool bVar7;
  undefined2 bVar6;

  _StackDataManipulation();
  // Button Pressed - Button pressed=0
  bVar7 = DigitalRead(2, &Peripherals::PORTB.ODR);
  if (bVar7) {
    uVar4 = RAM0008;
    RAM0008 = uVar4 & 0xfffe;
  } else {
    uVar4 = RAM0008;
    RAM0008 = uVar4 | 1;
  }
  bVar6 = DAT_007b;
  uVar5 = RAM0008;
  DAT_0000 = (byte)uVar5 & 1;
  uVar1 = DAT_0000;
  uVar1 = DAT_0000;
  bVar2 = DAT_0000;
  if (((byte)bVar6 & 1) == bVar2) {
    uVar4 = RAM0008;
    if ((uVar4 & 1) != 0) {
      uVar4 = ButtonLastState;
      if ((uVar4 & 1) == 0) {
        uVar4 = ButtonPressed;
        ButtonPressed = uVar4 | 1;
        uVar4 = ButtonDepressed;
        ButtonDepressed = uVar4 & 0xfffe;
      }
      uVar4 = ButtonLastState;
      ButtonLastState = uVar4 | 1;
      DataCopyToDAT_0008();
      return;
    }
    uVar4 = ButtonLastState;
    if ((uVar4 & 1) != 0) {
      uVar4 = ButtonPressed;
      ButtonPressed = uVar4 & 0xfffe;
      uVar4 = ButtonDepressed;
      ButtonDepressed = uVar4 | 1;
    }
    uVar4 = ButtonLastState;
    ButtonLastState = uVar4 & 0xfffe;
    DataCopyToDAT_0008();
    return;
  }
  uVar5 = RAM0008;
  bVar6 = DAT_007b;
  RAM0000 = (ushort)((byte)uVar5 & 1);
  bVar3 = DAT_0001;
  bVar2 = DAT_0000;
  DAT_007b =
      CONCAT11((byte)((ushort)bVar6 >> 8) | bVar2, (byte)bVar6 & 0xfe | bVar3);
  DataCopyToDAT_0008();
  return;
}

void ChangeFrontLeds(void)

{
  WeldingType WVar1;
  bool bVar2;
  Machine_Status MVar3;

  DAT_0000 = 1;
  DigitalWrite(4, &Peripherals::PORTE.ODR);
  bVar2 = IsTigMode;
  if (bVar2 == true) {
    DAT_0000 = 1;
    // Port E1-ON
    DigitalWrite(2, &Peripherals::PORTE.ODR);
  } else {
    DAT_0000 = 0;
    // Port E1-OFF
    DigitalWrite(2, &Peripherals::PORTE.ODR);
  }
  WVar1 = WeldingType;
  if (WVar1 == Routilic) {
    DAT_0000 = 0;
    // ROUTILIC MODE
    // Port E3-OFF Port D4-OFF Port D3-ON
    DigitalWrite(8, &Peripherals::PORTE.ODR);
    DAT_0000 = 0;
    DigitalWrite(0x10, &Peripherals::PORTD.ODR);
    DAT_0000 = 1;
    DigitalWrite(8, &Peripherals::PORTD.ODR);
  } else {
    WVar1 = WeldingType;
    if (WVar1 == Celulose) {
      DAT_0000 = 0;
      // CELLULOSE MODE
      // Port E3-OFF Port D4-ON Port D3-OFF
      DigitalWrite(8, &Peripherals::PORTE.ODR);
      DAT_0000 = 1;
      DigitalWrite(0x10, &Peripherals::PORTD.ODR);
      DAT_0000 = 0;
      DigitalWrite(8, &Peripherals::PORTD.ODR);
    } else {
      DAT_0000 = 0;
      // TIG MODE
      // Port E3-ON Port D4-OFF Port D3-ON
      DigitalWrite(8, &Peripherals::PORTD.ODR);
      DAT_0000 = 0;
      DigitalWrite(0x10, &Peripherals::PORTD.ODR);
      DAT_0000 = 1;
      DigitalWrite(8, &Peripherals::PORTE.ODR);
    }
  }
  MVar3 = MachineStatus;
  if (MVar3 == OverHeating / Error) {
    DAT_0000 = 1;
    // Fault LED
    // Port E0-ON
    DigitalWrite(1, &Peripherals::PORTE.ODR);
    return;
  }
  DAT_0000 = 0;
  // Port E0-OFF
  DigitalWrite(1, &Peripherals::PORTE.ODR);
  return;
}

void __farcall GPIO_SetPortMode_Write(byte value1, byte *GPIO_PORT)

{
  byte bVar1;
  undefined uVar2;

  // .------7------.--------6--------.------------5-----------.----------4-------.
  // |    IN/out   |  Resistor       | Interrupt/speed |DigitalWrite(*OUT)|
  // |0-Input mode |0-Floating       |0-No interrupt/Low Speed|0- Low |
  // |1-Output mode|1-PullUp/Pushpull|1-Interrupt / High Speed|1- High |
  // `-------------*-----------------*------------------------*------------------´
  DAT_0001 = value1;
  // Reset PORT Interupts/Output Speed for value
  bVar1 = DAT_0001;
  GPIO_PORT[4] = ~bVar1 & GPIO_PORT[4];
  // DATA_0000 defines:
  bVar1 = DAT_0000;
  if ((bVar1 & 0x80) == 0) {
    // Define data direction Register INPUT
    bVar1 = DAT_0001;
    GPIO_PORT[2] = ~bVar1 & GPIO_PORT[2];
  } else {
    bVar1 = DAT_0000;
    if ((bVar1 & 0x10) == 0) {
      bVar1 = DAT_0001;
      // Digital Write PORT - LOW
      *GPIO_PORT = ~bVar1 & *GPIO_PORT;
    } else {
      bVar1 = DAT_0001;
      // /* Digital Write Port HIGH
      *GPIO_PORT = bVar1 | *GPIO_PORT;
    }
    // /* Define data direction Register OUTPUT */
    bVar1 = DAT_0001;
    GPIO_PORT[2] = bVar1 | GPIO_PORT[2];
  }
  bVar1 = DAT_0000;
  if ((bVar1 & 0x40) == 0) {
    // /* Define data CR1 Floating / Open drain
    bVar1 = DAT_0001;
    GPIO_PORT[3] = ~bVar1 & GPIO_PORT[3];
  } else {
    // /* Define data CR1  Pull-up / PushPull
    bVar1 = DAT_0001;
    GPIO_PORT[3] = bVar1 | GPIO_PORT[3];
  }
  bVar1 = DAT_0000;
  if ((bVar1 & 0x20) != 0) {
    // /* Define PORT Interupts/Output High Speed
    bVar1 = DAT_0001;
    GPIO_PORT[4] = bVar1 | GPIO_PORT[4];
    return;
  }
  // /* Define PORT No Interupt /Output Low Speed
  bVar1 = DAT_0001;
  DAT_0001 = ~bVar1;
  uVar2 = DAT_0001;
  uVar2 = DAT_0001;
  bVar1 = DAT_0001;
  GPIO_PORT[4] = bVar1 & GPIO_PORT[4];
  return;
}

byte *__farcall Interrupt_Main__(void)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  char cVar4;
  byte *puVar5;
  byte cVar1;

  cVar4 = Fault_Ok;
  if (cVar4 == '\0') {
    DAT_0000 = 0;
    // Set DAT_0061 to DAT_0066 = 0xff
    while (bVar1 = DAT_0000, bVar1 < 5) {
      bVar1 = DAT_0000;
      *(undefined *)(bVar1 + 0x61) = 0xff;
      cVar1 = DAT_0000;
      DAT_0000 = cVar1 + 1;
    }
  }
  sVar3 = InterruptCounter1;
  InterruptCounter1 = sVar3 + 1;
  uVar2 = InterruptCounter1;
  // This IF runs Always
  if (1 < uVar2) {
    InterruptCounter1 = 0;
    uVar2 = Interrupt_StageLoop;
    Interrupt_StageLoop = uVar2 | 1;
    INTERRUPT_AnalogRead();
  }
  sVar3 = InterruptCounter2;
  InterruptCounter2 = sVar3 + 1;
  uVar2 = InterruptCounter2;
  // This IF Will runs every 4 Calls
  if (4 < uVar2) {
    InterruptCounter2 = 0;
    uVar2 = Interrupt_StageLoop;
    Interrupt_StageLoop = uVar2 | 2;
    Interrupt_AnalogDataManipulation();
  }
  sVar3 = InterruptCounter3;
  InterruptCounter3 = sVar3 + 1;
  uVar2 = InterruptCounter3;
  // This if will run every 199 Calls
  if (199 < uVar2) {
    InterruptCounter3 = 0;
    uVar2 = Interrupt_StageLoop;
    Interrupt_StageLoop = uVar2 | 8;
  }
  sVar3 = InterruptCounter4;
  InterruptCounter4 = sVar3 + 1;
  puVar5 = (byte *)InterruptCounter4;
  // This IF will run every 449 Calls
  if (&INT_01c1 < puVar5) {
    InterruptCounter3 = 0;
    uVar2 = Interrupt_StageLoop;
    puVar5 = (byte *)(uVar2 | 0x10);
    Interrupt_StageLoop = puVar5;
  }
  return puVar5;
}

byte __farcall CLK_SetPeripheralClockEnable(undefined param_1)

{
  undefined uVar1;
  char cVar2;
  byte bVar3;
  byte extraout_XL;
  byte extraout_XL_00;
  byte extraout_XL_01;
  byte extraout_XL_02;
  byte extraout_XL_03;
  byte extraout_XL_04;

  Dat_0002 = param_1;
  DAT_0001 = 0;
  bVar3 = Dat_0002;
  DAT_0001 = bVar3 & 0xf0;
  uVar1 = DAT_0001;
  cVar2 = DAT_0001;
  if (cVar2 == '\0') {
    uVar1 = DAT_0000;
    cVar2 = DAT_0000;
    if (cVar2 != '\0') {
      bVar3 = Dat_0002;
      ShiftLeftData(bVar3 & 0xf);
      bVar3 = Peripherals::CLK.PCKENR1;
      Peripherals::CLK.PCKENR1 = extraout_XL | bVar3;
      return extraout_XL | bVar3;
    }
    bVar3 = Dat_0002;
    ShiftLeftData(bVar3 & 0xf);
    bVar3 = Peripherals::CLK.PCKENR1;
    Peripherals::CLK.PCKENR1 = ~extraout_XL_00 & bVar3;
    return ~extraout_XL_00 & bVar3;
  }
  cVar2 = DAT_0001;
  if (cVar2 != '\x10') {
    uVar1 = DAT_0000;
    cVar2 = DAT_0000;
    if (cVar2 != '\0') {
      bVar3 = Dat_0002;
      ShiftLeftData(bVar3 & 0xf);
      DAT_50d0 = extraout_XL_03 | DAT_50d0;
      return DAT_50d0;
    }
    bVar3 = Dat_0002;
    ShiftLeftData(bVar3 & 0xf);
    DAT_50d0 = ~extraout_XL_04 & DAT_50d0;
    return DAT_50d0;
  }
  uVar1 = DAT_0000;
  cVar2 = DAT_0000;
  if (cVar2 != '\0') {
    bVar3 = Dat_0002;
    ShiftLeftData(bVar3 & 0xf);
    bVar3 = Peripherals::CLK.PCKENR2;
    Peripherals::CLK.PCKENR2 = extraout_XL_01 | bVar3;
    return extraout_XL_01 | bVar3;
  }
  bVar3 = Dat_0002;
  ShiftLeftData(bVar3 & 0xf);
  bVar3 = Peripherals::CLK.PCKENR2;
  Peripherals::CLK.PCKENR2 = ~extraout_XL_02 & bVar3;
  return ~extraout_XL_02 & bVar3;
}

undefined1 _Read_Something_ADC1(undefined2 param_1, undefined2 param_2, ...)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined uVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  short sVar7;
  undefined2 extraout_X;
  short sVar8;

  INTERRUPT_Something3();
  DAT_0006 = extraout_X;
  RAM0008 = param_1;
  // DataCopy4
  //
  // DAT_000a = DAT_0000
  // DAT_000b = DAT_0001
  DataCopy_WORD_DAT_0000_To_DAT000a();
  sVar8 = RAM0002;
  uVar4 = DAT_0006;
  uVar6 = RAM0008;
  uVar1 = RAM0008;
  uVar1 = RAM0008;
  if (uVar6 <= uVar4) {
    sVar5 = DAT_0004;
    uVar1 = RAM000a;
    uVar1 = RAM000a;
    uVar1 = RAM000a;
    uVar1 = RAM000a;
    uVar1 = RAM000a;
    uVar1 = RAM000a;
    sVar7 = RAM000a;
    RAM0002 = sVar5 - sVar7;
    RAM0000 = 0;
    sVar5 = DAT_0006;
    uVar1 = RAM0008;
    uVar1 = RAM0008;
    uVar1 = RAM0008;
    uVar1 = RAM0008;
    uVar1 = RAM0008;
    uVar1 = RAM0008;
    sVar7 = RAM0008;
    DAT_0006 = sVar5 - sVar7;
    DAT_0004 = 0;
    uVar2 = ALU_1();
    DAT_0001 = uVar2;
    uVar1 = RAM0008;
    uVar1 = RAM0008;
    uVar1 = RAM0008;
    uVar1 = RAM0008;
    uVar1 = RAM0008;
    uVar1 = RAM0008;
    sVar5 = RAM0008;
    DAT_0006 = sVar8 - sVar5;
    DAT_0004 = 0;
    ALU_2();
    uVar1 = RAM0002;
    uVar1 = RAM000a;
    uVar1 = RAM000a;
    uVar1 = RAM000a;
    uVar1 = RAM000a;
    uVar1 = RAM000a;
    uVar1 = RAM000a;
    RAM_copy1();
    uVar3 = DAT_0001;
    return uVar3;
  }
  sVar5 = DAT_0004;
  uVar1 = RAM000a;
  uVar1 = RAM000a;
  uVar1 = RAM000a;
  uVar1 = RAM000a;
  uVar1 = RAM000a;
  uVar1 = RAM000a;
  sVar7 = RAM000a;
  RAM0002 = sVar5 - sVar7;
  RAM0000 = 0;
  sVar7 = RAM0008;
  uVar1 = DAT_0006;
  uVar1 = DAT_0006;
  uVar1 = DAT_0006;
  uVar1 = DAT_0006;
  uVar1 = DAT_0006;
  uVar1 = DAT_0006;
  sVar5 = DAT_0006;
  DAT_0006 = sVar7 - sVar5;
  DAT_0004 = 0;
  uVar2 = ALU_1();
  DAT_0001 = uVar2;
  uVar1 = RAM0008;
  uVar1 = RAM0008;
  uVar1 = RAM0008;
  uVar1 = RAM0008;
  uVar1 = RAM0008;
  uVar1 = RAM0008;
  sVar5 = RAM0008;
  DAT_0006 = sVar8 - sVar5;
  DAT_0004 = 0;
  ALU_2();
  uVar4 = RAM0002;
  uVar6 = RAM000a;
  uVar1 = RAM000a;
  uVar1 = RAM000a;
  if (uVar4 < uVar6) {
    RAM0000 = uVar4;
    uVar1 = RAM000a;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    uVar1 = RAM0000;
    RAM_copy1();
    uVar3 = DAT_0001;
    return uVar3;
  }
  RAM_copy1();
  uVar3 = DAT_0001;
  return uVar3;
}

void FUN_9f68(void)

{
  undefined2 uVar1;
  short sVar2;
  undefined1 uVar3;
  byte extraout_A;

  INTERRUPT_Something3();
  INTERRUPT_Something4();
  DataCopy_DWORD_DAT_0004_To_DAT0008();
  DataCopy_DWORD_DAT_0000_To_DAT000c();
  DAT_0006 = (ushort)extraout_A;
  DAT_0004 = 0;
  DataCopy_DWORD_DAT_000c_To_DAT0000();
  uVar3 = ALU_1();
  DAT_0001 = uVar3;
  DataCopy_DWORD_DAT_0000_To_DAT000c();
  DataCopy_DWORD_DAT_0008_To_DAT0004();
  RAM0000 = (ushort)extraout_A;
  uVar1 = RAM0000;
  uVar1 = RAM0000;
  uVar1 = RAM0000;
  uVar1 = RAM0000;
  uVar1 = RAM0000;
  uVar1 = RAM0000;
  sVar2 = RAM0000;
  FUN_96b6(0x100 - sVar2);
  uVar3 = ALU_1();
  DAT_0001 = uVar3;
  DataCopy_DWORD_DAT_0000_To_DAT0004();
  DataCopy_DWORD_DAT_000c_To_DAT0000();
  ALU_3();
  DAT_0006 = 0x7f;
  DAT_0004 = 0;
  ALU_3();
  DataDivideBy2('\b');
  DataStackManipulation();
  return;
}

void Setup(void)

{
  CLK_Init();
  GPIO_INIT();
  DAT_0000 = 1;
  // PWM -on
  DigitalWrite(1, &Peripherals::PORTD.ODR);
  DAT_0000 = 0;
  // Main Relay - LOW
  DigitalWrite(0x20, &Peripherals::PORTE.ODR);
  MainRelayState = false;
  DAT_0000 = 0;
  // Fans - LOW
  DigitalWrite(0x10, &Peripherals::PORTE.ODR);
  ADC_Init();
  DAC_Init();
  FLASH_Init();
  TIM4_Init();
  __EnableInterrupt();
  MachineStatus = Idle_1;
  IcUniqueDataGetter();
  do {
    Main();
  } while (true);
}

void __farcall ADC_SamplingTimeConfig(char param_1, byte *param_2)

{
  char cVar1;
  byte bVar2;

  if (param_1 != '\0') {
    param_2[2] = param_2[2] & 0x1f;
    cVar1 = DAT_0000;
    param_2[2] = cVar1 << 5 | param_2[2];
    return;
  }
  param_2[1] = param_2[1] & 0xf8;
  bVar2 = DAT_0000;
  param_2[1] = bVar2 | param_2[1];
  return;
}

void TIM4_Init(void)

{
  DAT_0000 = 1;
  TIM4_Set_TIM4PrescalerValue_SetTIM4UpdateGeneration(7);
  TIM4_SetCounterValue(0);
  TIM4_SetAuto_reloadValue(0xfa);
  TIM4_SetAuto_reloadPreloadEnable('\x01');
  TIM4_SetOne_pulseMode('\0');
  TIM4_SetInterruptFlag(1);
  DAT_0000 = 1;
  TIM4_Update_interrupt_set(1);
  TIM4_ResetslaveModeSelection();
  __EnableInterrupt();
  TIM4_SetCounterEnable('\x01');
  return;
}

void __farcall EEPROM_GetWeldingType(void)

{
  WeldingType WVar1;

  WVar1 = EEPROM_Read(0x1000);
  WeldingType = WVar1;
  IsTigMode = false;
  WVar1 = WeldingType;
  if (((WVar1 != Routilic) && (WVar1 = WeldingType, WVar1 != Celulose)) &&
      (WVar1 = WeldingType, WVar1 != Tig)) {
    EEPROM_Write(0x1000);
    WVar1 = EEPROM_Read(0x1000);
    WeldingType = WVar1;
  }
  return;
}

void CLK_Init(void)

{
  CLK_SetHigh_speedInternalOscillatorON('\x01');
  CLK_SetSystemClockSelectionBits(1);
  CLK_SetSystemClockPrescaler(0);
  CLK_SetSwitchStart_stop('\x01');
  DAT_0000 = 1;
  CLK_SetPeripheralClockEnable(2);
  DAT_0000 = 1;
  CLK_SetPeripheralClockEnable(0x10);
  DAT_0000 = 1;
  CLK_SetPeripheralClockEnable(7);
  return;
}

void __farcall DAC_SetCr1(char param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;

  Dat_0002 = 0;
  Dat_0002 = (&DAC.CR1)[(byte)(param_1 << 1)];
  bVar2 = Dat_0002;
  Dat_0002 = bVar2 & 0xc1;
  bVar2 = DAT_0001;
  bVar3 = Dat_0002;
  Dat_0002 = bVar2 | bVar3;
  cVar1 = DAT_0000;
  if (cVar1 != '0') {
    bVar2 = DAT_0000;
    bVar3 = Dat_0002;
    Dat_0002 = bVar2 | 4 | bVar3;
  }
  bVar2 = Dat_0002;
  (&DAC.CR1)[(byte)(param_1 << 1)] = bVar2;
  return;
}

void EEPROM_Write(undefined2 param_1)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  undefined extraout_A;
  undefined2 extraout_X;

  bVar2 = INTERRUPT_Something3();
  RAM000a = extraout_X;
  DAT_0008 = bVar2;
  // Wait for Data EEPROM protection disabled flag
  FLASH_EnablingWriteMainProg_DataArea(-9);
  do {
    cVar3 = FLASH_CheckFlashStatusRegister(8);
  } while (cVar3 == '\0');
  uVar1 = DAT_0008;
  RAM0008 = 0;
  // Copy DAT_0008->DAT_0000 DAT_0009->DAT_0001 DAT_000a->DAT_0002
  // DAT_000b->DAT_0003
  DataCopy_DWORD_DAT_0008_To_DAT0000();
  RAM0002Set(extraout_A);
  FLASH_SetStatusRegister(0xf7);
  RAM_copy1();
  return;
}

void __farcall IcUniqueDataGetter(void)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;

  VREFINT_Factory_CONV = DAT_4910;
  TS_Factory_CONV_V90 = DAT_4911;
  DAT_0000 = 0;
  puVar3 = &DAT_4926;
  while (bVar1 = DAT_0000, bVar1 < 0xc) {
    bVar1 = DAT_0000;
    *(undefined *)(bVar1 + 0x15) = *puVar3;
    cVar2 = DAT_0000;
    DAT_0000 = cVar2 + '\x01';
    puVar3 = puVar3 + 1;
  }
  return;
}

void __farcall DAC_AnalogWrite(undefined Channel_Ofset, undefined2 Value)

{
  byte bVar1;
  word puVar1;
  char cVar1;

  Dat_0002 = Channel_Ofset;
  cVar1 = Dat_0002;
  if (cVar1 != '\b') {
    bVar1 = Dat_0002;
    RAM0000 = bVar1 + 0x5388;
    puVar1 = RAM0000;
    *(char *)puVar1 = (char)((ushort)Value >> 8);
    bVar1 = Dat_0002;
    (&DAC.RDHRL)[bVar1] = (byte)Value;
    return;
  }
  DAC.DHR8 = (byte)Value;
  return;
}

void ADC_Init(void)

{
  DAT_0000 = 1;
  CLK_SetPeripheralClockEnable(0x10);
  DAT_0001 = 0;
  DAT_0000 = 0;
  ADC_SetSingleMode_DisablePrescaler(0, &Peripherals::ADC1.CR1);
  DAT_0000 = 6;
  // Set sampling time = DAT_0000 (var1 != 0 CR2 else CR1 )
  ADC_SamplingTimeConfig('\0', &Peripherals::ADC1.CR1);
  ADC_On_OFF('\x01', &Peripherals::ADC1.CR1);
  return;
}

undefined2 __farcall ADC_ReturnDataRegistersLowHigh(byte param_1,
                                                    undefined2 ADC)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  undefined uVar4;

  RAM0000 = ADC;
  sVar2 = RAM0000;
  sVar3 = RAM0000;
  RAM0000 = (ushort) * (byte *)(sVar3 + 5);
  uVar4 = DAT_0001;
  bVar1 = DAT_0000;
  return CONCAT11(*(byte *)(sVar2 + 4) | bVar1, uVar4);
}

undefined2 *__farcall DataCopy_PointerToDAT_0000(undefined2 *param_1)

{
  RAM0000 = *param_1;
  RAM0002 = param_1[1];
  return param_1;
}

undefined2 *__farcall DataCopy_PointerToDAT_0004(undefined2 *param_1)

{
  DAT_0004 = *param_1;
  DAT_0006 = param_1[1];
  return param_1;
}

void __farcall DataCopy_DAT_0000ToPointer(undefined2 *param_1)

{
  undefined2 uVar1;

  uVar1 = RAM0000;
  *param_1 = uVar1;
  uVar1 = RAM0002;
  param_1[1] = uVar1;
  return;
}

short __farcall ALU_7(ushort param_1, undefined param_2, undefined param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined uVar4;

  bVar2 = param_3;
  bVar1 = param_2;
  // Return = param1*vbar3+(param1*bvar1+ param1>>8*vbar2)*0x100
  // Return = param1*DAT_0001+(param1*DAT_0000+ param1>>8*DAT_0000)*0x100
  bVar3 = param_3;
  uVar4 = param_2;
  param_2 = uVar4;
  uVar4 = param_3;
  param_3 = uVar4;
  return (param_1 & 0xff) * (ushort)bVar3 +
         ((param_1 & 0xff) * (ushort)bVar1 + (param_1 >> 8) * (ushort)bVar2) *
             0x100;
}

void __farcall ShiftLeftData(char param_1)

{
  if (param_1 != '\0') {
    do {
      param_1 = param_1 + -1;
    } while (param_1 != '\0');
  }
  return;
}

void __farcall ADC_SetSingleMode_DisablePrescaler(undefined param_1,
                                                  byte *param_2)

{
  byte bVar1;
  byte bVar2;

  Dat_0002 = param_1;
  *param_2 = *param_2 & 0x9b;
  bVar1 = DAT_0000;
  bVar2 = Dat_0002;
  *param_2 = bVar1 | bVar2 | *param_2;
  param_2[1] = param_2[1] & 0x7f;
  bVar1 = DAT_0001;
  param_2[1] = bVar1 | param_2[1];
  return;
}

// WARNING: Inlined function: DataCopy_StackToDAT_0000

undefined2 TIM4_Update_overflow_TriggerInterrupt(void)

{
  undefined in_CC;
  undefined in_stack_00000001;

  INTERRUPT_Something1();
  INTERRUPT_Something2();
  TIM4_SetInterruptFlag(1);
  Interrupt_Main__();
  DataCopy_StackToDAT_0004();
  RAM0000 = 0xcfc1;
  RAM0002 = CONCAT11(in_CC, in_stack_00000001) & 0xbfff;
  StackManipulation1();
  return 0xcfc1;
}

void __farcall INTERRUPT_ALU(byte param_1, short param_2)

{
  byte bVar1;
  undefined uVar2;
  byte bVar3;

  DAT_0000 = 0;
  DAT_0000 = param_1 >> 3;
  bVar1 = DAT_0000;
  DAT_0001 = (bVar1 & 0x10) >> 2;
  bVar1 = DAT_0000;
  bVar3 = DAT_0001;
  DAT_0000 = bVar1 & 3 | bVar3;
  bVar1 = DAT_0000;
  DAT_0000 = ~bVar1;
  uVar2 = DAT_0000;
  uVar2 = DAT_0000;
  uVar2 = DAT_0000;
  *(undefined *)(param_2 + 3) = uVar2;
  return;
}

// WARNING: Inlined function: DataCopy_StackToDAT_0000

undefined2 INTERRUPT_COMP1_COMP2_ADC1(void)

{
  undefined in_CC;
  undefined in_stack_00000001;

  INTERRUPT_Something1();
  INTERRUPT_Something2();
  INTERRUPT_ALU(0x10, 0x5340);
  DataCopy_StackToDAT_0004();
  RAM0000 = 0xf02;
  RAM0002 = CONCAT11(in_CC, in_stack_00000001) & 0xbfff;
  StackManipulation1();
  return 0xf02;
}

void __farcall GPIO_SetPortInputOutput(byte param_1, byte *GPIO_PORT)

{
  undefined uVar1;
  char cVar2;

  uVar1 = DAT_0000;
  cVar2 = DAT_0000;
  if (cVar2 != '\0') {
    GPIO_PORT[3] = param_1 | GPIO_PORT[3];
    return;
  }
  GPIO_PORT[3] = ~param_1 & GPIO_PORT[3];
  return;
}

void DAC_Init(void)

{
  DAT_0000 = 1;
  CLK_SetPeripheralClockEnable(7);
  DAT_0001 = 0;
  DAT_0000 = 0x30;
  DAC_SetCr1('\0');
  DAT_0000 = 1;
  DAC_SetChannelEnable('\0');
  return;
}

void __farcall INIT_Something(void)

{
  undefined *puVar1;
  undefined *pcVar1;

  puVar1 = &LAB_8080;
  while (puVar1 != &LAB_8094) {
    *(undefined **)((short)register0x0008 + -1) = puVar1 + 3;
    *(undefined3 *)((short)register0x0008 + -4) = 0xa361;
    DataCopy_PointerToDAT_0005(puVar1);
    *(undefined3 *)((short)register0x0008 + -2) = 0xa366;
    pcVar1 = (undefined *)RAM0005;
    puVar1 = (undefined *)(*(code *)pcVar1)(
        *(undefined2 *)((short)register0x0008 + -1));
    register0x0008 = (BADSPACEBASE *)((short)register0x0008 + -1);
  }
  return;
}

void __farcall DAC_SetChannelEnable(char param_1)

{
  undefined uVar1;
  char cVar2;
  byte *pbVar3;

  pbVar3 = &DAC.CR1 + (byte)(param_1 << 1);
  uVar1 = DAT_0000;
  cVar2 = DAT_0000;
  if (cVar2 != '\0') {
    *pbVar3 = *pbVar3 | 1;
    return;
  }
  *pbVar3 = *pbVar3 & 0xfe;
  return;
}

void __farcall FLASH_EnablingWriteMainProg_DataArea(char param_1)

{
  // Enabling write access to the main program memory
  if (param_1 == -3) {
    Peripherals::FLASH.PUKR = 0x56;
    Peripherals::FLASH.PUKR = 0xae;
  }
  // Enabling write access to the DATA area
  if (param_1 == -9) {
    Peripherals::FLASH.DUKR = 0xae;
    Peripherals::FLASH.DUKR = 0x56;
  }
  return;
}

// WARNING: This function may have set the stack pointer

void RESET_INIT(void)

{
  short sVar1;
  undefined2 extraout_X;

  RAM07fd = 0xa3c7;
  sVar1 = Clear_X_X__();
  if (sVar1 != 0) {
    RAM07fd = 0xa3ce;
    INIT_Something();
  }
  RAM07fd = 0xa3d2;
  Setup();
  PostMainLoopFailFunction1(extraout_X);
  return;
}

void PostMainLoopFailFunction2(undefined2 param_1)

{
  undefined2 uVar1;

  uVar1 = _StackDataManipulation();
  RAM0008 = uVar1;
  do {
    uVar1 = RAM0008;
    LastAvailableDataReturn();
  } while (true);
}

undefined __farcall ADC_CheckEndOfConversion(byte param_1, ADC1 param_2)

{
  undefined uVar1;
  short in_X;

  DAT_0000 = 0;
  if ((param_1 & *(byte *)(in_X + 3)) == 0) {
    DAT_0000 = 0;
  } else {
    DAT_0000 = 1;
  }
  uVar1 = DAT_0000;
  return uVar1;
}

undefined __farcall FLASH_CheckFlashStatusRegister(byte param_1)

{
  undefined uVar1;
  byte bVar2;

  DAT_0000 = 0;
  bVar2 = Peripherals::FLASH.IAPSR;
  if ((param_1 & bVar2) == 0) {
    DAT_0000 = 0;
  } else {
    DAT_0000 = 1;
  }
  uVar1 = DAT_0000;
  return uVar1;
}

void __farcall TIM4_Set_TIM4PrescalerValue_SetTIM4UpdateGeneration(byte param_1)

{
  char cVar1;
  byte bVar2;

  // Set (TIM4_PSCR) timer Prescaler value
  Peripherals::TIM4.PSCR = param_1;
  cVar1 = DAT_0000;
  if (cVar1 == '\x01') {
    bVar2 = Peripherals::TIM4.EGR;
    Peripherals::TIM4.EGR = bVar2 | 1;
    return;
  }
  bVar2 = Peripherals::TIM4.EGR;
  Peripherals::TIM4.EGR = bVar2 & 0xfe;
  return;
}

byte __farcall TIM4_Update_interrupt_set(byte param_1)

{
  undefined uVar1;
  char cVar2;
  byte bVar3;

  uVar1 = DAT_0000;
  cVar2 = DAT_0000;
  if (cVar2 != '\0') {
    bVar3 = Peripherals::TIM4.IER;
    Peripherals::TIM4.IER = param_1 | bVar3;
    return param_1 | bVar3;
  }
  bVar3 = Peripherals::TIM4.IER;
  Peripherals::TIM4.IER = ~param_1 & bVar3;
  return ~param_1 & bVar3;
}

void __farcall FLASH_Set_WAITM(char param_1)

{
  byte bVar1;

  if (param_1 != '\x01') {
    bVar1 = Peripherals::FLASH.CR1;
    Peripherals::FLASH.CR1 = bVar1 | 4;
    return;
  }
  bVar1 = Peripherals::FLASH.CR1;
  Peripherals::FLASH.CR1 = bVar1 & 0xfb;
  return;
}

void __farcall TIM4_SetOne_pulseMode(char param_1)

{
  byte bVar1;

  if (param_1 == '\x01') {
    bVar1 = Peripherals::TIM4.CR1;
    Peripherals::TIM4.CR1 = bVar1 | 8;
    return;
  }
  bVar1 = Peripherals::TIM4.CR1;
  Peripherals::TIM4.CR1 = bVar1 & 0xf7;
  return;
}

undefined __farcall DataCopy_PointerToDAT_0005(undefined *param_1)

{
  undefined in_A;

  DAT_0004._1_1_ = *param_1;
  DAT_0006._0_1_ = param_1[1];
  DAT_0006._1_1_ = param_1[2];
  return in_A;
}

void __farcall ADC_On_OFF(char param_1, byte *param_2)

{
  if (param_1 != '\0') {
    *param_2 = *param_2 | 1;
    return;
  }
  *param_2 = *param_2 & 0xfe;
  return;
}

void __farcall CLK_SetHigh_speedInternalOscillatorON(char param_1)

{
  byte bVar1;

  if (param_1 != '\0') {
    bVar1 = Peripherals::CLK.ICKCR;
    Peripherals::CLK.ICKCR = bVar1 | 1;
    return;
  }
  bVar1 = Peripherals::CLK.ICKCR;
  Peripherals::CLK.ICKCR = bVar1 & 0xfe;
  return;
}

void __farcall CLK_SetSwitchStart_stop(char param_1)

{
  byte bVar1;

  if (param_1 != '\0') {
    bVar1 = Peripherals::CLK.SWCR;
    Peripherals::CLK.SWCR = bVar1 | 2;
    return;
  }
  bVar1 = Peripherals::CLK.SWCR;
  Peripherals::CLK.SWCR = bVar1 & 0xfd;
  return;
}

void __farcall TIM4_SetAuto_reloadPreloadEnable(char param_1)

{
  byte bVar1;

  if (param_1 != '\0') {
    bVar1 = Peripherals::TIM4.CR1;
    Peripherals::TIM4.CR1 = bVar1 | 0x80;
    return;
  }
  bVar1 = Peripherals::TIM4.CR1;
  Peripherals::TIM4.CR1 = bVar1 & 0x7f;
  return;
}

void __farcall TIM4_SetCounterEnable(char param_1)

{
  byte bVar1;

  if (param_1 != '\0') {
    bVar1 = Peripherals::TIM4.CR1;
    Peripherals::TIM4.CR1 = bVar1 | 1;
    return;
  }
  bVar1 = Peripherals::TIM4.CR1;
  Peripherals::TIM4.CR1 = bVar1 & 0xfe;
  return;
}

void FLASH_Init(void)

{
  FLASH_SetFixedByteProgrammingTime(0);
  FLASH_Set_WAITM('\x01');
  return;
}

byte __farcall FLASH_SetFixedByteProgrammingTime(byte param_1)

{
  byte bVar1;

  bVar1 = Peripherals::FLASH.CR1;
  Peripherals::FLASH.CR1 = bVar1 & 0xfe;
  bVar1 = Peripherals::FLASH.CR1;
  Peripherals::FLASH.CR1 = param_1 | bVar1;
  return param_1 | bVar1;
}

void __farcall DigitalWrite(byte Pin, byte *GPIO_PORT)

{
  undefined uVar1;
  char cVar2;

  uVar1 = DAT_0000;
  cVar2 = DAT_0000;
  if (cVar2 != '\0') {
    *GPIO_PORT = Pin | *GPIO_PORT;
    return;
  }
  *GPIO_PORT = ~Pin & *GPIO_PORT;
  return;
}

bool __farcall DigitalRead(byte Value, byte *GPIO_PORT)

{
  if ((Value & GPIO_PORT[1]) != 0) {
    return true;
  }
  return false;
}

void EEPROM_Read(undefined2 param_1)

{
  RAM0002 = param_1;
  RAM0000 = 0;
  RAM_LoadRAM0002InAcummulator();
  return;
}

void EEPROM_SetWeldingType(void)

{
  EEPROM_Write(0x1000);
  return;
}

byte __farcall TIM4_ResetslaveModeSelection(void)

{
  byte bVar1;

  bVar1 = Peripherals::TIM4.SMCR;
  Peripherals::TIM4.SMCR = bVar1 & 0xf8;
  return bVar1 & 0xf8;
}

byte __farcall FLASH_SetStatusRegister(byte param_1)

{
  byte bVar1;

  bVar1 = Peripherals::FLASH.IAPSR;
  Peripherals::FLASH.IAPSR = param_1 & bVar1;
  return param_1 & bVar1;
}

void __farcall PostMainLoopFailFunction2(undefined2 param_1)

{
  byte *extraout_X;

  PostMainLoopFailFunction2(param_1);
  *extraout_X = *extraout_X | 2;
  return;
}

void __farcall ADC_ConversionStart(byte *param_1)

{
  *param_1 = *param_1 | 2;
  return;
}

byte __farcall TIM4_SetInterruptFlag(byte param_1)

{
  Peripherals::TIM4.SR1 = ~param_1;
  return ~param_1;
}

void __farcall CLK_SetSystemClockSelectionBits(byte param_1)

{
  Peripherals::CLK.SWR = param_1;
  return;
}

void __farcall CLK_SetSystemClockPrescaler(byte param_1)

{
  Peripherals::CLK.CKDIVR = param_1;
  return;
}

void __farcall RAM0002Set(undefined param_1)

{
  undefined *puVar1;

  puVar1 = (undefined *)RAM0002;
  *puVar1 = param_1;
  return;
}

undefined __farcall RAM_LoadRAM0002InAcummulator(void)

{
  undefined *puVar1;

  puVar1 = (undefined *)RAM0002;
  return *puVar1;
}

void __farcall TIM4_SetCounterValue(byte param_1)

{
  Peripherals::TIM4.CNTR = param_1;
  return;
}

void __farcall TIM4_SetAuto_reloadValue(byte param_1)

{
  Peripherals::TIM4.ARR = param_1;
  return;
}

void Nop_Blocking_Loop(void)

{
  do {
    __Nop();
  } while (true);
}

void PostMainLoopFailFunction1(undefined2 param_1)

{
  byte *extraout_X;

  PostMainLoopFailFunction2(param_1);
  *extraout_X = *extraout_X | 2;
  return;
}

undefined2 __farcall Clear_X_X__(void)

{
  return 1;
}

void Nop_Blocking_Loop(void)

{
  do {
    __Nop();
  } while (true);
}

void __farcall LastAvailableDataReturn(void)

{
  return;
}
