#include <vector>
#include <iostream>
#include <string>


using std::vector;
using std::cout;
using std::endl;
using std::string;

class Map
{
	public:
	vector<vector<char>>map_generator(int seed, vector<vector<char>> map);
	void show_map(vector<vector<char>> matrix, int s_row, int e_row, int s_col, int e_col);
	
};
