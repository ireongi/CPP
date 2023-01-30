//#include <random> // random_device, mt19937
//#include <iostream>
//#include <fstream> // ofstream uniform.csv
//#include <map> //  STL key, value pair
//#include <functional> // bind
//using namespace std;
//int main()
//{
//    random_device rd;
//    mt19937 engine(rd());
//    normal_distribution<double> distrib(50, 10);
//    auto gen = bind(distrib, engine);
//    map<int, int> m;
//
//    for (unsigned int i = 0; i < 1'000'000; ++i) {
//        int r = static_cast<int>(gen());
//        ++(m[r]); 
//    }
//    ofstream of("normal.csv");
//    for (unsigned int i = 1; i <= 99; ++i) {
//        of << i << "," << m[i] << '\n';
//    }
//    return 0;
//}
//
//
////#include <random> // random_device, mt19937
////#include <iostream>
////#include <fstream> // ofstream uniform.csv
////#include <map> //  STL key, value pair
////#include <functional> // bind
////using namespace std;
////int main()
////{
////    random_device rd;
////    mt19937 engine(rd()); 
////    uniform_int_distribution<int> distrib(1, 99);
////    auto gen = bind(distrib, engine);
////    map<int, int> m;
////
////    for (unsigned int i = 0; i < 1'000'000; ++i) {
////        int r = gen(); // r == 7
////        ++(m[r]); // ++(m[7])
////    }
////    ofstream of("uniform.csv");
////    for (unsigned int i = 1; i <=99; ++i) {
////        of << i << "," << m[i] << '\n';
////    }        
////    return 0;
////}
