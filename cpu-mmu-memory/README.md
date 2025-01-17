This folder contains programs that I used to play around CPU registers, TLBs, MMU and other stuff when studying Computer Architecture and Virtualization.

## hugepages

- For a 4 level page table, at least 3 memory loads, so if 70ns is the latency, it will take at least 210ns latency to just convert the Virtual Address to the Physical Address.
- First look into TLB
	- If found, TLB Hit
	- Else TLB miss
- The TLB size is limited, so if a program is using large amounts of memory, the process's page table information would not fit in the TLB. So if the TLB can contain 2000 entries, then it will cover 2000 * 4 KiB = 8MiB of memory, which is very less for most programs.
- If we use _hugepages_ (of sizes 2MiB or 1GiB), then the TLB will cover 2000 * 2 MiB = 4 GiB of memory, that is much better.
- Another benefit of using hugepages is that it helps reduce the size of the page tables, since each page can cover 512 times the memory.
- However, _hugepages_ should only be an optimization and used only if the benchmarks for your program supports it.
- Allocating hugepages can be tricky since the OS needs to find 512 _contiguous_ pages of 4KiB and starting from a 2 MiB boundary.

