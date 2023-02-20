#include<iostream>
using namespace std;
int ssize;
int a[10000];
void push(int);
int pop();
int size();
int top();
int empty();

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	int n;
	cin >> n;
	while (n--) {
		string s;
		cin >> s;
		if (s == "push") {
			int n;
			cin >> n;
			push(n);
		}
		if (s == "pop") {
			cout << pop() << '\n';
		}
		if (s== "top") {
			cout << top() << '\n';
		}
		if (s == "size") {
			cout << size() << '\n';
		}
		if (s == "empty") {
			cout << empty() << '\n';
		}
	}
}

void push(int x) {
	a[ssize] = x;
	ssize++;
}
int pop() {
	if (ssize == 0) return -1;
	int t = a[ssize - 1];
	ssize--;
	return t;
}
int size() {
	return ssize;
}
int top() {
	if (ssize == 0) return -1;
	return a[ssize - 1];
}
int empty() {
	if (ssize == 0) return 1;
	else return 0;
}