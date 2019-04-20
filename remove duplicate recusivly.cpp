#include<iostream>
using namespace std;
void removeduplicate(char *input)
{
	char l;
	if(input[0]='\0')
	{
		return;
	}
   if(*input==*(input+1))
   {
   	int i=1;
    for (;input[i]='\0';i++)
    {
    	input[i-1]=input[i];
    }
    input[i-1]=input[i];
    removeduplicate(input+1);
}
   else
   	removeduplicate(input+1);
cout<<l;
}
int main()
{
	char str[100];
	cin>>str;
	removeduplicate(str);

}