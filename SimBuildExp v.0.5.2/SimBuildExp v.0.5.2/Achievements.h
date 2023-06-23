class Achievements
{
private:
	int Steps;
	int Placed_Buildings;
	int Resources_Collected;
	int Tresaure_Collected;
public:
	auto set_pb(int pb)
	{
		Placed_Buildings = pb;
	}
	auto get_pb()
	{
		return Placed_Buildings;
	}
	auto set_st(int st)
	{
		Steps = st;
	}
	auto get_st()
	{
		return Steps;
	}
	auto set_rc(int rc)
	{
		Resources_Collected = rc;
	}
	auto get_rc()
	{
		return Resources_Collected;
	}
	auto set_tc(int tc)
	{
		Tresaure_Collected = tc;
	}
	auto get_tc()
	{
		return Tresaure_Collected;
	}
	Achievements(int ste, int plb, int rcc, int tcc)
	{
		Steps = ste;
		Placed_Buildings = plb;
		Resources_Collected = rcc;
		Tresaure_Collected = tcc;

	}
};