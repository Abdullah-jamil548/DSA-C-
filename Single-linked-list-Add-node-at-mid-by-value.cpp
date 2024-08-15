#include<iostream>
using namespace std;
class A
{
    int data=0;
    A *next=nullptr;
    A *head=nullptr;
    public:
    void addnode(int x);
    void addnode_mid_by_value(int u);
    void print();
};

void A::addnode(int x)
{
A *node =new A();
node->data=x;
node->next=head;
head=node;
}

void A::addnode_mid_by_value(int u)
{
A *temp=head;
int count=0;
int no;
while (temp!=nullptr)
{
if(temp->data==u)
{
A *node=new A();
cout<<"ENTER NO WHICH YOU WANT TO ADD"<<endl;
cin>>no;
node->data=no;
node->next=temp->next;
temp->next=node;
temp=node;
count++;
}
else
{
temp=temp->next;
}
}
if(count==0)
{
cout<<"INAVLID NO"<<endl;
}
}

void A::print()
{
    A *temp;
    temp=head;
while (temp!=nullptr)
{
cout<<temp->data<<endl;
temp=temp->next;
}

}
int main()
{
A s1;
s1.addnode(4);
s1.addnode(5);
s1.addnode(6);
s1.addnode(7);
s1.addnode(8);
s1.addnode_mid_by_value(4);
s1.print();
}