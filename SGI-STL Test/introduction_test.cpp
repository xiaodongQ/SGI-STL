#include <iostream>
using namespace std;

template <class T>
struct plus {
    T operator() (const T& x, const T& y) const {
        return x + y;
    }    
};

template <class T>
struct minus {
    T operator() (const T& x, const T& y) const {
        return x - y;
    }    
};

int main()
{
    // 以下产生仿函数对象
    ::plus<int> plusobj;
    ::minus<int> minusobj;
    
    cout << plusobj(3, 5) << endl;
    cout << minusobj(3, 5) << endl;
    
    // 仿函数的临时对象
    cout << ::plus<int>()(43, 50) << endl;
    cout << ::minus<int>()(43, 50) << endl;
    
    return 0;
}