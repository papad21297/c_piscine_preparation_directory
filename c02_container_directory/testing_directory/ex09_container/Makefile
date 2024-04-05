CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_strcapitalize.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_strcapitalize.o -o fnl
	@chmod +x fnl

ft_strcapitalize.o: ex09/ft_strcapitalize.c
	@echo "Compiling the ft_strcapitalize.c file"
	gcc $(CFLAGS) -c ex09/ft_strcapitalize.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_strcapitalize.o fnl
