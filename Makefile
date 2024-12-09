NAME = libft.a
SRCS =  ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memset.c ft_strlen.c \
		ft_tolower.c ft_toupper.c ft_atoi.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_memcmp.c ft_strncmp.c \
		ft_memchr.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strlcpy.c ft_calloc.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c \
		ft_split.c ft_strdup.c ft_strlcat.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c

BONUS_OBJS = $(BONUS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)
RM = rm -f


all : $(NAME)
	

$(NAME):	$(OBJS)
				ar rc $(NAME) $(OBJS)  

clean: 
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean: 	clean
				$(RM) $(NAME)

re: 		fclean $(NAME)

bonus : 	$(BONUS_OBJS)
				ar rc $(NAME) $(BONUS_OBJS)

.PHONY  : all clean fclean re bonus 

