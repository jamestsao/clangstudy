#include <stdio.h>

/*
 * this a function to return the string name of month
 */
char *month_name(int n);

int main()
{
	int n;
	n = getchar();
	printf("%s\n", month_name(n-'0'));
	return 0;
}

char *month_name(int n)
{
	static char *name[] = {
		"Illegal month",
		"January", "February", "March",
		"April", "May", "June",
		"July", "August", "September",
		"Octorber", "November", "December"
	};

	return (n < 1 || n > 12) ? name[0] : name[n];
}
