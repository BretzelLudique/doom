/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doom.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcanteau <jcanteau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:57:29 by jcanteau          #+#    #+#             */
/*   Updated: 2020/08/01 17:01:30 by jcanteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doom.h"

void	ft_doom(char *mapfile)
{
	t_env	doom;

	ft_initialize(&doom, mapfile, FALSE);
	save_in_file(&doom);
	ft_sdl(&doom);
}
