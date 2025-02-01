CC = cc

FLAGS = -Wall -Wextra -Werror

NAME = push_swap

HEADER = push_swap.h

SRCS = ft_split.c create_list.c main.c utils.c parsing.c min_max_numbers.c\
       push_a_b.c interaction_a.c interaction_b.c ft_sort4_5.c ft_sort2_3.c push_swap.c position.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean