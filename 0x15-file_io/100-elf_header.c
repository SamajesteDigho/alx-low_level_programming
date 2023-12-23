#include "main.h"
/**
 * check_elf - Check is an elf file
 * @magic: Magic number array
 * Description: This function collects the magic array and return 0 or 1
 * Return: Always return 0 or 1
*/
int check_elf(unsigned char *magic)
{
if (magic[0] == 0x7F && magic[1] == 'E' && magic[2] == 'L' && magic[3] == 'F')
{
return (1);
}
return (0);
}

/**
 * elf_osabi - Get the OSABI Real Name
 * @code: OSABI Code
 * Description: This function collects a code return the corresponding OSABI
 * Return: The OSABI name
*/
char *elf_osabi(unsigned char code)
{
switch (code)
{
case ELFOSABI_SYSV: return ("UNIX - System V");
case ELFOSABI_HPUX: return ("UNIX - HP-UX");
case ELFOSABI_NETBSD: return ("UNIX - NetBSD");
case ELFOSABI_FREEBSD: return ("UNIX - FreeBSD");
case ELFOSABI_LINUX: return ("UNIX - Linux");
case ELFOSABI_SOLARIS: return ("UNIX - Solaris");
default: return ("<unknown: 53>");
}
}

/**
 * elf_type - Get the Type Name
 * @type: OSABI Code
 * Description: This function collects a code return the corresponding Type
 * Return: The Type name
*/
char *elf_type(Elf64_Half type)
{
switch (type)
{
case 0: return ("NONE");
case 1: return ("REL");
case 2: return ("EXEC (Executable file)");
case 3: return ("DYN (Shared object file)");
case 4: return ("CORE");
default: return ("Unknown");
}
}

/**
 * elf_class - Get the Type Name
 * @class: OSABI Code
 * Description: This function collects a code return the corresponding Type
 * Return: The Type name
*/
char *elf_class(unsigned char class)
{
switch (class)
{
case ELFCLASS32: return ("ELF32");
case ELFCLASS64: return ("ELF64");
default: return ("Unknown");
}
}

/**
 * elf_data - Get the Type Name
 * @data: OSABI Code
 * Description: This function collects a code return the corresponding Type
 * Return: The Type name
*/
char *elf_data(unsigned int data)
{
switch (data)
{
case ELFDATA2LSB: return ("2's complement, little endian");
case ELFDATA2MSB: return ("2's complement, big endian");
default: return ("2's complement, big endian");
}
}

/**
 * main - Entry point
 * @argc: Number of parameters
 * @argv: Vector containing parameter
 * Description: Main function
 * Return: Always returns (0)
 */
int main(int argc, char **argv)
{
int elf;
Elf64_Ehdr h;
unsigned char class;
unsigned int data;
unsigned char osabi;
int osabi_version;
int i;
if (argc != 2)
{
fprintf(stderr, "Usage: readelf <file_name>\n");
exit(98);
}
elf = open(argv[1], O_RDONLY);
if (elf == -1)
{
fprintf(stderr, "The file could not be found.\n");
close(elf);
exit(98);
}
read(elf, &h, sizeof(Elf64_Ehdr));
if (check_elf((&h)->e_ident) == 0)
{
fprintf(stderr, "The parsed file is not an ELF file.\n");
exit(98);
}
class = (&h)->e_ident[EI_CLASS];
data = (&h)->e_ident[EI_DATA];
osabi = (&h)->e_ident[EI_OSABI];
osabi_version = (&h)->e_ident[EI_ABIVERSION];
printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT - 1; ++i)
{
printf("%02x ", (&h)->e_ident[i]);
}
printf("%02x\n", (&h)->e_ident[i]);
printf("  Class:                             %s\n", elf_class(class));
printf("  Data:                              %s\n", elf_data(data));
printf("  Version:                           %d", (&h)->e_ident[EI_VERSION]);
printf("%s\n", (&h)->e_version == EV_CURRENT ? " (current)" : "");
printf("  OS/ABI:                            %s\n", elf_osabi(osabi));
printf("  ABI Version:                       %d\n", osabi_version);
printf("  Type:                              %s\n", elf_type((&h)->e_type));
printf("  Entry point address:               0x%x\n", (int) (&h)->e_entry);
close(elf);
return(0);
}
