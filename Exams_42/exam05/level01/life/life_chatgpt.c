#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define B(l,x,y) b[(l)*s+(y)*(w+2)+(x)]

int	main(int ac, char **av) {
	int x = 1, y = 1, d = 0, i, dx, dy, n;
	char c;
	if (ac != 4)
		return 1;
	int w = atoi(av[1]), h = atoi(av[2]), it = atoi(av[3]);
	size_t s = (w + 2) * (h + 2);
	unsigned char *b = calloc(2, s);
	if (!b)
        return 1;
	while (read(0, &c, 1) > 0)
	{
		if (c == 'w' && y > 1) y--;
		else if (c == 's' && y < h) y++;
		else if (c == 'a' && x > 1) x--;
		else if (c == 'd' && x < w) x++;
		else if (c == 'x') d ^= 1;
		if (d)
			B(0, x, y) = 1;
	}
	for (i = 0; i < it; i++)
		for (y = 1; y <= h; y++)
			for (x = 1; x <= w; x++)
			{
				n = 0;
				for (dy = -1; dy <= 1; dy++)
					for (dx = -1; dx <= 1; dx++)
						if (dx || dy)
							n += B(i & 1, x + dx, y + dy);
				B((i & 1) ^ 1, x, y) = B(i & 1, x, y) ? (n == 2 || n == 3) : (n == 3);
			}
	for (y = 1; y <= h; y++)
	{
		for (x = 1; x <= w; x++)
			putchar(B(it & 1, x, y) ? '0' : ' ');
		putchar('\n');
	}
	return free(b), 0;
}