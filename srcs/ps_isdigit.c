#include "../include/push_swap.h"

void	cheak_max_min(long *nbr, char c)
{
	
	*nbr  = (*nbr) * 10 + c - 48;

}

int	ps_isdigit(char	*str)
{
	int		i;
	long	nbr;
	int	signe;
	long	result;


	i = 0;
	nbr = 0;
	signe = 1;
	result = 0;
	while(str[i])
	{
		if (i == 0)
		{
			if (str[i] == '+' || str[i] == '-')
			{
				if (str[i] == '-')
					signe = -signe;
				str++ ;
			}
		}
		else if (!ft_isdigit(str[i]))
			return (0);
		cheak_max_min(&nbr, str[i]);
		result = nbr * signe;
		if (result < INT_MIN )
		{
			printf("+++++++++|%ld\n",result);
			printf("nbr is Not integer !\n");
			exit(1);
		}
		if (result > INT_MAX )
		{
			printf("+++++++++|%ld\n",result);
			printf("nbr is Not integer !\n");
			exit(1);
		}
		i++;
	}
	return (1);
}