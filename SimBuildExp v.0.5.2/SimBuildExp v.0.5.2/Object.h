class Object
{
private:
	char Sprite;
	int Amount;
public:
	auto set_am(int ami)
	{
		Amount = ami;
	}
	auto get_am()
	{
		return Amount;
	}
	auto set_spr(int sprite)
	{
		Sprite = sprite;
	}
	auto get_spr()
	{
		return Sprite;
	}
	Object(char spri, int amo)
	{
		Sprite = spri;
		Amount = amo;
	}
};