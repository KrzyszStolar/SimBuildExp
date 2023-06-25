#include "Map.h"

vector<vector<char>> Map::map_generator(int seed, vector<vector<char>> map)
{
    int i = 10;
    while (i < 390)
    {
        //generacja mapy, kod jest œredni, ale dzia³a 
        for (int n = 7; n = n + 21; n < 390)
        {
            if (n + i < 390)
            {
                map[seed + i + n - 1][seed + i] = 'T';
                map[seed + i + n - 2][seed + i] = 'T';
                map[seed + i + n + 1][seed + i] = 'T';
                map[seed + i + n][seed + i - 1] = 'T';
                map[seed + i + n][seed + i - 2] = 'T';
                map[seed + i + n][seed + i + 1] = 'T';
                map[seed + i - 1 + n][seed + i - 1] = 'T';
                map[seed + i + 1 + n][seed + i + 1] = 'T';
                map[seed + i - 1 + n][seed + i + 2] = 'T';
                map[seed + i - 1 + n][seed + i - 2] = 'T';
                map[seed + i + 3 + n][seed + i - 2] = 'T';
                map[seed + i - 4 + n][seed + i + 7] = 'T';
                map[seed + i - 5 + n][seed + i + 7] = 'T';
                map[seed + i + n][seed + i + 4] = 'T';
                map[seed + i - 2 + n][seed + i + 5] = 'T';
                map[seed + i + 1 + n][seed + i - 6] = 'T';
                map[seed + 7 + i - 1 + n][seed + i] = 'R';
                map[seed + 7 + i - 2 + n][seed + i] = 'R';
                map[seed + 7 + i + 1 + n][seed + i] = 'R';
                map[seed + 7 + i + n][seed + i - 1] = 'R';
                map[seed + 7 + i + n][seed + i - 2] = 'R';
                map[seed + 7 + i + n][seed + i + 1] = 'R';
                map[seed + 7 + i - 1 + n][seed + i - 1] = 'R';
                map[seed + 7 + i + 1 + n][seed + i + 1] = 'R';
                map[seed + 7 + i - 1 + n][seed + i + 2] = 'R';
                map[seed + 7 + i - 1 + n][seed + i - 2] = 'R';
                map[seed + 7 + i + 3 + n][seed + i - 2] = 'R';
                map[seed + 7 + i - 4 + n][seed + i + 7] = 'R';
                map[seed + 7 + i - 5 + n][seed + i + 7] = 'R';
                map[seed + 7 + i + n][seed + i + 4] = 'R';
                map[seed + 7 + i - 2 + n][seed + i + 5] = 'R';
                map[seed + 7 + i + 1 + n][seed + i - 6] = 'R';
            }
            else
            {
                break;
            }
        }
        i = i + 13;

    }
    return map;
}
void Map::show_map(vector<vector<char>> matrix, int s_row, int e_row, int s_col, int e_col)
{
    {
        for (int i = s_row; i < e_row; i++)
        {
            for (int k = s_col; k < e_col; k++)
            {
                cout << matrix[i][k];
                cout << " ";
                if (k == e_col - 1)
                {
                    cout << "\n" << endl;
                }
            }
        }
    }
}
