#include <stdio.h>

int ft_str_is_numeric(char *str);

int main(void)
{
	char test[] = "inefalkdjflkasjdflkjdsalfjkdsfasjdlkfjslkjfjsfiennnnnnnnnnalksdjfiwe";
	char test2[] = "jdkjfksnfsafndksnfk111nlkdsfjalkdsfjlienilfnnnn";
	char test3[] = " iwfdssaljkdfjncnclJJJNEINFDFJKDSJFLNFKDNF";
	char test4[] = "NEINFDLKJSFLKJKDFLKJSLFNNNNNnlsdkfjalsjdflkjlksjflkanNLDFJLIENSKDJFkljsdlkdjfksjdfinnn";
	char test5[] = "asldkfjsldjflkdsjfNNIDNFINDFIDNFKJlkjdslfjsldkjfildsnfsldfldisiiNININ ";
	char test6[] = "0293298310283918023988938";
	char test7[] = "12093213882 109283918239829 ";

	printf("%d\n", ft_str_is_numeric(test));
	printf("%d\n", ft_str_is_numeric(test2));
	printf("%d\n", ft_str_is_numeric(test3));
	printf("%d\n", ft_str_is_numeric(test4));
	printf("%d\n", ft_str_is_numeric(test5));
	printf("%d\n", ft_str_is_numeric(test6));
	printf("%d\n", ft_str_is_numeric(test7));
}
