#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <elf.h>
#include <unistd.h>
/**
 * print_elf_header - Print the ELF header information
 * @header: argument count
 */
void print_elf_header(Elf64_Ehdr *header)
{
int i;
printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x ", header->e_ident[i]);
printf("\n");
printf("  Class:                             ELF%d\n"
, header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
printf("  Data:                              %s\n"
, header->e_ident[EI_DATA] == ELFDATA2LSB ?
"2's complement, little endian" : "2's complement, big endian");
printf("  Version:                           %d (current)\n"
, header->e_ident[EI_VERSION]);
printf("  Entry point address:               0x%lx\n"
, (unsigned long)header->e_entry);
}
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, exit codes for errors
 */
int main(int argc, char *argv[])
{
int fd;
Elf64_Ehdr header;

if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
exit(98);
}
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(98);
}

if (read(fd, &header, sizeof(header)) != sizeof(header))
{
fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
close(fd);
exit(98);
}

print_elf_header(&header);

close(fd);

return (0);
}
