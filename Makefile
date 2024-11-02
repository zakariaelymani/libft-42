
NAME = libft.a
OBJ = $(FILES:.c=.o)
CREATE = ar rcs
FLAGS =  -Wall -Wextra -Werror  
CC = CC
OBJB = $(FILB:.c=.o)
FILES = ft_striteri.c ft_toupper.c ft_tolower.c ft_substr.c ft_strtrim.c ft_strrchr.c ft_strnstr.c\
ft_strncmp.c ft_strmapi.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strjoin.c ft_striteri.c\
ft_strdup.c ft_strchr.c ft_split.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c\
ft_putchar_fd.c ft_memset.c ft_memmove.c ft_memcpy.c ft_memcmp.c ft_itoa.c ft_isprint.c ft_isdigit.c\
ft_isascii.c ft_isalpha.c ft_isalnum.c ft_calloc.c ft_bzero.c ft_atoi.c ft_memchr.c
FILB = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c\
 ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c\

all: $(NAME) 
%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@
$(NAME): $(OBJ)
	$(CREATE) $(NAME) $(OBJ) 

bonus: $(NAME) $(OBJB) $(OBJ)
	$(CREATE) $(NAME) $(OBJB)
clean:
	rm -f $(OBJ) $(OBJB)
fclean: clean
	rm -f $(NAME) $(bonus)

re: fclean all

.PHONY: clean bonus fclean re all
