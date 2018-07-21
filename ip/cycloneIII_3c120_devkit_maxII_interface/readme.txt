Cyclone III 3c120 dev kit Max II interface
==========================================

- The Cyclone III 3c120 dev kit Max II interface component is used to access the Max II device on 3c120
  developoment board, for reconfiguration purpose. This component is sharing the same tristate bus with 
  external flash component.

- The Nios II Cyclone III 3c120 Application Selector system is configured for passive serial configuration 
  on boot-up. This is done through the MAX II PFL (Parallel Flash Loader) featured in MAX II device. 
  
- The MAX II PFL feature provides an efficient method to program CFI flash memory devices through the JTAG 
  interface and the logic to control configuration from the flash memory device to the FPGA. 
  
- The MAX II device is accessed through shared address and data bus with the cfi flash. To start the 
  configuration, the configuration file is loaded into CFI flash; Then PSR (page select register) in the 
  MAX II device is set with the location of the file and set the MAX II device to perform system reset. 
  The PFL will then configure the FPGA with configuration data stored in CFI flash.
  
- For more information on the Parallel Flash Loader feature of the Max II refer to 
  Application Note: http://www.altera.com/literature/an/an386.pdf

