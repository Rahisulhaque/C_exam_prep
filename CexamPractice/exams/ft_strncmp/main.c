#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char test1[] = "ABCDE";
	char test2[] = "abcde";
	char test3[] = " abcd";
	char test4[] = "abcd";
	char test5[] = "AAAAA";
	char test6[] = "\nabcd";
	char test7[] = "\v\n\t abcd";

	printf("String 1: %s\nString 2: %s\n\nstrncmp: %d\n", test1, test1, strncmp(test1, test1, 3));
	printf("String 1: %s\nString 2: %s\n\nft_strncmp: %d\n", test1, test1, ft_strncmp(test1, test1, 3));
	printf("String 1: %s\nString 2: %s\n\nstrncmp: %d\n", test2, test1, strncmp(test2, test1, 2));
	printf("String 1: %s\nString 2: %s\n\nft_strncmp: %d\n", test2, test1, ft_strncmp(test2, test1, 2));
	printf("String 1: %s\nString 2: %s\n\nstrncmp: %d\n", test3, test1, strncmp(test3, test1, 5));
	printf("String 1: %s\nString 2: %s\n\nft_strncmp: %d\n", test3, test1, ft_strncmp(test3, test1, 5));
	printf("String 1: %s\nString 2: %s\n\nstrncmp: %d\n", test4, test1, strncmp(test4, test1, 4));
	printf("String 1: %s\nString 2: %s\n\nft_strncmp: %d\n", test4, test1, ft_strncmp(test4, test1, 4));
	printf("String 1: %s\nString 2: %s\n\nstrncmp: %d\n", test5, test1, strncmp(test5, test1, 1));
	printf("String 1: %s\nString 2: %s\n\nft_strncmp: %d\n", test5, test1, ft_strncmp(test5, test1, 1));
	printf("String 1: %s\nString 2: %s\n\nstrncmp: %d\n", test2, test3, strncmp(test2, test3, 0));
	printf("String 1: %s\nString 2: %s\n\nft_strncmp: %d\n", test2, test3, ft_strncmp(test2, test3, 0));
	printf("String 1: %s\nString 2: %s\n\nstrncmp: %d\n", test1, test1, strncmp(test1, test1, 0));
	printf("String 1: %s\nString 2: %s\n\nft_strncmp: %d\n", test1, test1, ft_strncmp(test1, test1, 0));
	printf("String 1: %s\nString 2: %s\n\nstrncmp: %d\n", test1, test1, strncmp(test1, test1, -1));
	printf("String 1: %s\nString 2: %s\n\nft_strncmp: %d\n", test1, test1, ft_strncmp(test1, test1, -1));
	printf("String 1: %s\nString 2: %s\n\nstrncmp: %d\n", test1, test1, strncmp(test1, test1, -2500));
	printf("String 1: %s\nString 2: %s\n\nft_strncmp: %d\n", test1, test1, ft_strncmp(test1, test1, -2500));
	printf("String 1: %s\nString 2: %s\n\nstrncmp: %d\n", test1, test1, strncmp(test1, test1, 6));
	printf("String 1: %s\nString 2: %s\n\nft_strncmp: %d\n", test1, test1, ft_strncmp(test1, test1, 6));
	printf("String 1: %s\nString 2: %s\n\nstrncmp: %d\n", test1, test1, strncmp(test1, test1, 4));
	printf("String 1: %s\nString 2: %s\n\nft_strncmp: %d\n", test1, test1, ft_strncmp(test1, test1, 4));
	printf("String 1: %s\nString 2: %s\n\nstrncmp: %d\n", test1, test1, strncmp(test1, test1, 5));
	printf("String 1: %s\nString 2: %s\n\nft_strncmp: %d\n", test1, test1, ft_strncmp(test1, test1, 5));
	printf("String 1: %s\nString 2: %s\n\nstrncmp: %d\n", test4, test1, strncmp(test4, test1, 0));
	printf("String 1: %s\nString 2: %s\n\nft_strncmp: %d\n", test4, test1, ft_strncmp(test4, test1, 0));
	printf("String 1: %s\nString 2: %s\n\nstrncmp: %d\n", test4, test1, strncmp(test4, test1, -1));
	printf("String 1: %s\nString 2: %s\n\nft_strncmp: %d\n", test4, test1, ft_strncmp(test4, test1, -1));
	printf("String 1: %s\nString 2: %s\n\nstrncmp: %d\n", test4, test1, strncmp(test4, test1, -50));
	printf("String 1: %s\nString 2: %s\n\nft_strncmp: %d\n", test4, test1, ft_strncmp(test4, test1, -50));
	printf("String 1: %s\nString 2: %s\n\nstrncmp: %d\n", test4, test1, strncmp(test4, test1, -1));
	printf("String 1: %s\nString 2: %s\n\nft_strncmp: %d\n", test4, test1, ft_strncmp(test4, test1, -1));
	printf("String 1: %s\nString 2: %s\n\nstrncmp: %d\n", test6, test4, strncmp(test6, test4, -3));
	printf("String 1: %s\nString 2: %s\n\nft_strncmp: %d\n", test6, test4, ft_strncmp(test6, test4, -3));
	printf("String 1: %s\nString 2: %s\n\nstrncmp: %d\n", test7, test6, strncmp(test7, test6, 0));
	printf("String 1: %s\nString 2: %s\n\nft_strncmp: %d\n", test7, test6, ft_strncmp(test7, test6, 0));
}
