/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esbilen <esbilen@student.42warsaw.pl>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 21:58:49 by esbilen           #+#    #+#             */
/*   Updated: 2026/02/02 22:27:03 by esbilen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && (i < n - 1))
		i++;
	if (n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char s1[] = "123";
	char s2[] = "125";
	int nbr = 3;
	printf("result:%d\n", ft_strncmp(s2,s1,nbr));
	return 0; 
}*/
