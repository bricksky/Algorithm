#include <iostream>
using namespace std;

int main()
{
    int N = 0;

    cin >> N;

    int sum = 0;
    int arr[100] = {0};

    // N개의 숫자를 공백없이 입력받음
    for (int i = 0; i < N; i++)
    {
        char c;
        cin >> c;
        arr[i] = c - '0';
        sum += arr[i];
    }

    cout << sum << endl;
    return 0;
}

// 입력받은 문자는 char 타입으로 저장되기 때문에, 이를 정수로 변환하려면 아스키 코드 값을 이용해야 합니다.
// 문자 '0'을 숫자 0으로 변환하려면, 문자 '0'의 아스키 코드 값을 빼주면 됩니다.
// 예를 들어, 문자 '1'의 아스키 코드 값은 49이므로, 문자 '1'에서 '0'의 아스키 코드 값을 빼면 1이라는 정수 값이 나오게 됩니다.

// 따라서, 위 코드에서는 입력받은 문자 c에서 '0'의 아스키 코드 값을 빼서, 해당 문자에 대응하는 숫자를 구하고,
// 이를 배열에 저장하는 방식으로 공백없이 입력받은 N개의 숫자를 저장하고 있습니다.