#include <iostream>
#include <cstdlib>
#include <ctime>

enum dyscypliny
{
	bieganie = 1,
	jezdziectwo,
	kolarstwo,
	plywanie,
	rzut_oszczepem,
	skok_w_dal,
	wspinaczka,
	zapasy
};

int main()
{
	auto triathlon = bieganie|kolarstwo|plywanie;

	std::cout << triathlon << "\n";
	return 0;
}
