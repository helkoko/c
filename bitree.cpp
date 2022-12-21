#include <iostream>
#include <string>
using namespace std;

class arrqueue
{
private:
	//声明基本参数
	int maxSize;// 表示数组的最大容量
	int front;//队列头
	int rear;//队列尾
	int *arr;//用于存放数据，模拟队列
	int length;//用于记录元素个数
public:
//队列构造函数，确定数组大小，为数组分配内存
//初始化队列首尾元素
arrqueue(int arrMaxSize){
		maxSize = arrMaxSize;
		arr = new int[maxSize];
		length = 0;
		front = -1;//指向队列头部，分析出front是指向队列头的前一个位置.
		rear = -1;//指向队列尾，指向队列尾的数据(即就是队列最后一个数据)
	};
//析构函数 释放内存
~arrqueue() {
		delete arr;
	}
	
bool isFull() {
		return rear == maxSize - 1;
	}
bool isEmpty() {
		return rear == front;
	}
void addQueue(int n) {
		if (isFull()) {
			cout << "队列满，不能加入数据~" << endl;
			return;
		}
		rear++;
		arr[rear] = n;
		length++;
	}
int getQueue() {
		if (isEmpty()) {
			throw "队列空，不能取数据";
		}
		front++;
		length--;
		int value = arr[front];
		return value;
	}
int getLength() {
		return length;
	}
void showQueue() {
		if (isEmpty()) {
			cout << "队列空的，没有数据~~" << endl;
			return;
		}
		for (int i = front + 1; i < front + 1 + getLength(); i++) {
			cout << "arr["<<i<<"] = " << arr[i] << endl;
		}
	}
int headQueue() {
		// 判断
		if (isEmpty()) {
			throw "队列空的，没有数据~~";
		}
		return arr[front + 1];
	}

};