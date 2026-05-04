#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int n, k;
int schedule[101];
int multiTap[101] = { 0, };

int main() 
{
    int answer = 0;
    cin >> n >> k;
    for (int i = 0; i < k; i++) 
        cin >> schedule[i];

    for (int i = 0; i < k; i++)
    {
        bool flag = false;
        for (int j = 0; j < n; j++)
        {
            if (multiTap[j] == schedule[i])
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            continue;

        for (int j = 0; j < n; j++)
        {
            if (multiTap[j] == 0)
            {
                multiTap[j] = schedule[i];
                flag = true;
                break;
            }
        }
        if (flag == true)
            continue;

        int last_need = -1; 
        int index = -1; 
        for (int j = 0; j < n; j++)
        {
            int tmp = 0;
            for (int t = i+1;t < k; t++)
            {
                if (schedule[t] == multiTap[j])
                {
                    break;
                }
                tmp++;
            }
            if (tmp > last_need)
            {
                last_need = tmp;
                index = j;
            }
        }

        multiTap[index] = schedule[i];
        answer++;

    }
    cout << answer << endl;
}
