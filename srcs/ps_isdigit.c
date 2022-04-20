#include "../include/push_swap.h"

void	cheak_max_min(long *nbr, char c)
{
	
	*nbr  = (*nbr) * 10 + c - 48;

}

int	ps_isdigit(char	*str)
{
	int		i;
	int		signe;
	long	result;


	i = 0;
	signe = 1;
	result = 0;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = -signe;
		if (str[i + 1] == '\0')
		{
			printf("+++++++++|%c\n",str[i]);
			printf("Signe with no Number !\n");
			exit(1);
		}
		i++;
	}
	result *= signe;
	while(str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		cheak_max_min(&result, str[i]);
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