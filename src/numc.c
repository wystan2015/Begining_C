#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char **argv)
{
	//char arr[10][10]={"Nine","Eight","Seven","Six","Five",
	//		"Four","Three","Two","One","Zero"};
	char arr[10][10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
		
	int s=0;
	int tmp=0;
	int mid=0;	
	
	printf("Input an integer:");
	scanf("%d",&s);
	
	
	while(s>0) {
		tmp=s%10;
		s/=10;
		printf("%s ",arr[tmp]);
	}
	printf("\n");

	return 0;
}
