/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:24:13 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/27 09:51:52 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (to_find[j] == str[i])
		{
			while (to_find[j] == str[i + j] && str[i + j] != 0)
			{
				j++;
			}
			if (to_find[j] == '\0')
				return (str + i);
		}
		j = 0;
		i++;
	}
	return (str);
}
