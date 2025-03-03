#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_base(unsigned char c)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar(xdigit[c / 16]);
	ft_putchar(xdigit[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] == 127)
		{
			ft_putchar('\\');
			ft_base(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}