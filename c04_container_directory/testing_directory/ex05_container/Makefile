CFLAGS = -Wall -Wextra -Werror

fnl: main.o ft_atoi_base.o
	@echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o ft_atoi_base.o -o fnl
	@chmod +x fnl

ft_atoi_base.o: ex05/ft_atoi_base.c
	@echo "Compiling the ft_atoi_base.c file"
	gcc $(CFLAGS) -c ex05/ft_atoi_base.c

main.o: main.c
	@echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

clean:
	@echo "Removing everything but the source files"
	rm main.o ft_atoi_base.o fnl
