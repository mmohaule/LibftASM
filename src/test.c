#include "libfts.h"

void	print_bytes(char *str, int num_bytes) {
	for (int i = 0; i < num_bytes; ++i) {
		if (str[i] != '\0')
			printf("%c", str[i]);
		else
			printf("%c", '0');
	}
}

void	isalpha_test(char c)
{
	printf("isalpha >> %c\n", c);
    printf("%i\n", isalpha(c));

    printf("ft_isalpha >> %c\n", c);
    printf("%i\n", ft_isalpha(c));
}

void	isdigit_test(char c)
{
	printf("isdigit >> %c\n", c);
    printf("%i\n", isdigit(c));

    printf("ft_isdigit >> %c\n", c);
    printf("%i\n", ft_isdigit(c));
}

void isalnum_test(int c)
{
    printf("isalnum >> %c\n", c);
    printf("%i\n", isalnum(c));

    printf("ft_isalnum >> %c\n", c);
    printf("%i\n", ft_isalnum(c));
}

void	isascii_test(char c)
{
	printf("isascii >> %c\n", c);
    printf("%i\n", isascii(c));

    printf("ft_isascii >> %c\n", c);
    printf("%i\n", ft_isascii(c));
}

void	isprint_test(char c)
{
	printf("isprint >> %c\n", c);
    printf("%i\n", isprint(c));

    printf("ft_isprint >> %c\n", c);
    printf("%i\n", ft_isprint(c));
}

void	toupper_test(char c)
{
	printf("toupper >> %c\n", c);
    printf("%c\n", toupper(c));

    printf("ft_toupper >> %c\n", c);
    printf("%c\n", ft_toupper(c));
}

void	tolower_test(char c)
{
	printf("tolower >> %c\n", c);
    printf("%c\n", tolower(c));

    printf("ft_tolower >> %c\n", c);
    printf("%c\n", ft_tolower(c));
}

void	puts_test(char *str)
{
    printf("puts >> %s\n", str);
    puts(str);
    printf("ft_puts >> %s\n", str);
	ft_puts(str);
}

int main()
{
    printf("\n");
    printf("------------------------------------------\n");
    printf("\t\tTESTS\n");

    char *str;
    /*
     * ft_memset
     * 
     */
    printf("\n\n\n");
    printf("------------------------------------------\n");
    printf("FT_MEMSET\n");
    printf("------------------------------------------\n");

    str = strdup("String Data");

    printf("memset >> %s\n", str);
    memset(str, '*', 5);
    print_bytes(str, 11);
    printf("\n\n");

    str = strdup("String Data");
    printf("ft_memset >> %s\n", str);

    ft_memset(str, '*', 5);
    print_bytes(str, 11);
    printf("\n\n\n");

    /*
     * ft_bzero
     * 
     */
    printf("------------------------------------------\n");
    printf("FT_BZERO\n");
    printf("------------------------------------------\n");

    str = strdup("String Data");

    printf("bzero >> %s\n", str);
    bzero(str, 2);
    print_bytes(str, 11);
    printf("\n\n");

    str = strdup("String Data");
    printf("ft_bzero >> %s\n", str);

    ft_bzero(str, 2);
    print_bytes(str, 11);
    printf("\n\n");
    
    /*
     * ft_isalpha
     * 
     */
    printf("------------------------------------------\n");
    printf("FT_ISALPHA\n");
    printf("------------------------------------------\n");
    
    isalpha_test('9');
    isalpha_test('A');
    isalpha_test('Z');
    isalpha_test('[');
    isalpha_test('a');
    isalpha_test('z');
    isalpha_test('}');
    
    /*
     * ft_digit
     * 
     */
    printf("------------------------------------------\n");
    printf("FT_ISDIGIT\n");
    printf("------------------------------------------\n");
    
    isdigit_test('9');
    isdigit_test('A');
    isdigit_test('0');
    isdigit_test('[');
    isdigit_test('6');
    isdigit_test('z');
    isdigit_test('}');

    /*
     * ft_isalnum
     * 
     */
    printf("------------------------------------------\n");
    printf("FT_ISALNUM\n");
    printf("------------------------------------------\n");
    
    isalnum_test('9');
    isalnum_test('A');
    isalnum_test('Z');
    isalnum_test('[');
    isalnum_test('a');
    isalnum_test('z');
    isalnum_test('}');

    /*
     * ft_isalnum
     * 
     */
    printf("------------------------------------------\n");
    printf("FT_ISASCII\n");
    printf("------------------------------------------\n");
    
    isascii_test('9');
    isascii_test('A');
    isascii_test('Z');
    isascii_test('[');
    isascii_test('a');
    isascii_test('z');
    isascii_test('}');


    /*
     * ft_isprint
     * 
     */
    printf("------------------------------------------\n");
    printf("FT_ISPRINT\n");
    printf("------------------------------------------\n");
    
    isprint_test('9');
    isprint_test('\t');
    isprint_test('Z');
    isprint_test('[');
    isprint_test('\n');
    isprint_test(' ');
    isprint_test('}');

    /*
     * ft_toupper
     * 
     */
    printf("------------------------------------------\n");
    printf("FT_TOUPPER\n");
    printf("------------------------------------------\n");
    
    toupper_test('9');
    toupper_test('Z');
    toupper_test('a');
    toupper_test('h');
    toupper_test('j');
    toupper_test('m');
    toupper_test(']');

    /*
     * ft_toupper
     * 
     */
    printf("------------------------------------------\n");
    printf("FT_TOLOWER\n");
    printf("------------------------------------------\n");
    
    tolower_test('4');
    tolower_test('Z');
    tolower_test('a');
    tolower_test('L');
    tolower_test('E');
    tolower_test('F');
    tolower_test('I');

    /*
     * ft_toupper
     * 
     */
    printf("------------------------------------------\n");
    printf("FT_PUTS\n");
    printf("------------------------------------------\n");
    
    puts_test("String");
    puts_test("Sring with\t\t\t tabs");
    puts_test("String with newline\n");
    puts_test("something random");

    //int fd;

    //fd = open("sample.txt", O_RDONLY);
    //printf("File Descriptor: %i\n", fd);

    //ft_cat(fd);

    //printf("Done..!\n");
    
    return (0);
}