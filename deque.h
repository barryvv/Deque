#include<string>
#include<iostream>
using namespace std;
struct node
{
	string urlname;
	string url;
	node *next;
	node *last;
};
class list
{
	node *head;
	node *tail;
	int n;
public:
	list();
	void push_back(string urlname,string url);
	void push_front(string urlname, string url);
	void pop_back();
	void pop_front();
	int  size();
	node *front();
	node *back();
	void find(string urlname);
	int  empty();
	void clear();
	void print();


	
};

class deque
{

public:
	list temp;
	void push_back(string urlname, string url);
	void push_front(string urlname, string url);
	void pop_back();
	void pop_front();
	int  size();
	void front();
	void back();
	void find(string urlname);
	int  empty();
	void clear();
	void print();
	void exit();

};

