#include <iostream>
#include<string>
using namespace std;
 
int main()
{
    int A[10001], B[10001], sum[10001] = { 0 };
    string str1, str2, temp;
 
    cin >> str1 >> str2;
    if (str2.length() > str1.length())
    {
        temp = str1;
        str1 = str2;
        str2 = temp;
    }
 
    int A_len = str1.length(), B_len = str2.length();
    for (int i = 0; i < A_len; i++)
        A[i] = str1[i] - '0';
    for (int i = 0; i < B_len; i++)
        B[i] = str2[i] - '0';
 
    for (int i = A_len - 1; i >= 0; i--)
    {
        sum[i] += A[i];
        sum[i + A_len - B_len] += B[i];
        for (int j = i + A_len - B_len; j > 0; j--) {
            if (sum[j] >= 10)
            {
                sum[j] %= 10;
                sum[j - 1] += 1;
            }
        }
    }
 
    for (int i = 0; i < A_len; i++)
        cout << sum[i];
 
    return 0;
}
 
