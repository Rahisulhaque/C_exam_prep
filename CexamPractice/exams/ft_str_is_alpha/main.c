#include <stdio.h>

int ft_str_is_alpha(char *str);

int main(void)
{
	char test[] = "inefalkdjflkasjdflkjdsalfjkdsfasjdlkfjslkjfjsfiennnnnnnnnnalksdjfiwe";
	char test2[] = "jdkjfksnfsafndksnfk111nlkdsfjalkdsfjlienilfnnnn";
	char test3[] = " iwfdssaljkdfjncnclJJJNEINFDFJKDSJFLNFKDNF";
	char test4[] = "NEINFDLKJSFLKJKDFLKJSLFNNNNNnlsdkfjalsjdflkjlksjflkanNLDFJLIENSKDJFkljsdlkdjfksjdfinnn";
	char test5[] = "asldkfjsldjflkdsjfNNIDNFINDFIDNFKJlkjdslfjsldkjfildsnfsldfldisiiNININ ";

	printf("%d\n", ft_str_is_alpha(test));
	printf("%d\n", ft_str_is_alpha(test2));
	printf("%d\n", ft_str_is_alpha(test3));
	printf("%d\n", ft_str_is_alpha(test4));
	printf("%d\n", ft_str_is_alpha(test5));
}
