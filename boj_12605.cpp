#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n;
	string str;
	string word;
	stack<string> s;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++) {
        int cnt = 0;
		getline(cin, str);
		for (int j = 0; j <= str.size(); j++) {
			if (str[j] == ' '|| j == str.size()) {
				cnt++;
				s.push(word);
				word.clear();
			}
			else {
				word += str[j];
			}
		}
		cout << "Case #" << i + 1 << ": ";
		for (int j = 0; j < cnt; j++) {
			cout << s.top() << ' ';
			s.pop();
		}
		cout << '\n';
	}
}