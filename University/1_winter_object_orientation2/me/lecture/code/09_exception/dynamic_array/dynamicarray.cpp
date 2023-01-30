/// 동적배열
#include <iostream>
#include "dynamicarray.h"
using namespace std;

/// 3) re throw 하기(try에서 쓰고 catch에서 받아줌)
Dynamicarray :: Dynamicarray(int arraySize) {
    try {
        arr = new int[arraySize];
        size = arraySize;
        //throw 404;         ///예외를 던짐
    }catch(...){
        cout << "생성자 안쪽에서 예외발생\n";
        delete[] arr;
        arr = nullptr;  /// 동적할당 깔끔하게 삭제하고 밑에 throw를 써서 메인으로 가져감

        throw;
    }
}

//Dynamicarray :: Dynamicarray(int arraySize) {
//    arr = new int[arraySize]; /// 동적 할당(넘겨받은 사이즈만큼 포인터가 넘겨받음)
//    size = arraySize; /// 배열 길이
//}

/// 이제 해제하는게 필요함(동적할당과 세트임)
Dynamicarray :: ~Dynamicarray() {
    delete[] arr; /// 힙 메모리 해제
    arr = nullptr;
}
void Dynamicarray :: setAt(int index, int value){
    if(index < 0 || index > size)
        throw 3938;     /// try~catch
    arr[index] = value;

}

//bool Dynamicarray :: setAt(int index, int value){
//    if(index < 0 || index > size)                   ///bool 타입으로 헤더파일까지 수정 후 traditional 예외처리
//        return false;
//    arr[index] = value; /// 힙에 value 저장
//    return true;
//}

int Dynamicarray :: getAt(int index) const{
    if(index < 0 || index > size)
        throw 3938;     /// try~catch
    return arr[index]; /// 힙에 저장된 값 loading

}
int Dynamicarray :: getSize() const{
    return size; /// 배열 크기 리턴
}

