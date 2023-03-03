#include <iostream>
#include <random> /// random_device, mt19937
#include <fstream> /// ofstream uniform.csv
#include <map> /// STL key, value pair
#include <functional> /// bind

using namespace std;

int main(){
    random_device rd;
    mt19937 engine(rd());
    uniform_int_distribution<> distrib(1,99);
    auto gen = bind(distrib, engine);
    map<int, int> m;

    for(unsigned int i=0; i < 1'000'000; ++i){ /// 난수가 모든 방에 고르게 저장됨(품질이 좋음)
        int r = gen(); /// 1~99 사이 난수가 발생하여 r에 저장, r == 7이면
        ++(m[r]); /// ++(m[7]), m의 7번방이 ++이 되는 것
    }
    ofstream of("uniform.csv");
    for(unsigned int i=1; i <= 99; ++i){
        of << i << "," << m[i] << '\n';
    }

    return 0;

}
