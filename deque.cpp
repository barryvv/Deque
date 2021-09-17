#include "deque.h"
list::list()
{
	head = NULL;
	tail = NULL;
	n = 0;

}

void list::push_back(string urlname, string url)
{
	node *temp = new node;
	temp->urlname = urlname;
	temp->url = url;
	if (head == NULL)
	{
		head = new node;
		head->next = temp;
		head->last = NULL;
		temp->last = head;
		tail = temp;
		tail->next = NULL;

	}
	else
	{
		tail->next = temp;
		temp->last = tail;
		tail = temp;
		tail->next = NULL;
	}

	n++;
}

void list::push_front(string urlname, string url)
{
	node *temp = new node;
	temp->urlname = urlname;
	temp->url = url;
	if (head == NULL)
	{
		head = new node;
		head->next = temp;
		head->last = NULL;
		temp->last = head;
		tail = temp;
	}
	else
	{
		temp->next = head->next;
		head->next->last = temp;
		head->next = temp;
		temp->last = head;
	}
	n++;
}

void list::pop_back()
{

	if (n ==1)
	{
		delete tail;
		delete head;
		tail = NULL;
		head = NULL;
		n = 0;
	}
	else if (n > 1)
	{
		node *temp = tail;
		tail = tail->last;
		tail->next = NULL;
		delete temp;
		n--;
	}
}

void list::pop_front()
{
	if (n == 1)
	{
		delete tail;
		delete head;
		head = NULL;
		tail = NULL;
		n = 0;
	}
	else if (n > 1)
	{
		node *temp = head->next;
		head->next = head->next->next;
		head->next->last = head;
		head->last = NULL;
		n--;
		delete temp;
	}
}

int list::size()
{
	return n;
}

node *list::front()
{
	return head->next;
}

node * list::back()
{
	return tail;
}

void list::find(string urlname)
{
	if (n > 0)
	{
		node *temp = tail;
		while (temp != NULL && temp != head)
		{
			if (temp->urlname == urlname)
			{
				cout << "found " << temp->urlname << " " << temp->url << endl;
				return;
			}
			temp = temp->last;

		}
	}
	cout << "not found " << urlname << endl;
}

int list::empty()
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void list::clear()
{
	if (n > 0)
	{
		node *temp = tail;
		while (temp != NULL && temp != head)
		{
			node *temp1 = temp;
			temp = temp->last;
			delete temp1;
			n--;
		}
		delete head;
		head = NULL;
		tail = NULL;

	}
}

void list::print()
{
	if (n > 0)
	{
		node *temp = tail;
		while (temp != NULL && temp!=head)
		{
			cout << temp->urlname << " "<<temp->url<<endl;
			temp = temp->last;
		}
	}
}

void deque::push_back(string urlname, string url)
{
	temp.push_back(urlname, url);
	cout << "success" << endl;
}

void deque::push_front(string urlname, string url)
{
	temp.push_front(urlname, url);
	cout << "success" << endl;
}

void deque::pop_back()
{
	if (temp.empty() == 1)
	{
		cout << "failure"<<endl;
	}
	else
	{
		temp.pop_back();
		cout << "success" << endl;
	}
}

void deque::pop_front()
{
	if (temp.empty() == 1)
	{
		cout << "failure" << endl;
	}
	else
	{
		temp.pop_front();
		cout << "success" << endl;
	}
}

int deque::size()
{
	cout << "size is " << temp.size()<<endl;
	return 0;
}

void deque::front()
{
	if (temp.empty() == 1)
	{
		cout << "failure" << endl;
	}
	else
	{
		cout << "front is " << temp.front()->urlname << " " << temp.front()->url << endl;
	}
}

void deque::back()
{
	if (temp.empty() == 1)
	{
		cout << "failure" << endl;
	}
	else
	{
		cout << "back is " << temp.back()->urlname << " " << temp.back()->url << endl;
	}
}

void deque::find(string urlname)
{
	temp.find(urlname);
}

int deque::empty()
{
	if (temp.empty() == 1)
	{
		cout << "empty 1" << endl;
	}
	else
	{
		cout << "empty 0" << endl;
	}
	return 0;
}

void deque::clear()
{
	temp.clear();
	cout << "success" << endl;
}

void deque::print()
{
	temp.print();
}

void deque::exit()
{
	temp.clear();
}
