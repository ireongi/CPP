///**************************************************************
// * Stack 클래스를 사용해보는 애플리케이션 파일                *
// **************************************************************/
//#include <iostream>
//#include <cassert>
//#include <string>
//using namespace std;
//
//template <typename T>
//class Stack
//{
//private:
//    T* ptr;
//    int capacity;
//    int size;
//public:
//    Stack(int capacity);
//    ~Stack();
//    void push(const T& element);
//    T pop();
//};
//// 생성자
//template<typename T>
//Stack<T>::Stack(int cap)
//        : capacity(cap), size(0)
//{
//    ptr = new T[capacity];
//}
//// 소멸자
//template<typename T>
//Stack<T>::~Stack()
//{
//    delete[] ptr;
//}
//// push 함수
//template<typename T>
//void Stack<T>::push(const T& element)
//{
//    if(size < capacity)
//    {
//        ptr[size] = element;
//        size++;
//    }
//    else
//    {
//        cout << "스택이 꽉 차서 삽입할 수 없습니다." << endl;
//        assert(false);
//    }
//}
//// pop 함수
//template<typename T>
//T Stack<T>::pop()
//{
//    if(size > 0)
//    {
//        T temp = ptr[size - 1]; /// 방 사이즈 맞추기
//        size--;
//        return temp;
//    }
//    else
//    {
//        cout << "스택이 비어서 삭제할 수 없습니다." << endl;
//        assert(false);
//    }
//}
//
//int main()
//{
//    Stack<string> s1(5);   /// 동적할당
//    s1.push("가");
//    s1.push("나");
//    s1.push("다");
//    s1.push("라");
//    s1.push("마");
//
//    cout << s1.pop() << "\n";
//    cout << s1.pop() << "\n";
//    cout << s1.pop() << "\n";
//
//    Stack<int> stack(10);
//    stack.push(5);
//    stack.push(6);
//    stack.push(7);
//    cout << stack.pop() << endl;
//    stack.push(3);
//    cout << stack.pop() << endl;
//    cout << stack.pop() << endl;
//    cout << stack.pop() << endl; /// empty - underflow 발생
//    cout << stack.pop();
//    return 0;
//}
//
///// 메모리 누수 방지를 위해 예외처리 사용해볼수있음