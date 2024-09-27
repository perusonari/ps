#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

/*
    *문제 번호 : 3009

    *문제명 : 네 번째 점 

    *문제 설명 : 세 점이 주어졌을 때, 축에 평행한 직사각형을 만들기 위해서 필요한 네 번째 점을 찾는 프로그램을 작성하시오.

    *입력 : 세 점의 좌표가 한 줄에 하나씩 주어진다. 좌표는 1보다 크거나 같고, 1000보다 작거나 같은 정수이다.

    *출력 : 직사각형의 네 번째 점의 좌표를 출력한다.

*/
int main(){
    int x1, y1, x2, y2, x3, y3;

    cin >> x1>> y1>> x2>> y2>> x3>> y3;

    //* 1개만 존재하는 
    vector<int> arrX = {x1, x2, x3};
    vector<int> arrY = {y1, y2, y3};
    for(const auto e : arrX){
        if(count(arrX.begin(), arrX.end(), e) == 1) cout << e << " ";
    }

    for(const auto e : arrY){
        if(count(arrY.begin(), arrY.end(), e) == 1) cout << e << " ";
    }

}