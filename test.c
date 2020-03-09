#include <unistd.h>

void		testfunction(char c)
{
	write (1, &c, 1);
}

int		main()
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		testfunction(c++);
	}
	testfunction('\n');
	return (0);
}

