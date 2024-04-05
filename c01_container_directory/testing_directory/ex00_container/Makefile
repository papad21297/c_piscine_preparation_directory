CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_ft.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_ft.o -o fnl
	@chmod +x fnl

ft_ft.o: ex00/ft_ft.c
	@echo "Compiling the ft_ft.c file"
	gcc $(CFLAGS) -c ex00/ft_ft.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_ft.o fnl
