#include<stdio.h>
void swap(int *a,int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int  b_search(int a[],int n,int key,int l,int h)
{
	while(l<=h)
	{
		int mid=(l+h)/2;
		if(a[mid]==key)
		{
			printf("Key was found at index %d in an array\n",mid);
			return 0;
		}
		else if(key<a[mid])
		{
			h=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	printf("Element was not found in an array\n");
}
int main()
{
	int arr[]={11,2,32,23,4};
	int len=sizeof(arr)/sizeof(arr[0]);
	swap(arr,len);
	int low=0,high=len-1;
	int key;
	printf("Enter key element you want to search in an array:");
	scanf("%d",&key);
        b_search(arr,len,key,low,high);
	return 0;
}
