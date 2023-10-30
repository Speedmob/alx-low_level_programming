#include "main.h"
#include <elf.h>
void _c(int);
/**
 * _r - reads a file
 * @f: file to read
 * @buffer: buffer
 * @len: num of bytes to read
*/
void _r(int f, char *buffer, int len)
{
	if (read(f, buffer, len) == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file\n", 28);
		_c(f);
		exit(98);
	}
}
/**
 * _c - closes a file
 * @f: file to close
*/
void _c(int f)
{
	if (close(f) == -1)
	{
		write(STDERR_FILENO, "Error: Can't close fd\n", 22);
		exit(98);
	}
}
/**
 * magic_pnt - prints magic
 * @buffer: buffer used to print
*/
void magic_pnt(char *buffer)
{
	int i;
	char *a = ELFMAG;

	for (i = 0; buffer[i] && a[i] && i < 4; i++)
	{
		if (buffer[i] != a[i])
		{
			write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
			exit(98);
		}
	}
	if (i < 4)
	{
		if (a[i] || buffer[i])
		{
			write(STDERR_FILENO, "Error: Not an ELF file\n", 23);
			exit(98);
		}
	}
	printf("ELF Header:\n  Magic:   ");
	for (i = 0; i < 16; i++)
		printf("%02x%c", buffer[i], i < 15 ? ' ' : '\n');
}
/**
 * class_pnt - prints ELF class
 * @buffer: buffer to print from
 *
 * Return: 64 or 32
*/
int class_pnt(char *buffer)
{
	printf("  %-34s ", "Class:");
	if (buffer[EI_CLASS] == ELFCLASS64)
	{
		printf("ELF64\n");
		return (64);
	}
	if (buffer[EI_CLASS] == ELFCLASS32)
	{
		printf("ELF32\n");
		return (32);
	}
	printf("<unknown: %x>\n", buffer[EI_CLASS]);
	return (32);
}
/**
 * data_pnt - prints data
 * @buffer: buffer to print from
 *
 * Return: 1 (big endian), 0 (little endian or invalid)
*/
int data_pnt(char *buffer)
{
	printf("  %-34s ", "Data:");
	if (buffer[EI_DATA] == ELFDATA2MSB)
	{
		printf("2's complement, big endian\n");
		return (1);
	}
	if (buffer[EI_DATA] == ELFDATA2LSB)
	{
		printf("2's complement, little endian\n");
		return (0);
	}
	printf("Invalid data encoding\n");
	return (0);
}
/**
 * version_pnt - prints version
 * @buffer: buffer to print from
 */
void version_pnt(char *buffer)
{
	printf("  %-34s %u", "Version:", buffer[EI_VERSION]);
	if (buffer[EI_VERSION] == EV_CURRENT)
	{
		printf(" (current)\n");
		return;
	}
		printf("\n");
}
/**
 * os_abi_pnt - prints os
 * @buffer: buffer to print from
 */
void os_abi_pnt(char *buffer)
{
	char *table[19] = {
		"UNIX - System V",
		"UNIX - HP-UX",
		"UNIX - NetBSD",
		"UNIX - GNU",
		"<unknown: 4>",
		"<unknown: 5>",
		"UNIX - Solaris",
		"UNIX - AIX",
		"UNIX - IRIX",
		"UNIX - FreeBSD",
		"UNIX - Tru64",
		"Novell - Modesto",
		"UNIX - OpenBSD",
		"VMS - OpenVMS",
		"HP - Non-Stop Kernel",
		"AROS",
		"FenixOS",
		"Nuxi CloudABI",
		"Stratus Technologies OpenVOS"
	};

	printf("  %-34s ", "OS/ABI:");
	if (buffer[EI_OSABI] < 19)
	{
		printf("%s\n", table[(unsigned int) buffer[EI_OSABI]]);
		return;
	}
	printf("<unknown: %x>\n", buffer[EI_OSABI]);
}
/**
 * abiver_pnt - prints abiver
 * @buffer: buffer to print from
*/
void abiver_pnt(char *buffer)
{
	printf("  %-34s %u\n", "ABI Version:", buffer[EI_ABIVERSION]);
}
/**
 * type_pnt - prints type
 * @buffer: buffer to print from
 * @bend: checks if big endian or not
*/
void type_pnt(char *buffer, int bend)
{
	char *table[5] = {
		"NONE (No file type)",
		"REL (Relocatable file)",
		"EXEC (Executable file)",
		"DYN (Shared object file)",
		"CORE (Core file)"
	};
	unsigned int t;

	printf("  %-34s ", "Type:");
	if (bend)
		t = 0x100 * buffer[16] + buffer[17];
	else
		t = 0x100 * buffer[17] + buffer[16];
	if (t < 5)
		printf("%s\n", table[t]);
	else if (t >= ET_LOOS && t <= ET_HIOS)
		printf("OS Specific: (%4x)\n", t);
	else if (t >= ET_LOPROC && t <= ET_HIPROC)
		printf("Processor Specific: (%4x)\n", t);
	else
		printf("<unknown: %x>\n", t);
}
/**
 * entry_pnt - prints entry
 * @buffer: buffer to print from
 * @bits: 64 or 32
 * @bend: big endian or not
*/
void entry_pnt(char *buffer, int bits, int bend)
{
	int size = bits / 8;

	printf("  %-34s 0x", "Entry point address:");
	if (bend)
	{
		for (; size && !buffer; buffer++, size--)
			;
		printf("%x", *buffer & 0xff);
		while (--size > 0)
			printf("%02x", *(++buffer) & 0xff);
		printf("\n");
		return;
	}
	buffer += size;
	for (; size && !*(--buffer); size--)
		;
	printf("%x", *buffer & 0xff);
	while (--size > 0)
		printf("%02x", *(--buffer) & 0xff);
	printf("\n");
}
/**
 * main - Entry point
 * @argc: num of args
 * @argv: args
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	char buffer[18];
	int bits, bend, f;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}
	f = open(argv[1], O_RDONLY);
	if (f == -1)
	{
		write(STDERR_FILENO, "Error: Can't read from file\n", 28);
		exit(98);
	}
	_r(f, buffer, 18);
	magic_pnt(buffer);
	bits = class_pnt(buffer);
	bend = data_pnt(buffer);
	version_pnt(buffer);
	os_abi_pnt(buffer);
	abiver_pnt(buffer);
	type_pnt(buffer, bend);
	lseek(f, 24, SEEK_SET);
	_r(f, buffer, bits / 8);
	entry_pnt(buffer, bits, bend);
	_c(f);
	return (0);
}
