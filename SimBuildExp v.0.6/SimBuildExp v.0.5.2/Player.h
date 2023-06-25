class Player
{
private:
	int Col;
	int Row;
	char Sprite;
public:
	auto set_col(int column)
	{
		Col = column;
	}
	auto get_col()
	{
		return Col;
	}
	auto set_row(int rowrow)
	{
		Row = rowrow;
	}
	auto get_row()
	{
		return Row;
	}
	auto set_spr(int sprite)
	{
		Sprite = sprite;
	}
	auto get_spr()
	{
		return Sprite;
	}
	Player(int row, int col, char spri)
	{
		Row = row;
		Col = col;
		Sprite = spri;

	}
};