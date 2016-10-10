#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifdef __STDC_NO_VLA__
printf ("Variable length arrays are not supported.\n");
	exit(1);
#endif

int main(int argc,char **argv)
{
	size_t nmem;
	printf("Enter the size of array:");
	scanf("%zd",&nmem);
	
	//char arr[nmem]="good!";
	char arr[nmem];
	memset(arr,0x00,sizeof(arr));
	
	printf("before read,array is: %s\n",arr);
	printf("Input array:");
	scanf("%s",arr);
	printf("after read array is: %s\n",arr);

	return 0;
}
