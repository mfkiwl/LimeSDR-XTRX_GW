//--------------------------------------------------------------------------------
// Auto-generated by LiteX (c8343879) on 2023-01-12 18:00:51
//--------------------------------------------------------------------------------
#include <generated/soc.h>
#ifndef __GENERATED_CSR_H
#define __GENERATED_CSR_H
#include <stdint.h>
#include <system.h>
#ifndef CSR_ACCESSORS_DEFINED
#include <hw/common.h>
#endif /* ! CSR_ACCESSORS_DEFINED */
#ifndef CSR_BASE
#define CSR_BASE 0x0L
#endif

/* ctrl */
#define CSR_CTRL_BASE (CSR_BASE + 0x0L)
#define CSR_CTRL_RESET_ADDR (CSR_BASE + 0x0L)
#define CSR_CTRL_RESET_SIZE 1
static inline uint32_t ctrl_reset_read(void) {
	return csr_read_simple((CSR_BASE + 0x0L));
}
static inline void ctrl_reset_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x0L));
}
#define CSR_CTRL_RESET_SOC_RST_OFFSET 0
#define CSR_CTRL_RESET_SOC_RST_SIZE 1
static inline uint32_t ctrl_reset_soc_rst_extract(uint32_t oldword) {
	uint32_t mask = 0x1;
	return ( (oldword >> 0) & mask );
}
static inline uint32_t ctrl_reset_soc_rst_read(void) {
	uint32_t word = ctrl_reset_read();
	return ctrl_reset_soc_rst_extract(word);
}
static inline uint32_t ctrl_reset_soc_rst_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = 0x1;
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void ctrl_reset_soc_rst_write(uint32_t plain_value) {
	uint32_t oldword = ctrl_reset_read();
	uint32_t newword = ctrl_reset_soc_rst_replace(oldword, plain_value);
	ctrl_reset_write(newword);
}
#define CSR_CTRL_RESET_CPU_RST_OFFSET 1
#define CSR_CTRL_RESET_CPU_RST_SIZE 1
static inline uint32_t ctrl_reset_cpu_rst_extract(uint32_t oldword) {
	uint32_t mask = 0x1;
	return ( (oldword >> 1) & mask );
}
static inline uint32_t ctrl_reset_cpu_rst_read(void) {
	uint32_t word = ctrl_reset_read();
	return ctrl_reset_cpu_rst_extract(word);
}
static inline uint32_t ctrl_reset_cpu_rst_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = 0x1;
	return (oldword & (~(mask << 1))) | (mask & plain_value)<< 1 ;
}
static inline void ctrl_reset_cpu_rst_write(uint32_t plain_value) {
	uint32_t oldword = ctrl_reset_read();
	uint32_t newword = ctrl_reset_cpu_rst_replace(oldword, plain_value);
	ctrl_reset_write(newword);
}
#define CSR_CTRL_SCRATCH_ADDR (CSR_BASE + 0x4L)
#define CSR_CTRL_SCRATCH_SIZE 1
static inline uint32_t ctrl_scratch_read(void) {
	return csr_read_simple((CSR_BASE + 0x4L));
}
static inline void ctrl_scratch_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x4L));
}
#define CSR_CTRL_BUS_ERRORS_ADDR (CSR_BASE + 0x8L)
#define CSR_CTRL_BUS_ERRORS_SIZE 1
static inline uint32_t ctrl_bus_errors_read(void) {
	return csr_read_simple((CSR_BASE + 0x8L));
}

/* pcie_phy */
#define CSR_PCIE_PHY_BASE (CSR_BASE + 0x1000L)
#define CSR_PCIE_PHY_LINK_STATUS_ADDR (CSR_BASE + 0x1000L)
#define CSR_PCIE_PHY_LINK_STATUS_SIZE 1
static inline uint32_t pcie_phy_link_status_read(void) {
	return csr_read_simple((CSR_BASE + 0x1000L));
}
#define CSR_PCIE_PHY_LINK_STATUS_STATUS_OFFSET 0
#define CSR_PCIE_PHY_LINK_STATUS_STATUS_SIZE 1
static inline uint32_t pcie_phy_link_status_status_extract(uint32_t oldword) {
	uint32_t mask = 0x1;
	return ( (oldword >> 0) & mask );
}
static inline uint32_t pcie_phy_link_status_status_read(void) {
	uint32_t word = pcie_phy_link_status_read();
	return pcie_phy_link_status_status_extract(word);
}
#define CSR_PCIE_PHY_LINK_STATUS_RATE_OFFSET 1
#define CSR_PCIE_PHY_LINK_STATUS_RATE_SIZE 1
static inline uint32_t pcie_phy_link_status_rate_extract(uint32_t oldword) {
	uint32_t mask = 0x1;
	return ( (oldword >> 1) & mask );
}
static inline uint32_t pcie_phy_link_status_rate_read(void) {
	uint32_t word = pcie_phy_link_status_read();
	return pcie_phy_link_status_rate_extract(word);
}
#define CSR_PCIE_PHY_LINK_STATUS_WIDTH_OFFSET 2
#define CSR_PCIE_PHY_LINK_STATUS_WIDTH_SIZE 2
static inline uint32_t pcie_phy_link_status_width_extract(uint32_t oldword) {
	uint32_t mask = 0x3;
	return ( (oldword >> 2) & mask );
}
static inline uint32_t pcie_phy_link_status_width_read(void) {
	uint32_t word = pcie_phy_link_status_read();
	return pcie_phy_link_status_width_extract(word);
}
#define CSR_PCIE_PHY_LINK_STATUS_LTSSM_OFFSET 4
#define CSR_PCIE_PHY_LINK_STATUS_LTSSM_SIZE 6
static inline uint32_t pcie_phy_link_status_ltssm_extract(uint32_t oldword) {
	uint32_t mask = 0x3f;
	return ( (oldword >> 4) & mask );
}
static inline uint32_t pcie_phy_link_status_ltssm_read(void) {
	uint32_t word = pcie_phy_link_status_read();
	return pcie_phy_link_status_ltssm_extract(word);
}
#define CSR_PCIE_PHY_MSI_ENABLE_ADDR (CSR_BASE + 0x1004L)
#define CSR_PCIE_PHY_MSI_ENABLE_SIZE 1
static inline uint32_t pcie_phy_msi_enable_read(void) {
	return csr_read_simple((CSR_BASE + 0x1004L));
}
#define CSR_PCIE_PHY_MSIX_ENABLE_ADDR (CSR_BASE + 0x1008L)
#define CSR_PCIE_PHY_MSIX_ENABLE_SIZE 1
static inline uint32_t pcie_phy_msix_enable_read(void) {
	return csr_read_simple((CSR_BASE + 0x1008L));
}
#define CSR_PCIE_PHY_BUS_MASTER_ENABLE_ADDR (CSR_BASE + 0x100cL)
#define CSR_PCIE_PHY_BUS_MASTER_ENABLE_SIZE 1
static inline uint32_t pcie_phy_bus_master_enable_read(void) {
	return csr_read_simple((CSR_BASE + 0x100cL));
}
#define CSR_PCIE_PHY_MAX_REQUEST_SIZE_ADDR (CSR_BASE + 0x1010L)
#define CSR_PCIE_PHY_MAX_REQUEST_SIZE_SIZE 1
static inline uint32_t pcie_phy_max_request_size_read(void) {
	return csr_read_simple((CSR_BASE + 0x1010L));
}
#define CSR_PCIE_PHY_MAX_PAYLOAD_SIZE_ADDR (CSR_BASE + 0x1014L)
#define CSR_PCIE_PHY_MAX_PAYLOAD_SIZE_SIZE 1
static inline uint32_t pcie_phy_max_payload_size_read(void) {
	return csr_read_simple((CSR_BASE + 0x1014L));
}

/* pcie_msi */
#define CSR_PCIE_MSI_BASE (CSR_BASE + 0x1800L)
#define CSR_PCIE_MSI_ENABLE_ADDR (CSR_BASE + 0x1800L)
#define CSR_PCIE_MSI_ENABLE_SIZE 1
static inline uint32_t pcie_msi_enable_read(void) {
	return csr_read_simple((CSR_BASE + 0x1800L));
}
static inline void pcie_msi_enable_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x1800L));
}
#define CSR_PCIE_MSI_CLEAR_ADDR (CSR_BASE + 0x1804L)
#define CSR_PCIE_MSI_CLEAR_SIZE 1
static inline uint32_t pcie_msi_clear_read(void) {
	return csr_read_simple((CSR_BASE + 0x1804L));
}
static inline void pcie_msi_clear_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x1804L));
}
#define CSR_PCIE_MSI_VECTOR_ADDR (CSR_BASE + 0x1808L)
#define CSR_PCIE_MSI_VECTOR_SIZE 1
static inline uint32_t pcie_msi_vector_read(void) {
	return csr_read_simple((CSR_BASE + 0x1808L));
}

/* pcie_dma0 */
#define CSR_PCIE_DMA0_BASE (CSR_BASE + 0x2800L)
#define CSR_PCIE_DMA0_WRITER_ENABLE_ADDR (CSR_BASE + 0x2800L)
#define CSR_PCIE_DMA0_WRITER_ENABLE_SIZE 1
static inline uint32_t pcie_dma0_writer_enable_read(void) {
	return csr_read_simple((CSR_BASE + 0x2800L));
}
static inline void pcie_dma0_writer_enable_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2800L));
}
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_ADDR (CSR_BASE + 0x2804L)
#define CSR_PCIE_DMA0_WRITER_TABLE_VALUE_SIZE 2
static inline uint64_t pcie_dma0_writer_table_value_read(void) {
	uint64_t r = csr_read_simple((CSR_BASE + 0x2804L));
	r <<= 32;
	r |= csr_read_simple((CSR_BASE + 0x2808L));
	return r;
}
static inline void pcie_dma0_writer_table_value_write(uint64_t v) {
	csr_write_simple(v >> 32, (CSR_BASE + 0x2804L));
	csr_write_simple(v, (CSR_BASE + 0x2808L));
}
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
static inline uint32_t pcie_dma0_writer_table_we_read(void) {
	return csr_read_simple((CSR_BASE + 0x280cL));
}
static inline void pcie_dma0_writer_table_we_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x280cL));
}
#define CSR_PCIE_DMA0_WRITER_TABLE_WE_ADDRESS_MSB_OFFSET 0
#define CSR_PCIE_DMA0_WRITER_TABLE_WE_ADDRESS_MSB_SIZE 32
static inline uint32_t pcie_dma0_writer_table_we_address_msb_extract(uint32_t oldword) {
	uint32_t mask = 0xffffffff;
	return ( (oldword >> 0) & mask );
}
static inline uint32_t pcie_dma0_writer_table_we_address_msb_read(void) {
	uint32_t word = pcie_dma0_writer_table_we_read();
	return pcie_dma0_writer_table_we_address_msb_extract(word);
}
static inline uint32_t pcie_dma0_writer_table_we_address_msb_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = 0xffffffff;
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void pcie_dma0_writer_table_we_address_msb_write(uint32_t plain_value) {
	uint32_t oldword = pcie_dma0_writer_table_we_read();
	uint32_t newword = pcie_dma0_writer_table_we_address_msb_replace(oldword, plain_value);
	pcie_dma0_writer_table_we_write(newword);
}
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_PROG_N_ADDR (CSR_BASE + 0x2810L)
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_PROG_N_SIZE 1
static inline uint32_t pcie_dma0_writer_table_loop_prog_n_read(void) {
	return csr_read_simple((CSR_BASE + 0x2810L));
}
static inline void pcie_dma0_writer_table_loop_prog_n_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2810L));
}
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_ADDR (CSR_BASE + 0x2814L)
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_SIZE 1
static inline uint32_t pcie_dma0_writer_table_loop_status_read(void) {
	return csr_read_simple((CSR_BASE + 0x2814L));
}
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_INDEX_OFFSET 0
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_INDEX_SIZE 16
static inline uint32_t pcie_dma0_writer_table_loop_status_index_extract(uint32_t oldword) {
	uint32_t mask = 0xffff;
	return ( (oldword >> 0) & mask );
}
static inline uint32_t pcie_dma0_writer_table_loop_status_index_read(void) {
	uint32_t word = pcie_dma0_writer_table_loop_status_read();
	return pcie_dma0_writer_table_loop_status_index_extract(word);
}
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_COUNT_OFFSET 16
#define CSR_PCIE_DMA0_WRITER_TABLE_LOOP_STATUS_COUNT_SIZE 16
static inline uint32_t pcie_dma0_writer_table_loop_status_count_extract(uint32_t oldword) {
	uint32_t mask = 0xffff;
	return ( (oldword >> 16) & mask );
}
static inline uint32_t pcie_dma0_writer_table_loop_status_count_read(void) {
	uint32_t word = pcie_dma0_writer_table_loop_status_read();
	return pcie_dma0_writer_table_loop_status_count_extract(word);
}
#define CSR_PCIE_DMA0_WRITER_TABLE_LEVEL_ADDR (CSR_BASE + 0x2818L)
#define CSR_PCIE_DMA0_WRITER_TABLE_LEVEL_SIZE 1
static inline uint32_t pcie_dma0_writer_table_level_read(void) {
	return csr_read_simple((CSR_BASE + 0x2818L));
}
#define CSR_PCIE_DMA0_WRITER_TABLE_RESET_ADDR (CSR_BASE + 0x281cL)
#define CSR_PCIE_DMA0_WRITER_TABLE_RESET_SIZE 1
static inline uint32_t pcie_dma0_writer_table_reset_read(void) {
	return csr_read_simple((CSR_BASE + 0x281cL));
}
static inline void pcie_dma0_writer_table_reset_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x281cL));
}
#define CSR_PCIE_DMA0_READER_ENABLE_ADDR (CSR_BASE + 0x2820L)
#define CSR_PCIE_DMA0_READER_ENABLE_SIZE 1
static inline uint32_t pcie_dma0_reader_enable_read(void) {
	return csr_read_simple((CSR_BASE + 0x2820L));
}
static inline void pcie_dma0_reader_enable_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2820L));
}
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_ADDR (CSR_BASE + 0x2824L)
#define CSR_PCIE_DMA0_READER_TABLE_VALUE_SIZE 2
static inline uint64_t pcie_dma0_reader_table_value_read(void) {
	uint64_t r = csr_read_simple((CSR_BASE + 0x2824L));
	r <<= 32;
	r |= csr_read_simple((CSR_BASE + 0x2828L));
	return r;
}
static inline void pcie_dma0_reader_table_value_write(uint64_t v) {
	csr_write_simple(v >> 32, (CSR_BASE + 0x2824L));
	csr_write_simple(v, (CSR_BASE + 0x2828L));
}
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
static inline uint32_t pcie_dma0_reader_table_we_read(void) {
	return csr_read_simple((CSR_BASE + 0x282cL));
}
static inline void pcie_dma0_reader_table_we_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x282cL));
}
#define CSR_PCIE_DMA0_READER_TABLE_WE_ADDRESS_MSB_OFFSET 0
#define CSR_PCIE_DMA0_READER_TABLE_WE_ADDRESS_MSB_SIZE 32
static inline uint32_t pcie_dma0_reader_table_we_address_msb_extract(uint32_t oldword) {
	uint32_t mask = 0xffffffff;
	return ( (oldword >> 0) & mask );
}
static inline uint32_t pcie_dma0_reader_table_we_address_msb_read(void) {
	uint32_t word = pcie_dma0_reader_table_we_read();
	return pcie_dma0_reader_table_we_address_msb_extract(word);
}
static inline uint32_t pcie_dma0_reader_table_we_address_msb_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = 0xffffffff;
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void pcie_dma0_reader_table_we_address_msb_write(uint32_t plain_value) {
	uint32_t oldword = pcie_dma0_reader_table_we_read();
	uint32_t newword = pcie_dma0_reader_table_we_address_msb_replace(oldword, plain_value);
	pcie_dma0_reader_table_we_write(newword);
}
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_PROG_N_ADDR (CSR_BASE + 0x2830L)
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_PROG_N_SIZE 1
static inline uint32_t pcie_dma0_reader_table_loop_prog_n_read(void) {
	return csr_read_simple((CSR_BASE + 0x2830L));
}
static inline void pcie_dma0_reader_table_loop_prog_n_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2830L));
}
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_ADDR (CSR_BASE + 0x2834L)
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_SIZE 1
static inline uint32_t pcie_dma0_reader_table_loop_status_read(void) {
	return csr_read_simple((CSR_BASE + 0x2834L));
}
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_INDEX_OFFSET 0
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_INDEX_SIZE 16
static inline uint32_t pcie_dma0_reader_table_loop_status_index_extract(uint32_t oldword) {
	uint32_t mask = 0xffff;
	return ( (oldword >> 0) & mask );
}
static inline uint32_t pcie_dma0_reader_table_loop_status_index_read(void) {
	uint32_t word = pcie_dma0_reader_table_loop_status_read();
	return pcie_dma0_reader_table_loop_status_index_extract(word);
}
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_COUNT_OFFSET 16
#define CSR_PCIE_DMA0_READER_TABLE_LOOP_STATUS_COUNT_SIZE 16
static inline uint32_t pcie_dma0_reader_table_loop_status_count_extract(uint32_t oldword) {
	uint32_t mask = 0xffff;
	return ( (oldword >> 16) & mask );
}
static inline uint32_t pcie_dma0_reader_table_loop_status_count_read(void) {
	uint32_t word = pcie_dma0_reader_table_loop_status_read();
	return pcie_dma0_reader_table_loop_status_count_extract(word);
}
#define CSR_PCIE_DMA0_READER_TABLE_LEVEL_ADDR (CSR_BASE + 0x2838L)
#define CSR_PCIE_DMA0_READER_TABLE_LEVEL_SIZE 1
static inline uint32_t pcie_dma0_reader_table_level_read(void) {
	return csr_read_simple((CSR_BASE + 0x2838L));
}
#define CSR_PCIE_DMA0_READER_TABLE_RESET_ADDR (CSR_BASE + 0x283cL)
#define CSR_PCIE_DMA0_READER_TABLE_RESET_SIZE 1
static inline uint32_t pcie_dma0_reader_table_reset_read(void) {
	return csr_read_simple((CSR_BASE + 0x283cL));
}
static inline void pcie_dma0_reader_table_reset_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x283cL));
}
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_ADDR (CSR_BASE + 0x2840L)
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_SIZE 1
static inline uint32_t pcie_dma0_buffering_reader_fifo_control_read(void) {
	return csr_read_simple((CSR_BASE + 0x2840L));
}
static inline void pcie_dma0_buffering_reader_fifo_control_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2840L));
}
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_DEPTH_OFFSET 0
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_DEPTH_SIZE 24
static inline uint32_t pcie_dma0_buffering_reader_fifo_control_depth_extract(uint32_t oldword) {
	uint32_t mask = 0xffffff;
	return ( (oldword >> 0) & mask );
}
static inline uint32_t pcie_dma0_buffering_reader_fifo_control_depth_read(void) {
	uint32_t word = pcie_dma0_buffering_reader_fifo_control_read();
	return pcie_dma0_buffering_reader_fifo_control_depth_extract(word);
}
static inline uint32_t pcie_dma0_buffering_reader_fifo_control_depth_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = 0xffffff;
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void pcie_dma0_buffering_reader_fifo_control_depth_write(uint32_t plain_value) {
	uint32_t oldword = pcie_dma0_buffering_reader_fifo_control_read();
	uint32_t newword = pcie_dma0_buffering_reader_fifo_control_depth_replace(oldword, plain_value);
	pcie_dma0_buffering_reader_fifo_control_write(newword);
}
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_SCRATCH_OFFSET 24
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_SCRATCH_SIZE 4
static inline uint32_t pcie_dma0_buffering_reader_fifo_control_scratch_extract(uint32_t oldword) {
	uint32_t mask = 0xf;
	return ( (oldword >> 24) & mask );
}
static inline uint32_t pcie_dma0_buffering_reader_fifo_control_scratch_read(void) {
	uint32_t word = pcie_dma0_buffering_reader_fifo_control_read();
	return pcie_dma0_buffering_reader_fifo_control_scratch_extract(word);
}
static inline uint32_t pcie_dma0_buffering_reader_fifo_control_scratch_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = 0xf;
	return (oldword & (~(mask << 24))) | (mask & plain_value)<< 24 ;
}
static inline void pcie_dma0_buffering_reader_fifo_control_scratch_write(uint32_t plain_value) {
	uint32_t oldword = pcie_dma0_buffering_reader_fifo_control_read();
	uint32_t newword = pcie_dma0_buffering_reader_fifo_control_scratch_replace(oldword, plain_value);
	pcie_dma0_buffering_reader_fifo_control_write(newword);
}
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_LEVEL_MODE_OFFSET 31
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_CONTROL_LEVEL_MODE_SIZE 1
static inline uint32_t pcie_dma0_buffering_reader_fifo_control_level_mode_extract(uint32_t oldword) {
	uint32_t mask = 0x1;
	return ( (oldword >> 31) & mask );
}
static inline uint32_t pcie_dma0_buffering_reader_fifo_control_level_mode_read(void) {
	uint32_t word = pcie_dma0_buffering_reader_fifo_control_read();
	return pcie_dma0_buffering_reader_fifo_control_level_mode_extract(word);
}
static inline uint32_t pcie_dma0_buffering_reader_fifo_control_level_mode_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = 0x1;
	return (oldword & (~(mask << 31))) | (mask & plain_value)<< 31 ;
}
static inline void pcie_dma0_buffering_reader_fifo_control_level_mode_write(uint32_t plain_value) {
	uint32_t oldword = pcie_dma0_buffering_reader_fifo_control_read();
	uint32_t newword = pcie_dma0_buffering_reader_fifo_control_level_mode_replace(oldword, plain_value);
	pcie_dma0_buffering_reader_fifo_control_write(newword);
}
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_STATUS_ADDR (CSR_BASE + 0x2844L)
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_STATUS_SIZE 1
static inline uint32_t pcie_dma0_buffering_reader_fifo_status_read(void) {
	return csr_read_simple((CSR_BASE + 0x2844L));
}
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_STATUS_LEVEL_OFFSET 0
#define CSR_PCIE_DMA0_BUFFERING_READER_FIFO_STATUS_LEVEL_SIZE 24
static inline uint32_t pcie_dma0_buffering_reader_fifo_status_level_extract(uint32_t oldword) {
	uint32_t mask = 0xffffff;
	return ( (oldword >> 0) & mask );
}
static inline uint32_t pcie_dma0_buffering_reader_fifo_status_level_read(void) {
	uint32_t word = pcie_dma0_buffering_reader_fifo_status_read();
	return pcie_dma0_buffering_reader_fifo_status_level_extract(word);
}
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_ADDR (CSR_BASE + 0x2848L)
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_SIZE 1
static inline uint32_t pcie_dma0_buffering_writer_fifo_control_read(void) {
	return csr_read_simple((CSR_BASE + 0x2848L));
}
static inline void pcie_dma0_buffering_writer_fifo_control_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0x2848L));
}
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_DEPTH_OFFSET 0
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_DEPTH_SIZE 24
static inline uint32_t pcie_dma0_buffering_writer_fifo_control_depth_extract(uint32_t oldword) {
	uint32_t mask = 0xffffff;
	return ( (oldword >> 0) & mask );
}
static inline uint32_t pcie_dma0_buffering_writer_fifo_control_depth_read(void) {
	uint32_t word = pcie_dma0_buffering_writer_fifo_control_read();
	return pcie_dma0_buffering_writer_fifo_control_depth_extract(word);
}
static inline uint32_t pcie_dma0_buffering_writer_fifo_control_depth_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = 0xffffff;
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void pcie_dma0_buffering_writer_fifo_control_depth_write(uint32_t plain_value) {
	uint32_t oldword = pcie_dma0_buffering_writer_fifo_control_read();
	uint32_t newword = pcie_dma0_buffering_writer_fifo_control_depth_replace(oldword, plain_value);
	pcie_dma0_buffering_writer_fifo_control_write(newword);
}
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_SCRATCH_OFFSET 24
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_SCRATCH_SIZE 4
static inline uint32_t pcie_dma0_buffering_writer_fifo_control_scratch_extract(uint32_t oldword) {
	uint32_t mask = 0xf;
	return ( (oldword >> 24) & mask );
}
static inline uint32_t pcie_dma0_buffering_writer_fifo_control_scratch_read(void) {
	uint32_t word = pcie_dma0_buffering_writer_fifo_control_read();
	return pcie_dma0_buffering_writer_fifo_control_scratch_extract(word);
}
static inline uint32_t pcie_dma0_buffering_writer_fifo_control_scratch_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = 0xf;
	return (oldword & (~(mask << 24))) | (mask & plain_value)<< 24 ;
}
static inline void pcie_dma0_buffering_writer_fifo_control_scratch_write(uint32_t plain_value) {
	uint32_t oldword = pcie_dma0_buffering_writer_fifo_control_read();
	uint32_t newword = pcie_dma0_buffering_writer_fifo_control_scratch_replace(oldword, plain_value);
	pcie_dma0_buffering_writer_fifo_control_write(newword);
}
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_LEVEL_MODE_OFFSET 31
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_CONTROL_LEVEL_MODE_SIZE 1
static inline uint32_t pcie_dma0_buffering_writer_fifo_control_level_mode_extract(uint32_t oldword) {
	uint32_t mask = 0x1;
	return ( (oldword >> 31) & mask );
}
static inline uint32_t pcie_dma0_buffering_writer_fifo_control_level_mode_read(void) {
	uint32_t word = pcie_dma0_buffering_writer_fifo_control_read();
	return pcie_dma0_buffering_writer_fifo_control_level_mode_extract(word);
}
static inline uint32_t pcie_dma0_buffering_writer_fifo_control_level_mode_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = 0x1;
	return (oldword & (~(mask << 31))) | (mask & plain_value)<< 31 ;
}
static inline void pcie_dma0_buffering_writer_fifo_control_level_mode_write(uint32_t plain_value) {
	uint32_t oldword = pcie_dma0_buffering_writer_fifo_control_read();
	uint32_t newword = pcie_dma0_buffering_writer_fifo_control_level_mode_replace(oldword, plain_value);
	pcie_dma0_buffering_writer_fifo_control_write(newword);
}
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_STATUS_ADDR (CSR_BASE + 0x284cL)
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_STATUS_SIZE 1
static inline uint32_t pcie_dma0_buffering_writer_fifo_status_read(void) {
	return csr_read_simple((CSR_BASE + 0x284cL));
}
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_STATUS_LEVEL_OFFSET 0
#define CSR_PCIE_DMA0_BUFFERING_WRITER_FIFO_STATUS_LEVEL_SIZE 24
static inline uint32_t pcie_dma0_buffering_writer_fifo_status_level_extract(uint32_t oldword) {
	uint32_t mask = 0xffffff;
	return ( (oldword >> 0) & mask );
}
static inline uint32_t pcie_dma0_buffering_writer_fifo_status_level_read(void) {
	uint32_t word = pcie_dma0_buffering_writer_fifo_status_read();
	return pcie_dma0_buffering_writer_fifo_status_level_extract(word);
}

/* identifier_mem */
#define CSR_IDENTIFIER_MEM_BASE (CSR_BASE + 0x3000L)

/* CNTRL */
#define CSR_CNTRL_BASE (CSR_BASE + 0xd000L)
#define CSR_CNTRL_CNTRL_ADDR (CSR_BASE + 0xd000L)
#define CSR_CNTRL_CNTRL_SIZE 16
#define CSR_CNTRL_ENABLE_ADDR (CSR_BASE + 0xd040L)
#define CSR_CNTRL_ENABLE_SIZE 1
static inline uint32_t CNTRL_enable_read(void) {
	return csr_read_simple((CSR_BASE + 0xd040L));
}
static inline void CNTRL_enable_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0xd040L));
}
#define CSR_CNTRL_TEST_ADDR (CSR_BASE + 0xd044L)
#define CSR_CNTRL_TEST_SIZE 1
static inline uint32_t CNTRL_test_read(void) {
	return csr_read_simple((CSR_BASE + 0xd044L));
}
static inline void CNTRL_test_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0xd044L));
}
#define CSR_CNTRL_NDMA_ADDR (CSR_BASE + 0xd048L)
#define CSR_CNTRL_NDMA_SIZE 1
static inline uint32_t CNTRL_ndma_read(void) {
	return csr_read_simple((CSR_BASE + 0xd048L));
}
#define CSR_CNTRL_ENABLE_BOTH_ADDR (CSR_BASE + 0xd04cL)
#define CSR_CNTRL_ENABLE_BOTH_SIZE 1
static inline uint32_t CNTRL_enable_both_read(void) {
	return csr_read_simple((CSR_BASE + 0xd04cL));
}
static inline void CNTRL_enable_both_write(uint32_t v) {
	csr_write_simple(v, (CSR_BASE + 0xd04cL));
}

#endif
