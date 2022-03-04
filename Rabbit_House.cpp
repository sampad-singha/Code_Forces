#include <bits/stdc++.h>
using namespace std;
struct index
{
    int row;
    int col;
};

int main()
{
    
    int t;
    cin >> t;
    for (int l = 0; l < t; l++)
    {

        int r, c;
        cin >> r >> c;
        int room[r][c], cRoom[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> room[i][j];
                cRoom[i][j] = room[i][j];
            }
        }
        // cout << "NOOOOO!";
        index indx[10000];
        int temp = cRoom[0][0];
        int itr = 0, count = 0;
        for (int k = 0; k < r * c; k++)
        {
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    if (cRoom[i][j] >= temp && cRoom[i][j] >=0)
                    {
                        temp = cRoom[i][j];
                        indx[k].row = i;
                        indx[k].col = j;
                    }
                }
            }
            temp=-1;
            // cout<< indx[k].row <<" " <<indx[k].col<<endl;
            cRoom[indx[k].row][indx[k].col] = -1;
            int row = indx[k].row;
            int col = indx[k].col;
            if (row != 0)
            {
                count += (room[row][col] - room[row - 1][col] - 1);
                room[row - 1][col] = room[row][col] - 1;
            }
            if (row != (r - 1))
            {
                count += (room[row][col] - room[row + 1][col] - 1);
                room[row + 1][col] = room[row][col] - 1;
            }
            if (col != 0)
            {
                count += (room[row][col] - room[row][col - 1] - 1);
                room[row][col - 1] = room[row][col] - 1;
            }
            if (col != (c - 1))
            {
                count += (room[row][col] - room[row][col + 1] - 1);
                room[row][col + 1] = room[row][col] - 1;
            }
        }
        // cout<<indx[0].row<<" "<<indx[0].col<<endl;
        // for (int i = 0; i < r * c; i++)
        // {
            
        // }
        cout << "Case #"<<l<<": "<<count<<endl;
    }
    return 0;
}