#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <errno.h>
#include <elf.h>

size_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int check_elf(unsigned char *magic);
char *elf_osabi(unsigned char code);
char *elf_type(Elf64_Half type);
char *elf_class(unsigned char class);
char *elf_data(unsigned int type);

#endif /* MAIN_H */
