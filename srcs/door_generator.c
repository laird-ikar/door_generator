/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   door_generator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:09:39 by bguyot            #+#    #+#             */
/*   Updated: 2022/02/02 17:48:13 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "door_generator.h"

int	main(int argc, char *argv[]) {
	if (argc < 4) {
		ft_putstr("nbLigne nbCollone bla bla bla");
		return 0;
	}

	int i = -1;
	int j = -1;
	int nb_lin = ft_atoi(argv[1]);
	int nb_col = ft_atoi(argv[2]);
	int **og_door;
	og_door = malloc(sizeof (int *) * nb_lin);
	for (int i = 0; i < nb_lin; i++) {
		og_door[i] = malloc(sizeof (int) * nb_col);
	}

	while (++i < nb_lin)
	{
		j = -1;
		while (++j < nb_col)
		{
			og_door[i][j] = (argv[3 + i][j] == '1');
		}
	}

	print_tab(og_door, nb_lin, nb_col);
}

void	print_tab(int **tab, int nb_lin, int nb_col)
{
	for (int i = 0; i < nb_lin; i++) {
		for (int j = 0; j < nb_col; j++) {
			ft_putnbr(tab[i][j]);
		}
		ft_putchar('\n');
	}
}
