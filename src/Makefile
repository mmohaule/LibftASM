NAME = libfts.a

EXEC = test

ASM = nasm

CC = gcc

MAIN = test.c

FLAGS = -Wall -Wextra -Werror

SRC =	ft_memset.s ft_bzero.s ft_isalpha.s ft_isdigit.s ft_isalnum.s ft_isascii.s

OBJ = $(SRC:.s=.o)

OBJ_TYPE = macho64

all: $(NAME)

$(NAME): $(SRC) $(OBJ)
	@ar rc $(NAME) $(OBJ)

%.o: %.s
	@$(ASM) -f $(OBJ_TYPE) -o $@ $<

main: $(MAIN) $(SRC)
	@$(CC) -o $(EXEC) $(MAIN) -L. -lfts $(FLAGS)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

clean-main:
	@rm -f $(EXEC)

re: fclean all
