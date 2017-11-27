#include<iostream>
using namespace std;

class Queue{
	int *arr;
	int s;
	int top;
public:
	Queue(int a){
		top = 0;
		arr = new int[a];
		s = a;
	}

	void push(int d);
	int pop();
	void print();

};

void Queue::push(int d){

	if (top == s)	{
		cout << "Queue is full" << endl;
	}
	else    {
		arr[top] = d;
		top++;
	}

}
int Queue::pop(){

	if (top == 0)	{
		cout << "Queue is empty" << endl;
		return NULL;
	}
	else
	{

		int temp = arr[0];
		for (int i = 0; i <= top; i++)
		{
			arr[i] = arr[i + 1];

		}

		top--;

		return temp;


	}


}
void Queue::print(){

	for (int i = 0; i<top; i++)
	{
		cout << arr[i] << endl;

	}

}


int main(){

	Queue ob(4);
	ob.push(5);
	ob.push(2);
	ob.push(7);
	ob.push(9);
	ob.push(9);

	ob.print();

	cout << ob.pop() << endl;
	cout << ob.pop() << endl;
	cout << ob.pop() << endl;
	cout << ob.pop() << endl;
	cout << ob.pop() << endl;

	return 0;



}

