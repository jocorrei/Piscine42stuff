/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 17:32:19 by jocorrei          #+#    #+#             */
/*   Updated: 2021/09/27 18:17:14 by jocorrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include	<unistd.h>

# define TRUE	1
# define FALSE	0
# define SUCCESS	0

# define EVEN(number) (number % 2 == 0)

# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG		"I have an odd number of arguments.\n"

typedef int	t_bool;

#endif
