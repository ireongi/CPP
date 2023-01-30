#include <iostream>
#include <random> /// random_device, mt19937
#include <fstream> /// ofstream uniform.csv
#include <map> /// STL key, value pair
#include <functional> /// bind

using namespace std;

int main(){
    random_device rd;
    mt19937 engine(rd());
    normal_distribution<double> distrib(50, 10); /// 방마다 분포가 고르지 않게 함
    auto gen = bind(distrib, engine);
    map<int, int> m;

    for(unsigned int i=0; i < 1'000'000; ++i){
        int r = static_cast<int>(gen()); /// 묵시보다 명시가 좋음 <int>
        ++(m[r]);
    }
    ofstream of("normal.csv"); ///csv : comma separate value
    for(unsigned int i=1; i <= 99; ++i){
        of << i << "," << m[i] << '\n';
    }

    return 0;

}
