#include <stdio.h>

int main(int argc,char **argv)
{
	int t;
	int limit = 100;

		srand(time(NULL));
	for(;;) {
		t=rand() % limit;
		printf("%d->",t);
		getchar();
	}

	return 0;
}
