#include "invoice.h"

int main()
{
    // Product 객체 인스턴스화
    Product product1("Table", 150.00);
    Product product2("Chair", 80.00);
    Product product3("Bed", 900.00);
    // Invoice 객체를 인스턴스화하고 Product 객체를 사용해 출력
    Invoice invoice(1001);
    invoice.add(1, product1);
    invoice.add(2, product3);
    invoice.add(6, product2);
    invoice.print();
    return 0;
}