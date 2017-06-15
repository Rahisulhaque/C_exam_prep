/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmiller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 17:51:25 by bmiller           #+#    #+#             */
/*   Updated: 2016/11/01 13:04:13 by bmiller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
	char test1[] = "In the middle of your mathematics exam,\n\
the batteries go dead on your calculator.\n\
You put it away in disgust saying, “This machine is out to get me.”\n\
You’ve probably heard someone say “Love is blind.”\n\
The cliché suggests anyone who is in love is unable to see his\n\
or her lover’s faults. In each of the two examples people have given\n\
human qualities to non-human things.\n\
From the evidence of watching the dog, we presume that the dog is dreaming.\n\
Similarly, the episode with the calculator presumes that the machine will \n\
react like human beings; the calculator wants revenge. \n\
In literature, authors often give human qualities to non-human things. \n\
This technique is called personification.";

	char test2[] = "Gallop apace, you fiery-footed steeds,\n\
Toward Phaeton would whip you to the west\n\
And bring I cloudy night immediately.\n\
Spread thy close curtain, love-performing night,\n\
That runaway’s eyes may wink, and Romeo\n\
Leap to these arms untalked or and unseen…";

	char test1b[] = "In the middle of your mathematics exam,\n\
the batteries go dead on your calculator.\n\
You put it away in disgust saying, “This machine is out to get me.”\n\
You’ve probably heard someone say “Love is blind.”\n\
The cliché suggests anyone who is in love is unable to see his\n\
or her lover’s faults. In each of the two examples people have given\n\
human qualities to non-human things.\n\
From the evidence of watching the dog, we presume that the dog is dreaming.\n\
Similarly, the episode with the calculator presumes that the machine will \n\
react like human beings; the calculator wants revenge. \n\
In literature, authors often give human qualities to non-human things. \n\
This technique is called personification.";

	char test2b[] = "Gallop apace, you fiery-footed steeds,\n\
Toward Phaeton would whip you to the west\n\
And bring I cloudy night immediately.\n\
Spread thy close curtain, love-performing night,\n\
That runaway’s eyes may wink, and Romeo\n\
Leap to these arms untalked or and unseen…";

	char test3[] = "TESTING";
	char test4[] = "BEST";
	char test3b[] = "TESTING";
	char test4b[] = "BEST";


	char test5[] = "                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
 ";

	char test6[] = "\v\t\tNO\v\v\v\v\vESCAPE";

	char test5b[] = "                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
 ";

	char test6b[] = "\v\t\tNO\v\v\v\v\vESCAPE";

	char test7[] = "In the middle of your mathematics exam,\n\
the batteries go dead on your calculator.\n\
You put it away in disgust saying, “This machine is out to get me.”\n\
You’ve probably heard someone say “Love is blind.”\n\
The cliché suggests anyone who is in love is unable to see his\n\
or her lover’s faults. In each of the two examples people have given\n\
human qualities to non-human things.\n\
From the evidence of watching the dog, we presume that the dog is dreaming.\n\
Similarly, the episode with the calculator presumes that the machine will \n\
react like human beings; the calculator wants revenge. \n\
In literature, authors often give human qualities to non-human things. \n\
This technique is called personification.";

	char test8[] = "                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
 ";

	char test7b[] = "In the middle of your mathematics exam,\n\
the batteries go dead on your calculator.\n\
You put it away in disgust saying, “This machine is out to get me.”\n\
You’ve probably heard someone say “Love is blind.”\n\
The cliché suggests anyone who is in love is unable to see his\n\
or her lover’s faults. In each of the two examples people have given\n\
human qualities to non-human things.\n\
From the evidence of watching the dog, we presume that the dog is dreaming.\n\
Similarly, the episode with the calculator presumes that the machine will \n\
react like human beings; the calculator wants revenge. \n\
In literature, authors often give human qualities to non-human things. \n\
This technique is called personification.";

	char test8b[] = "                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
                                                  \n\
 ";

	printf("First string: %s\n\n", test3);
	printf("Second string: %s\n\n", test4);
	printf("strncmp:\n%d\n\n", strncmp(test3, test4, 42));
	printf("ft_strncmp:\n%d\n\n", ft_strncmp(test3b, test4b, 42));
	printf("First string: %s\n\n", test1);
	printf("Second string: %s\n\n", test2);
	printf("strncmp:\n%d\n\n", strncmp(test1, test2, 500));
	printf("ft_strncmp:\n%d\n\n", ft_strncmp(test1b, test2b, 500));
	printf("First string: %s\n\n", test5);
	printf("Second string: %s\n\n", test6);
	printf("strncmp:\n%d\n\n", strncmp(test5, test6, -42));
	printf("ft_strncmp:\n%d\n\n", ft_strncmp(test5b, test6b, -42));
	printf("First string: %s\n\n", test5);
	printf("Second string: %s\n\n", test1);
	printf("strncmp:\n%d\n\n", strncmp(test5, test1, 0));
	printf("ft_strncmp:\n%d\n\n", ft_strncmp(test5b, test1b, 0));
	printf("First string: %s\n\n", test8);
	printf("Second string: %s\n\n", test7);
	printf("strncmp:\n%d\n\n", strncmp(test8, test7, -500));
	printf("ft_strncmp:\n%d\n\n", ft_strncmp(test8b, test7b, -500));
}
