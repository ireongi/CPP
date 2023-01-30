//#include <iostream>
//#include <cassert>
//using namespace std;
//
//template <typename T>
//class Stack
//{
//private:
//	T* ptr;
//	int capacity;
//	int size;
//public:
//	Stack(int capacity);
//	~Stack();
//	void push(const T& element);
//	T pop();
//};
//
//// 생성자
//template<typename T>
//Stack<T>::Stack(int cap)
//	: capacity(cap), size(0)
//{
//	ptr = new T[capacity];
//}
//// 소멸자
//template<typename T>
//Stack<T>::~Stack()
//{
//	delete[] ptr;
//}
//// push 함수
//template<typename T>
//void Stack<T>::push(const T& element)
//{
//	if (size < capacity)
//	{
//		ptr[size] = element;
//		size++;
//	}
//	else
//	{
//		cout << "스택이 꽉 차서 삽입할 수 없습니다." << endl;
//		assert(false);
//	}
//}
//// pop 함수
//template<typename T>
//T Stack<T>::pop()
//{
//	if (size > 0)
//	{
//		T temp = ptr[size - 1];
//		size--;
//		return temp;
//	}
//	else
//	{
//		cout << "스택이 비어서 삭제할 수 없습니다." << endl;
//		assert(false);
//	}
//}
//int main()
//{
//	Stack<string> s1(5);
//	s1.push("김인하");
//	s1.push("이인하");
//	s1.push("박인하");
//	s1.push("최인하");
//	s1.push("정인하");
//	//s1.push("고인하");
//
//	cout << s1.pop() << endl;
//
//	Stack<int> stack(3);
//	stack.push(5);
//	stack.push(6);
//	stack.push(7);
//	cout << stack.pop() << endl;
//	stack.push(3);
//	cout << stack.pop() << endl;
//	cout << stack.pop() << endl;
//	cout << stack.pop() << endl;
//	//cout << stack.pop(); // empty
//	return 0;
//}