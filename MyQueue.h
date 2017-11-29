#ifndef MYQUEUE_H
#define MYQUEUE_H

//���ζ���ʵ��

class MyQueue
{
public:
	MyQueue(int queueCapacity);      //��������
	virtual ~MyQueue;                //ɾ������
	void ClearQueue();               //��ն���
	bool QueueEmpty() const;         //�пն���
	bool QueueFull() const;          //�ж϶����Ƿ���
	int QueueLength() const;         //���г���
	bool EnQueue(int element);       //��Ԫ�����
	bool DeQueue(int &element);      //��Ԫ�س���
	void QueueTraverse();            //��������
private:
	int *m_pQueue;                   //��������ָ��
	int m_iQueueLen;                 //����Ԫ�ظ���
	int m_iQueueCapacity;            //������������
	int m_iHead;
	int m_iTail;
}

#endif
