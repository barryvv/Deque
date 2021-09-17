#include"deque.h"
int main()
{
	string choice;
	cin >> choice;
	deque temp;
	while (choice != "exit")
	{
		if (choice == "push_front")
		{
			string a, b;
			cin >> a >> b;
			string c(a.substr(1, a.size() - 2));
			string d(b.substr(1, b.size() - 2));
			temp.push_front(c, d);
		}
		else if (choice == "push_back")
		{
			string a, b;
			cin >> a >> b;
			string c(a.substr(1, a.size() - 2));
			string d(b.substr(1, b.size() - 2));
			temp.push_back(c, d);
		}
		else if (choice == "pop_front")
		{
			temp.pop_front();
		}
		else if (choice == "pop_back")
		{
			temp.pop_back();
		}
		else if (choice == "size")
		{
			temp.size();
		}
		else if (choice == "front")
		{
			temp.front();
		}
		else if (choice == "back")
		{
			temp.back();
		}
		else if (choice == "empty")
		{
			temp.empty();
		}
		else if (choice == "clear")
		{
			temp.clear();
		}
		else if (choice == "find")
		{
			string a;
			cin >> a;
			string b(a.substr(1, a.size() - 2));
			temp.find(b);

		}
		else if (choice == "print")
		{
			temp.print();
		}
		else if (choice == "exit")
		{
			temp.exit();
		}
		cin >> choice;
	}
}