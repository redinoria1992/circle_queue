#include <iostream>
#include <stdlib.h>
#include "MyQueue.h"
#include "stdafx.h"

//实现环形队列
using namespace std;

int main(void)
{
	MyQueue *p = new MyQueue(4);

	p->EnQueue(10);
	p->EnQueue(12);
	p->EnQueue(16);
	p->EnQueue(18);
	p->EnQueue(20);

	int e = 0;
	p->DeQueue(e);
	p->QueueTraverse();

	cout<<endl;
	cout<<e<<endl;


	delete p;
	p=NULL;
	system("pause");
	return 0;
}