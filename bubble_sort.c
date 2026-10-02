#include <stdio.h>
int main()
{
	printf("Please input 8 numbers:");
	int x;
	int arr[8];
	int i,j,temp;
	
	for(i=0;i<8;i++){
		scanf("%d",&arr[i]);
	}
	
	//冒泡排序核心：从小到大
	for(i=0;i<7;i++)  //一共最多7轮
	{
		          
		for(j=0;j<7-i;j++){
			if(arr[j]>arr[j+1]) //前面大于后面，交换
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	//输出结果
	printf("After sorting:");
	for(i=0;i<8;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}