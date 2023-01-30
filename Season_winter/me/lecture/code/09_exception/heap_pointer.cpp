/// 포인터와 힙 메모리, 주소 찍기

#include <iostream>
using namespace std;

int* b(){
    int* bp = new int; /// 힙에 동적할당, p가 끝나면 딜리트해줘야함
    *bp = 11;
    cout << bp << ":" << *bp << "(" << &bp << ")"<< "\n";
    return bp; /// 힙 주소 전달
    /// p의 주소 : p가 가르키는 값 (p의 메모리 주소)
}

void a(){
    int* ap = b();
    cout << *ap << "\n"; /// b함수에서 할당한 힙 메모리 주소를 넘겨받음 - b의 리턴타입이 void일때는 오류(int* 로 수정)

    delete ap; /// 메모리 해제
    ap = nullptr;
}

int main(){
    b();
}