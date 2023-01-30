///동적배열(dynamic array)

#ifndef ME_DYNAMICARRAY_H
#define ME_DYNAMICARRAY_H


class Dynamicarray {
protected:
    int* arr; /// 동적할당된 힙메모리 번지 저장용
    int size; /// 배열의 길이

public:
    Dynamicarray(int arraySize);
    virtual ~Dynamicarray(); /// 소멸자 쓸때 꼭 virtual 쓰는 습관을 들여라!!!!!!!! 가상공간 만들 때 메모리 할당 누수 막기위해
                            /// 부모객체 사라졌을때 자식객체만 떠다닐수있기때

//    bool setAt(int index, int value);
    void setAt(int index, int value);
    int getAt(int index) const;
    int getSize() const;

};


#endif //ME_DYNAMICARRAY_H
