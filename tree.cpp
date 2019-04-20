#include<iostream>
using namespace std;
template<typename T>
#include <vector>
class Treenode
{
	public:
	T data;
	vector<Treenode<T>*> children;
}
Treenode(T data)
{
	this->data=data;
}

int main()
{
	void print(Treenode<int>*root)
	{
		cout<<root->data<<" ";
		for(int i=0;i<root->children.size();i++)
		{
	      print(root->children[i]);	
		}
	}
	Treenode<int>*root=new Treenode<int>(1);
	Treenode<int>*node1=new Treenode<int>(2);
	Treenode<int>*node2=new Treenode<int>(3)

}
