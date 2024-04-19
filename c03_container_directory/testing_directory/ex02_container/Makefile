CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_strcat.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_strcat.o -o fnl
	@chmod +x fnl

ft_strcat.o: ex02/ft_strcat.c
	@echo "Compiling the ft_strcat.c file"
	gcc $(CFLAGS) -c ex02/ft_strcat.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_strcat.o fnl
