#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void) {
	int	nbr = 20;
	printf("nbr: \"%d\"\n", nbr);
	int	*pNbr = &nbr;
	int	**ppNbr = &pNbr;
	int	***pppNbr = &ppNbr;
	int	****ppppNbr = &pppNbr;
	int	*****pppppNbr = &ppppNbr;
	int	******ppppppNbr = &pppppNbr;
	int	*******pppppppNbr = &ppppppNbr;
	int	********ppppppppNbr = &pppppppNbr;
	int	*********pppppppppNbr = &ppppppppNbr;
	ft_ultimate_ft(pppppppppNbr);
	printf("nbr: \"%d\"\n", nbr);
}
