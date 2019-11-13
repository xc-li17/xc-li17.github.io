#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string a;
	string b;
	cin>>a>>b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int lena = a.length();
	int lenb = b.length();
	if (lena < lenb)
	{
		int tn = lena;
		string ts(a);
		a = b;
		lena = lenb;
		b = ts;
		lenb = tn;
	}
	int r;
	int tenflag = 0;
	for(int i = 0; i < lenb; i++)
	{
		r = (a[i] - '0') + (b[i] - '0') + tenflag;
		if (r >= 10)
		{
			tenflag = 1;
			r -= 10;
		}
		else
		{
			tenflag = 0;
		}
		a[i] = r + '0';
	}
	if (tenflag == 0)
	{
		reverse(a.begin(), a.end());
		cout<<a;
	}
	else
	{
		if (lena > lenb)
		{
			for(int j = lenb; j < lena; j++)
			{
				if(tenflag == 0)
				{
					break;
				}
				r = (a[j] - '0') + tenflag;
				if (r >= 10)
				{
					tenflag = 1;
					r -= 10;
				}
				else
				{
					tenflag = 0;
				}
				a[j] = r + '0';
			}
		}
		reverse(a.begin(), a.end());
		if (tenflag == 0)
		{
			cout<<a;
		}
		else
		{
			cout<<"1" + a;
		}
		
	}
	return 0;
}

