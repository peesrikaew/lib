/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tesrikae <tesrikae@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:32:02 by tesrikae          #+#    #+#             */
/*   Updated: 2023/08/28 17:43:15 by tesrikae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*save;

	while (*s != '\0')
	{
		if (*s == c)
		{
			save = ((char *)s);
		}
		s++;
	}
	return (save);
}

/*int main () 
{
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}*/