# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jocorrei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/30 17:35:29 by jocorrei          #+#    #+#              #
#    Updated: 2021/09/30 18:20:34 by jocorrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c *.c
ar rc libft.a *.o
ranlib libft.a
rm -f *.o
