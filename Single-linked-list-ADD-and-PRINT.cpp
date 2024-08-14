#include<iostream>
using namespace std;
class A
{
    int data=0;
    A *next=nullptr;
    A *head=nullptr;
    public:
    void addnode(int x);
    void print();
};

void A::addnode(int x)
{
A *node =new A();
node->data=x;
node->next=head;
head=node;
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
s1.print();
}