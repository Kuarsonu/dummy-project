#include<iostream>
using namespace std;
void merge(int a[],int start,int end)
{
  int size=end-start+1;
  int mid=(start+mid)/2;
  int *n=new int[size];
  int i=start;
  int j=mid+1;
  int k=0;//kha dalna third array me
  while(i<=mid && j<=end)
    {
    	if(a[i]>a[j])
    	{
    		n[k]=a[i];
    		i++;
    		k++;
    	}
    	else 
    	{
    		n[k]=a[j];
    		j++;
    		k++;
    	}
       while(i<=mid)
       {
       	n[k]=a[i];
       	i++;
       	k++;
       }
       while(j<=end)
       {
       	n[k]=a[j];
       	j++;
       	k++;
       }
    }
//copy element 
    int m=0;
    for(i=start;i<=end;i++)
    {
    	a[i]=n[m];
    	m++;
    }
   delete []n;
}
void mergesort(int a[],int start,int end)
{   
	int mid=(start+end)/2;
	//base case(also in clude empty array)
	if(start>=end)
	{
		return ;
	 }
    //call recrustion
	 mergesort(a,start,mid);
	 mergesort(a,mid+1,end);
     merge(a,start,end);

}
int main()
{
	 int c[]={6,5,4,3,2,1};
	mergesort(c,0,6);
	for(int i=0;i<6;i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<endl;
}
