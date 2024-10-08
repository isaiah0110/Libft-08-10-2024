/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irobinso <irobinso@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:24:22 by irobinso          #+#    #+#             */
/*   Updated: 2024/10/08 10:44:33 by irobinso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	j = 0;
	i = start;
	if (s == NULL || len == 0 || start >= strlen(s))
	{
		return (NULL);
	}
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	while (j < len && s[i] != '\0')
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

/*int	main(void)
{
	const char	*str = "hello world";
	char		*substring;

	printf("Original string: %s\n", str);
	substring = ft_substr(str, 4, 3);
	if (substring != NULL)
	{
		printf("Extracted substring: %s\n", substring);
	}
	else
	{
		printf("Failed to extract substring.\n");
		free(substring);
	}
	return (0);
}*/
