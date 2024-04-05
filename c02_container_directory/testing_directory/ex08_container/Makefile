CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_strlowcase.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_strlowcase.o -o fnl
	@chmod +x fnl

ft_strlowcase.o: ex08/ft_strlowcase.c
	@echo "Compiling the ft_strlowcase.c file"
	gcc $(CFLAGS) -c ex08/ft_strlowcase.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_strlowcase.o fnl
