#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//*문제 번호 : 11718 - 그대로 출력하기
//*문제 설명 : 입력 받은 대로 출력하는 프로그램을 작성하시오.

//입력 : 
//입력이 주어진다. 입력은 최대 100줄로 이루어져 있고, 알파벳 소문자, 대문자, 공백, 숫자로만 이루어져 있다. 
//각 줄은 100글자를 넘지 않으며, 빈 줄은 주어지지 않는다. 
//또, 각 줄은 공백으로 시작하지 않고, 공백으로 끝나지 않는다.

//출력 : 
//입력받은 그대로 출력한다.

int main()
{
    string str;
    while(getline(cin, str)){ //cin을 받아서 str에 넣는 역할. eof를 만나면 false를 반환한다.
        cout << str << endl; //출력만 곧바로 이루어지면 채점에는 영향이 없다.
    }

    return 0;
}