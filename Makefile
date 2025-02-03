NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror -I.

SRCS = $(wildcard *.c)

OBJS = $(SRCS:%.c=%.o)
OBJSB = $(SRCSB:%.c=%.o)

SRCSB = \
		# ft_lstadd_back.c \
		# ft_lstadd_front.c \
		# ft_lstclear.c \
		# ft_lstdelone.c \
		# ft_lstiter.c \
		# ft_lstlast.c \
		# ft_lstmap.c \
		# ft_lstnew.c \
		# ft_lstsize.c \
		
$(OBJS_DIR)%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME): $(OBJS) 
	@ar rcs $(NAME) $(OBJS)
	@echo "Library $(NAME) created."

bonus: $(OBJS) $(OBJSB)
	@ar rcs $(NAME) $(OBJS) $(OBJSB)
	@echo "Library $(NAME) with bonus created."

clean:
	@rm -rf $(OBJS) $(OBJSB)
	@echo "Object files cleaned."

fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) and object files cleaned."

re: fclean all

all: $(NAME)

.PHONY: all clean fclean re bonus