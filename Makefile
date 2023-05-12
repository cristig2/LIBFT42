# Makefile es un archivo para recompilar mi proyecto. Creando reglas a partir de objetivos, dependecias e instruccciones
# Makefile indica a "make" en la terminal como recompilarlo a partir de las reglas que le indiquemos
# El carácter @ sirve para silenciar un comando en su ejecución y no muestre nada en pantalla
# Las variables se escriben: "NOMBRE="
# Las reglas se escriben: "REGLA:" seguido de un salto de linea y una tabulacion
# Cuando hay parámetros junto a la regla, indicamos qué objetos deberían estar presentes para que se ejecute dicha regla

# VARIABLES DEL PROGRAMA
NAME = libft.a 
FILES = ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_strlen.c\
		ft_memset.c\
		ft_bzero.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strnstr.c\
		ft_atoi.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_substr.c\
		ft_strjoin.c\

CC = gcc
RM = rm -f
OBJECTS = $(FILES:.c=.o)
CFLAGS = -Wall -Wextra -Werror

# REGLAS GENERALES
all: $(NAME)

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)
# "ar" crea la libreria estatica
# "rcs" replace, create, sort 
clean:
	$(RM) $(OBJECTS)
# clean: Elimina los archivos objeto, .o.
fclean: clean
	$(RM) $(NAME) $(OBJECTS)
# fclean: clean Remueve todos los archivos objetos, binarios, y sus respectivas carpetas
re: fclean all
# re: fclean all Hace un re-make (como si se hubiera ejecutado Make por primera vez)
.PHONY: all clean fclean re
# Prioriza las reglas del makefile frente a posibles comandos o archivos del sistema.
# Le dice al make que estos nombre no son archivos