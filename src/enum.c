#include <stdio.h>
int main(int argc,char **argv)
{
	enum test {one,two,three};
	
	enum test t;
	
	t=one;
	
	if(t == one)
	{
		printf("==\n");
	}


	return 0;
}
