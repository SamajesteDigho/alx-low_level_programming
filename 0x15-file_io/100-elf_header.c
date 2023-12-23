#include "main.h"
/**
 * check_elf_file - Check is an elf file
 * @code: Magic number array
 * Description: This function collects the magic number array and return 0=false and 1=true
 * Return: Always return 0 or 1
*/
int check_elf_file(unsigned char* magic)
{
if (magic[0] == 0x7F && magic[1] == 'E' && magic[2] == 'L' && magic[3] == 'F')
{
return (1);
}
return (0);
}

/**
 * get_osabi - Get the OSABI Real Name
 * @code: OSABI Code
 * Description: This function collects a code return the corresponding OSABI
 * Return: The OSABI name 
*/
char* get_elf_osabi(unsigned char code)
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
 * get_elf_type - Get the Type Name
 * @code: OSABI Code
 * Description: This function collects a code return the corresponding Type
 * Return: The Type name 
*/
char* get_elf_type(Elf64_Half typeCode)
{
switch (typeCode)
{
case 0: return ("NONE");
case 1: return ("REL");
case 2: return ("EXEC (Eecutable File)");
case 3: return ("DYN (Shared object file)");
case 4: return ("CORE");
default: return ("Unknown");
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
Elf64_Ehdr header;
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
read(elf, &header, sizeof(Elf64_Ehdr));
if (check_elf_file((&header)->e_ident) == 0)
{
fprintf(stderr, "The parsed file is not an ELF file.\n");
exit(98);
}
printf("ELF Header:\n");
printf("  Magic:   ");
for (i = 0; i < EI_NIDENT; ++i)
{
printf("%02x ", (&header)->e_ident[i]);
}
printf("\n");
printf("  Class:                             %s\n", (&header)->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
printf("  Data:                              %s\n", (&header)->e_ident[EI_DATA] ? "2's complement, little endian" : "2's complement, big endian");
printf("  Version:                           %d", (&header)->e_ident[EI_VERSION]);
printf(" (current)\n");
printf("  OS/ABI:                            %s\n", get_elf_osabi((&header)->e_ident[EI_OSABI]));
printf("  ABI Version:                       %d\n", (&header)->e_ident[EI_ABIVERSION]);
printf("  Type:                              %s\n", get_elf_type((&header)->e_type));
printf("  Entry point address:               0x%x\n", (unsigned int) (&header)->e_entry);
close(elf);
return(0);
}