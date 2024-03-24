#include <iostream>

using namespace std;

enum ForeColor {
    Default = 0,
    Black = 30,
    Red = 31,
    Green = 32,
    Yellow = 33,
    Blue = 34,
    Magenta = 35,
    Cyan = 36,
    White = 37
};

void draw_block(int code)
{
    if (code & 1)
        cout << "\x1b[0m" << "■";
    if (code & 2)
        cout << "\x1b[031m" << "■";
    if (code & 4)
        cout << "\x1b[032m" << "■";
    if (code & 8)
        cout << "\x1b[033m" << "■";
    if (code & 16)
        cout << "\x1b[034m" << "■";
    if (code & 32)
        cout << "\x1b[035m" << "■";

    cout << endl;
}

int main()
{
    bool on = true;
    bool on2 = true;
    int code = 0;

    while (on)
    {
        if (on2)
        {
            cout << "화면에 그림을 그리는 프로그램 입니다." << endl;
            cout << "학번 : 202034029" << endl;
            cout << "이름 : 엄지훈" << endl;
            on2 = false;
        }
        cout << "화면에 그릴 물체코드를 입력하세요(코드 : 32이하 수 / 종료 : 64) : ";
        cin >> code;
        if (code == 64)
        {
            on = false;
            cout << "프로그램을 종료합니다.";
        }
        else
        {
            draw_block(code);
            cout << "\x1b[0m";
        }
    }
    
}