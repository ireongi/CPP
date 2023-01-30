#include "dynamicarray.h"
#include "myexception.h"

int main()
{
    try {
        DynamicArray da1(10);

        int a;
        cin >> a;
        da1.setAt(9, a);
        cout <<  da1.getAt(9) << '\n';
        //cout << da1.getAt(13) << '\n'; // 예외발생
        da1.setAt(13, a); // out of range!
        cout << da1.getAt(13) << '\n';
    }
    catch (MyException err) {
        cout << "예외내용 : " << err.description;
        cout << "기타내용 : " << err.codeInfo << '\n';
    }

    //for (int i = 0; i < 10; ++i)
    //    da1.setAt(i, i * i);
    //cout << "da1 사이즈 : " << da1.getSize() << '\n';

    //for (int i = 9; i >=0; --i)        
    //    cout << "da1[" << i << "] = " << da1.getAt(i) << '\n';

    //int a;
    //cin >> a;
    //da1.setAt(7, a);
    //cout << da1.getAt(7) << '\n';

    // Traditional Approach #4
    //if(da1.setAt(7, a))
    //    cout << da1.getAt(7) << '\n';
    return 0;
}