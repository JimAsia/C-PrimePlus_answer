#ifndef WINES_H_
#define WINES_H_
#include <string>
#include <valarray>
template <class T1, class T2>
class Pair
{
private:
    T1 a;
    T2 b;
public:
    T1& First();
    T2& Second();
    T1 First() const { return a; }
    T2 Second() const { return b; }
    Pair(const T1& aval, const T2& bval) : a(aval), b(bval) { }
    Pair() {}
};

template<class T1, class T2>
T1& Pair<T1, T2>::First()
{
    return a;
}
template<class T1, class T2>
T2& Pair<T1, T2>::Second()
{
    return b;
}

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine: private PairArray, private std::string
{
private:
    int year;
public:
    Wine();
    Wine(const char* l, int y, const int ye[], const int bot[]);
    Wine(const char* l, int y);
    void GetBottles();
    void Show() const;
    const std::string& Label();
    int sum();
    // PairArray& operator=(PairArray(ArrayInt(), ArrayInt()));

};


#endif