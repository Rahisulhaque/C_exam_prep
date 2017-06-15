#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
	char test1[] = "ABCDE";
	char test2[] = "abcde";
	char test3[] = " abcd";
	char test4[] = "abcd";
	char test5[] = "AAAAA";

	printf("String 1: %s\nString 2: %s\n\nstrcmp: %d\n", test1, test1, strcmp(test1, test1));
	printf("String 1: %s\nString 2: %s\n\nft_strcmp: %d\n", test1, test1, ft_strcmp(test1, test1));
	printf("String 1: %s\nString 2: %s\n\nstrcmp: %d\n", test2, test1, strcmp(test2, test1));
	printf("String 1: %s\nString 2: %s\n\nft_strcmp: %d\n", test2, test1, ft_strcmp(test2, test1));
	printf("String 1: %s\nString 2: %s\n\nstrcmp: %d\n", test3, test1, strcmp(test3, test1));
	printf("String 1: %s\nString 2: %s\n\nft_strcmp: %d\n", test3, test1, ft_strcmp(test3, test1));
	printf("String 1: %s\nString 2: %s\n\nstrcmp: %d\n", test4, test1, strcmp(test4, test1));
	printf("String 1: %s\nString 2: %s\n\nft_strcmp: %d\n", test4, test1, ft_strcmp(test4, test1));
	printf("String 1: %s\nString 2: %s\n\nstrcmp: %d\n", test5, test1, strcmp(test5, test1));
	printf("String 1: %s\nString 2: %s\n\nft_strcmp: %d\n", test5, test1, ft_strcmp(test5, test1));
	printf("String 1: %s\nString 2: %s\n\nstrcmp: %d\n", test2, test3, strcmp(test2, test3));
	printf("String 1: %s\nString 2: %s\n\nft_strcmp: %d\n", test2, test3, ft_strcmp(test2, test3));
}
