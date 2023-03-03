#include "dynamicarray.h"

DynamicArray::DynamicArray(int arraySize) {
    try {
        arr = new int[arraySize]; // 힙에 동적할당
        size = arraySize; // 배열 길이
        //throw 404;
        //throw MemoryException(arraySize);
    }catch(...) {
        cout << "생성자 안쪽에서 예외발생\n";
        delete[] arr; // 힙 메모리 해제
        arr = nullptr;

        throw;
    }
}
DynamicArray::~DynamicArray() {
    delete[] arr; // 힙 메모리 해제
    arr = nullptr;
}
//bool DynamicArray::setAt(int index, int value) {
//	if (index < 0 || index >= size)
//		return false;
//	arr[index] = value; // 힙에 value 저장
//	return true;
//}
void DynamicArray::setAt(int index, int value) {
    if (index < 0 || index >= size)
        //throw 4885;
        throw OutOfRangeException(index);
    arr[index] = value; // 힙에 value 저장
}
int DynamicArray::getAt(int index) const {
    if (index < 0 || index >= size)
        //throw -1;
        throw OutOfRangeException(index);
    return arr[index]; // 힙에 저장된 값 loading
}
int DynamicArray::getSize() const {
    return size; // 배열 크기 리턴
}
