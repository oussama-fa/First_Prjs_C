#include <unistd.h>
#include <stdarg.h>

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int res = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (*s)
		res += write(1, s++, 1);
	return (res);
}

int	ft_putnbr(int nb)
{
	int res = 0;
	if (nb == -2147483648)
		return (write(1, "-2147483648", 11));
	else if (nb < 0)
	{
		res += ft_putchar('-');
		nb *= -1;
		res += ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		res += ft_putnbr(nb/10);
		res += ft_putnbr(nb%10);
	}
	else if (nb <= 9)
		res += ft_putchar(nb + 48);
	return (res);
}

int ft_puthexa(unsigned int nb)
{
	int res = 0;
	char	*base = "0123456789abcdef";
	if (nb >= 16)
	{
		res += ft_puthexa(nb/16);
		res += ft_puthexa(nb%16);
	}
	else if (nb <= 16)
		res += ft_putchar(base[nb%16]);
	return (res);
}

int	ft_printf(char *str, ...)
{
	int res = 0;
	int i = 0;
	va_list arg;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i + 1] && str[i] == '%')
		{
			i++;
			if (str[i] == 's')
				res += ft_putstr(va_arg(arg, char *));
			else if (str[i] == 'd')
				res += ft_putnbr(va_arg(arg, int));
			else if (str[i] == 'x')
				res += ft_puthexa(va_arg(arg, unsigned int));
			else
				res += ft_putchar(str[i]);
		}
		else if (str[i] != '%')
				res += ft_putchar(str[i]);
		i++;
	}
	va_end(arg);
	return (res);
}
