NAME = ft_select

OBJS = $(addprefix ./srcs/, \
				$(addsuffix .o, \
					main \
					$(addprefix list/, \
						create_node \
						append_node \
						create_head \
						display_list \
						initialize_list \
					) \
					$(addprefix termcap/, \
						get_term_data \
					) \
				) \
			)

CFLAGS = -Wall -Werror -Wextra

CC = @gcc

LINKER = -ltermcap

INCLUDES = -I ./includes -I ./libft/includes

LIB = libft

all: $(NAME)

$(NAME): $(LIB) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIB)/libft.a $(INCLUDES) -o $(NAME) $(LINKER)
	@echo "\x1B[31mft_select made"

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c -o $@ $<

$(LIB): force
	@make -C $(LIB)

force: 
	@true

clean:
	@rm -f $(OBJS)
	@make clean -C $(LIB)
	@echo "\x1B[34m~~~clean~~~"

fclean: clean
	@rm -f $(NAME)

re: fclean all