#include <iostream>
using namespace std;

char arr[50][50];

int numfix(int rowpivot, int colpivot)
{
    int prew, preb = 0;
    int row, col = 0;
  
    row = 0;
    prew = 0;
    preb = 0;
    for (int i = rowpivot; i < rowpivot + 8; i++)
    {
        for (int j = colpivot; j < colpivot + 8; j++)
        {
            if ((row % 2) == (col % 2))
            {
                if (arr[i][j] != 'W')
                {
                    prew++;
                }
            }
            else
            {
                if (arr[i][j] != 'B')
                {
                    prew++;
                }
            }
            col++;
        }
        col = 0;
        row++;
    }

    preb = 64 - prew;

    if (prew >= preb)
        prew = preb;

    return prew;
}

int main(void)
{
    int n, m = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int movrow = n - 8;
    int movcol = m - 8;
    int temp= 64;
    int num = 0;
    for (int i = 0; i <= movrow; i++)
    {
        for (int j = 0; j <= movcol; j++)
        {
            num = numfix(i, j);
            if (temp >= num)
                temp = num;
        }
    }

    cout << temp;
}
