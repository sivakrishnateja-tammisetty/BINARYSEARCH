SEARCHING:It is a method,that can be used to search an useful information from sorted data set.
BINARY SEARCH:is an algorithm that can be used to search an element in sorted dataset.
Binary search is an dived and conquer algorithm.
	
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



//USING RECURSION
#include <iostream>
using namespace std;

int b_search(int *a,int n,int l,int h,int val)
{
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]==val){return mid;}
        else if(a[mid]>val){return b_search(a,n,l,mid-1,val);}
        else{return b_search(a,n,mid+1,h,val);}
    }
    return -1;
    
    
}
int main() {
    int arr[]={1,2,3,5,6};
    int val=3;
    int n=sizeof(arr)/sizeof(arr[0]);
   int res= b_search(arr,n,0,n-1,val);
   cout<<res<<endl;
    
    
    return 0;
}


//FINDING LAST OCCURENCE INDEX OF AN ELEMENT IN AN ARRAY
#include <iostream>
using namespace std;

int b_search(int *a,int n,int l,int h,int val)
{
    int res=-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]==val){res= mid;l=mid+1;}
        else if(a[mid]>val){h=mid-1;}
        else{l=mid+1;}
    }
    return res;
    
}
int main() {
    int arr[]={1,2,2,2,3,5,6};
    int val=2;
    int n=sizeof(arr)/sizeof(arr[0]);
    int index=b_search(arr,n,0,n-1,val);
    cout<<"Last occurence of index is "<<index<<endl;
    cout<<index;
   
    
    return 0;
}
