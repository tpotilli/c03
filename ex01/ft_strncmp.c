/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpotilli <tpotilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 06:56:17 by tpotilli          #+#    #+#             */
/*   Updated: 2022/09/28 13:15:52 by tpotilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	j;

	i = 0;
	j = n;
	while (s1[i] == s2[i] && (s1[i] || s2[i]) && i < j - 1)
	{
		i++;
	}
	if (s1[i] != s2[i] && n != 0)
		return (s1[i] - s2[i]);
	return (0);
}
