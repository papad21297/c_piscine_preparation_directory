CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_strncmp.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_strncmp.o -o fnl
	@chmod +x fnl

ft_strncmp.o: ex01/ft_strncmp.c
	@echo "Compiling the ft_strncmp.c file"
	gcc $(CFLAGS) -c ex01/ft_strncmp.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_strncmp.o fnl
