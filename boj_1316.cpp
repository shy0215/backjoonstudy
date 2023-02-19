#include<iostream>
#include<string>
using namespace std;

int cnt = 0; 
void check(string a);

int main()
{
	int n;
	cin >> n;
	string input;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		check(input);
	}
	cout << cnt;
	return 0;
}
void check(string a)
{
	int siz = a.size();
	for (int i = 0; i < siz - 2; i++)
	{
		if (a[i] != a[i + 1]) 
		{
			for (int j = i + 2; j < siz; j++)
				if (a[j] == a[i])
                    return;
		}
	}
	cnt++; 
}