#include"Queue.h"
int main() {
	queue<char> q;
	q.push('A');
	q.push('B');
	q.push('C');
	q.push('D');
	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}