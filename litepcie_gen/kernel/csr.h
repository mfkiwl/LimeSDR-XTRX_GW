//--------------------------------------------------------------------------------
// Auto-generated by LiteX (c717e4c8) on 2022-11-14 14:03:17
//--------------------------------------------------------------------------------
#ifndef __GENERATED_CSR_H
#define __GENERATED_CSR_H
#ifndef CSR_BASE
#define CSR_BASE 0x0L
#endif

/* ctrl */
#define CSR_CTRL_BASE (CSR_BASE + 0x0L)
#define CSR_CTRL_RESET_ADDR (CSR_BASE + 0x0L)
#define CSR_CTRL_RESET_SIZE 1
#define CSR_CTRL_RESET_SOC_RST_OFFSET 0
#define CSR_CTRL_RESET_SOC_RST_SIZE 1
#define CSR_CTRL_RESET_CPU_RST_OFFSET 1
#define CSR_CTRL_RESET_CPU_RST_SIZE 1
#define CSR_CTRL_SCRATCH_ADDR (CSR_BASE + 0x4L)
#define CSR_CTRL_SCRATCH_SIZE 1
#define CSR_CTRL_BUS_ERRORS_ADDR (CSR_BASE + 0x8L)
#define CSR_CTRL_BUS_ERRORS_SIZE 1

/* pcie_phy */
#define CSR_PCIE_PHY_BASE (CSR_BASE + 0x1000L)
#define CSR_PCIE_PHY_LINK_STATUS_ADDR (CSR_BASE + 0x1000L)
#define CSR_PCIE_PHY_LINK_STATUS_SIZE 1
#define CSR_PCIE_PHY_LINK_STATUS_STATUS_OFFSET 0
#define CSR_PCIE_PHY_LINK_STATUS_STATUS_SIZE 1
#define CSR_PCIE_PHY_LINK_STATUS_RATE_OFFSET 1
#define CSR_PCIE_PHY_LINK_STATUS_RATE_SIZE 1
#define CSR_PCIE_PHY_LINK_STATUS_WIDTH_OFFSET 2
#define CSR_PCIE_PHY_LINK_STATUS_WIDTH_SIZE 2
#define CSR_PCIE_PHY_LINK_STATUS_LTSSM_OFFSET 4
#define CSR_PCIE_PHY_LINK_STATUS_LTSSM_SIZE 6
#define CSR_PCIE_PHY_MSI_ENABLE_ADDR (CSR_BASE + 0x1004L)
#define CSR_PCIE_PHY_MSI_ENABLE_SIZE 1
#define CSR_PCIE_PHY_MSIX_ENABLE_ADDR (CSR_BASE + 0x1008L)
#define CSR_PCIE_PHY_MSIX_ENABLE_SIZE 1
#define CSR_PCIE_PHY_BUS_MASTER_ENABLE_ADDR (CSR_BASE + 0x100cL)
#define CSR_PCIE_PHY_BUS_MASTER_ENABLE_SIZE 1
#define CSR_PCIE_PHY_MAX_REQUEST_SIZE_ADDR (CSR_BASE + 0x1010L)
#define CSR_PCIE_PHY_MAX_REQUEST_SIZE_SIZE 1
#define CSR_PCIE_PHY_MAX_PAYLOAD_SIZE_ADDR (CSR_BASE + 0x1014L)
#define CSR_PCIE_PHY_MAX_PAYLOAD_SIZE_SIZE 1

/* pcie_msi */
#define CSR_PCIE_MSI_BASE (CSR_BASE + 0x1800L)
#define CSR_PCIE_MSI_ENABLE_ADDR (CSR_BASE + 0x1800L)
#define CSR_PCIE_MSI_ENABLE_SIZE 1
#define CSR_PCIE_MSI_CLEAR_ADDR (CSR_BASE + 0x1804L)
#define CSR_PCIE_MSI_CLEAR_SIZE 1
#define CSR_PCIE_MSI_VECTOR_ADDR (CSR_BASE + 0x1808L)
#define CSR_PCIE_MSI_VECTOR_SIZE 1

/* pcie_dma0 */
#define CSR_PCIE_DMA0_BASE (CSR_BASE + 0x2800L)
#define CSR_PCIE_DMA0_WRITER_ENABLE_ADDR (CSR_BASE + 0x2800L)
#define CSR_PCIE_DMA0_WRITER_ENABLE_SIZE 1
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_ADDR (CSR_BASE + 0x2804L)
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_SIZE 2
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_ADDRESS_LSB_OFFSET 0
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_ADDRESS_LSB_SIZE 32
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_LENGTH_OFFSET 32
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_LENGTH_SIZE 24
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_IRQ_DISABLE_OFFSET 56
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_IRQ_DISABLE_SIZE 1
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_LAST_DISABLE_OFFSET 57
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_LAST_DISABLE_SIZE 1
#define CSR_PCIE_DMA0_WRITER_TABLE_WE_ADDR (CSR_BASE + 0x280cL)
#define CSR_PCIE_DMA0_WRITER_TABLE_WE_SIZE 1
#define CSR_PCIE_DMA0_WRITER_TABLE_WE_ADDRESS_MSB_OFFSET 0
#define CSR_PCIE_DMA0_WRITER_TABLE_WE_ADDRESS_MSB_SIZE 32
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_PROG_N_ADDR (CSR_BASE + 0x2810L)
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_PROG_N_SIZE 1
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_ADDR (CSR_BASE + 0x2814L)
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_SIZE 1
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_INDEX_OFFSET 0
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_INDEX_SIZE 16
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_COUNT_OFFSET 16
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_COUNT_SIZE 16
#define CSR_PCIE_DMA0_WRITER_TABLE_LEVEL_ADDR (CSR_BASE + 0x2818L)
#define CSR_PCIE_DMA0_WRITER_TABLE_LEVEL_SIZE 1
#define CSR_PCIE_DMA0_WRITER_TABLE_RESET_ADDR (CSR_BASE + 0x281cL)
#define CSR_PCIE_DMA0_WRITER_TABLE_RESET_SIZE 1
#define CSR_PCIE_DMA0_READER_ENABLE_ADDR (CSR_BASE + 0x2820L)
#define CSR_PCIE_DMA0_READER_ENABLE_SIZE 1
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_ADDR (CSR_BASE + 0x2824L)
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_SIZE 2
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_ADDRESS_LSB_OFFSET 0
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_ADDRESS_LSB_SIZE 32
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_LENGTH_OFFSET 32
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_LENGTH_SIZE 24
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_IRQ_DISABLE_OFFSET 56
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_IRQ_DISABLE_SIZE 1
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_LAST_DISABLE_OFFSET 57
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_LAST_DISABLE_SIZE 1
#define CSR_PCIE_DMA0_READER_TABLE_WE_ADDR (CSR_BASE + 0x282cL)
#define CSR_PCIE_DMA0_READER_TABLE_WE_SIZE 1
#define CSR_PCIE_DMA0_READER_TABLE_WE_ADDRESS_MSB_OFFSET 0
#define CSR_PCIE_DMA0_READER_TABLE_WE_ADDRESS_MSB_SIZE 32
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_PROG_N_ADDR (CSR_BASE + 0x2830L)
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_PROG_N_SIZE 1
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_ADDR (CSR_BASE + 0x2834L)
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_SIZE 1
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_INDEX_OFFSET 0
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_INDEX_SIZE 16
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_COUNT_OFFSET 16
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_COUNT_SIZE 16
#define CSR_PCIE_DMA0_READER_TABLE_LEVEL_ADDR (CSR_BASE + 0x2838L)
#define CSR_PCIE_DMA0_READER_TABLE_LEVEL_SIZE 1
#define CSR_PCIE_DMA0_READER_TABLE_RESET_ADDR (CSR_BASE + 0x283cL)
#define CSR_PCIE_DMA0_READER_TABLE_RESET_SIZE 1
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_ADDR (CSR_BASE + 0x2840L)
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_SIZE 1
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_DEPTH_OFFSET 0
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_DEPTH_SIZE 24
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_SCRATCH_OFFSET 24
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_SCRATCH_SIZE 4
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_LEVEL_MODE_OFFSET 31
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_LEVEL_MODE_SIZE 1
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_STATUS_ADDR (CSR_BASE + 0x2844L)
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_STATUS_SIZE 1
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_STATUS_LEVEL_OFFSET 0
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_STATUS_LEVEL_SIZE 24
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_ADDR (CSR_BASE + 0x2848L)
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_SIZE 1
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_DEPTH_OFFSET 0
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_DEPTH_SIZE 24
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_SCRATCH_OFFSET 24
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_SCRATCH_SIZE 4
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_LEVEL_MODE_OFFSET 31
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_LEVEL_MODE_SIZE 1
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_STATUS_ADDR (CSR_BASE + 0x284cL)
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_STATUS_SIZE 1
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_STATUS_LEVEL_OFFSET 0
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_STATUS_LEVEL_SIZE 24

/* identifier_mem */
#define CSR_IDENTIFIER_MEM_BASE (CSR_BASE + 0x3000L)

/* CNTRL */
#define CSR_CNTRL_BASE (CSR_BASE + 0xd000L)
#define CSR_CNTRL_CNTRL_ADDR (CSR_BASE + 0xd000L)
#define CSR_CNTRL_CNTRL_SIZE 1
#define CSR_CNTRL_ENABLE_ADDR (CSR_BASE + 0xd004L)
#define CSR_CNTRL_ENABLE_SIZE 1
#define CSR_CNTRL_TEST_ADDR (CSR_BASE + 0xd008L)
#define CSR_CNTRL_TEST_SIZE 1
#define CSR_CNTRL_NDMA_ADDR (CSR_BASE + 0xd00cL)
#define CSR_CNTRL_NDMA_SIZE 1
#define CSR_CNTRL_ENABLE_BOTH_ADDR (CSR_BASE + 0xd010L)
#define CSR_CNTRL_ENABLE_BOTH_SIZE 1

#endif
