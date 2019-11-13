#include <iostream>
using namespace std;

int main() 
{	
	int n;
	cin >> n;
	int *label = new int[n];
	for(int i = 0; i < n; i++)
	{
		cin>>label[i];
		label[i] %= 19948;
 	}
	int fib[19948] = {0};
	fib[1] = 1;
	for(int i = 2; i < 19948; i++)
	{
		fib[i] = (fib[i-1] + fib[i-2]) % 9973;
	} 
	for(int i = 0; i < n; i++)
	{
		cout<<fib[label[i]]<<endl;
	}
	return 0;
}
