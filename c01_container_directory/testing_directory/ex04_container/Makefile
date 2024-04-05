CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_ultimate_div_mod.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_ultimate_div_mod.o -o fnl
	@chmod +x fnl

ft_ultimate_div_mod.o: ex04/ft_ultimate_div_mod.c
	@echo "Compiling the ft_ultimate_div_mod.c file"
	gcc $(CFLAGS) -c ex04/ft_ultimate_div_mod.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_ultimate_div_mod.o fnl
