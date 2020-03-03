#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	int a[] = {1, 3, 4, 5, 7};
    int b[] = {2, 3, 5, 6};
    
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(a[0]);
    
    int res[m+n];
     
     int i=0,j=0,k=0;
     
     while(i<m && j<n)
     {
     	if(a[i]<b[j])
     	{
     		res[k++]=a[i];
     		i++;
		 }
		 
		 else if(b[j]<a[i])
		 {
		 	res[k++]=b[j];
		 	j++;
		 }
		 
		 else
		 {
		 	res[k++]=a[i];
		 	i++;j++;
		 }
	 }
	 
	 while(i < m) 
     res[k++]=a[i++];
  
  while(j < n) 
    res[k++]=b[j++];
	 
	 for(int l=0;l<k;l++)
	 {
	 	cout<<res[l];
	 }
    
	return 0;
}
