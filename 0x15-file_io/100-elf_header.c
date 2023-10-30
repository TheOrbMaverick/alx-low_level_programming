#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <elf.h>

void print_elf_header_info(const char *filename) {
    int fd;
    Elf64_Ehdr elf_header;
    int i;
    
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", filename);
        exit(98);
    }

    if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        dprintf(STDERR_FILENO, "Error: Cannot read ELF header from file %s\n", filename);
        close(fd);
        exit(98);
    }

    if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0) {
        dprintf(STDERR_FILENO, "Error: Not an ELF file: %s\n", filename);
        close(fd);
        exit(98);
    }

    printf("Magic:\t");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", elf_header.e_ident[i]);
    }
    printf("\n");

    printf("Class:\t%d\n", elf_header.e_ident[EI_CLASS]);
    printf("Data:\t%d\n", elf_header.e_ident[EI_DATA]);
    printf("Version:\t%d\n", elf_header.e_ident[EI_VERSION]);
    printf("OS/ABI:\t%d\n", elf_header.e_ident[EI_OSABI]);
    printf("ABI Version:\t%d\n", elf_header.e_ident[EI_ABIVERSION]);
    printf("Type:\t%d\n", elf_header.e_type);
    printf("Entry point address: 0x%lx\n", (unsigned long)elf_header.e_entry);

    close(fd);
}
