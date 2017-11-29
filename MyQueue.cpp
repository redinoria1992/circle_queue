// MyQueue.cpp: 主项目文件。
#include "MyQueue.h"
#include "stdafx.h"

#include <iostream>

using namespace std;

MyQueue::MyQueue(int queueCapacity)
{
	m_iQueueCapacity = queueCapacity;
	m_iHead = 0;
	m_iTail = 0;
	m_iQueueLen = 0;
	m_pQueue = new int[m_iQueueCapacity];
}

MyQueue::~MyQueue()
{
	delete []m_pQueue;
	m_pQueue = NULL;
}

void MyQueue::ClearQueue()
{
	m_iHead = 0;
	m_iTail = 0;
	m_iQueueLen =0;
}

bool MyQueue::QueueEmpty() const
{
	if(m_iQueueLen)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool MyQueue::QueueFull() const
{
	if(m_iQueueLen == m_iQueueCapacity)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool MyQueue::EnQueue(int element)
{
	if(QueueFull())
	{
		return false;
	}
	else
	{
		m_pQueue[m_iTail] = element;
		m_iTail++;
		m_iTail = m_iTail%m_iQueueCapacity;
		m_iQueueLen++;
		return true;
	}
}

bool MyQueue::DeQueue(int &element)
{
	if(QueueEmpty())
	{
		return false;
	}
	else
	{
		element = m_pQueue[m_iHead];
		m_iHead++;
		m_iHead = m_iHead%m_iQueueCapacity;
		m_iQueueLen--;
		return true;
	}
}


int MyQueue::QueueLength() const
{
	return m_iQueueLen;
}

void MyQueue::QueueTraverse()
{
	for(int i= m_iHead; i<(m_iQueueLen + m_iHead);i++)
	{
		cout<<m_pQueue[i%m_iQueueCapacity]<<endl;
	}
}

