#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a[]={0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
	int n=sizeof(a)/sizeof(a[0]);
	int low=0,mid=0;
	int high=n-1;
	
	while(mid<=high)
	{
		switch(a[mid])
		{
			case 0:
				swap(a[low],a[mid]);
				low++;mid++;
				break;
			case 1:
				mid++;
				break;
			case 2:
				swap(a[mid],a[high]);
				high--;
				break;
		}
	}
	
    
    for(int i=0;i<n;i++)
    cout<<a[i];
	return 0;
}
