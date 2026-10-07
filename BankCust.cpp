#include <iostream>
using namespace std;
int main()
{
int queue[5];
int front = 0;
int rear = 0;
cout << "Enter 5 Customer order numbers:\n";
for (int i=0; i<5; i++)
{
cin >> queue[rear];
rear++;
}
cout<<"\nCustomer token number:\n";
while(front<rear)
{
cout << "Customer Token Number:" << queue[front] << endl;
front++;
}
return 0;
}
