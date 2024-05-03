/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamsalem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:34:13 by eamsalem          #+#    #+#             */
/*   Updated: 2024/05/03 17:52:42 by eamsalem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stddef.h>
# include <stdbool.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 80 
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list		*ft_lstnew(void);

void		ft_lstadd_back(t_list **lst, t_list *new);

void		ft_lstclear(t_list **lst, bool keep_last_node);

char		*get_next_line(int fd);

int			read_file_til_nl(int fd, t_list **line_buff);

int			check_node_for_nl(t_list *line_buff);

char		*read_line_from_buff(t_list *line_buff, char *line);

int			get_line_len(t_list *line_buff);

char		*get_line(t_list **line_buff);

int			rem_prev_line_from_node(t_list **line_buff, char *next_chr);

#endif
