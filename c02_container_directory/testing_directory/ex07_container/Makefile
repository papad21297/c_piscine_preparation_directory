CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_strupcase.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_strupcase.o -o fnl
	@chmod +x fnl

ft_strupcase.o: ex07/ft_strupcase.c
	@echo "Compiling the ft_strupcase.c file"
	gcc $(CFLAGS) -c ex07/ft_strupcase.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_strupcase.o fnl
