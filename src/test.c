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

    //int fd;

    //fd = open("sample.txt", O_RDONLY);
    //printf("File Descriptor: %i\n", fd);

    //ft_cat(fd);

    //printf("Done..!\n");
    
    return (0);
}