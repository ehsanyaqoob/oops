#include <iostream>

using namespace std;

class time
{
private:
    int hrs, min, sec;

public:
    time() : hrs(0), min(0), sec(0)
    {
    }
    time(int h, int m, int s) : hrs(h), min(m), sec(s)
    {
    }
    void getTime()const
    {
        cout << hrs << ":" << min << ":" << sec;
    }
    void addtime(time t1, time t2)
    {
        sec = t1.sec + t2.sec;
        if (sec > 59)
        {
            sec = 60;
            min++;
        }
        min += t1.min + t2.min;
        if (min > 59)
        {
            min = 60;
            hrs++;
        }
    }
};

int main()
{
    const time time1(5, 59, 59);
    const time time2(4, 30, 30);
    time time3;
    time3.addtime(time1, time2);

    cout << "time 3===" << endl;
    time3.getTime();
    cout << endl;

    return 0;
}