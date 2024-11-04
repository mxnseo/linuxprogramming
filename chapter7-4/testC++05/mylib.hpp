#ifndef MYLIB_H
#define MYLIB_H

#include <iostream>
using namespace std;

namespace MINSEO {
    class Color {
        int red, green, blue;
    public:
        Color(int red = 0, int green = 0, int blue = 0);
        Color operator + (Color op2);
        bool operator == (Color fu);
        void show();

        // friend 사용할 경우
        // friend Color operator + (Color op2);
        // friend bool operator == (Color fu);
    };
}
#endif // !MYLIB_H
