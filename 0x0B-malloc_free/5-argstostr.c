# include <stdio.h>
# include <stdlib.h>

/**
 * argstostr - concatenates all the argument
 * @ac:number of string
 * @av: pointer
 * Return: pointer to string
 *
 */

char *argstostr(int ac, char **av)
{
	char *p;
	int j, i = 0, count = 0;

	if (ac < 1 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			count++;
			j++;
		}
		count++;
		i++;
	}

	p = malloc(sizeof(char) * (count + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	count = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			p[count] = av[i][j];
			j++;
			count++;
		}
		p[count] = 10;
		i++;
		count++;
	}
	return (p);
}
