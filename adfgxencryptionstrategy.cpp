#include "adfgxencryptionstrategy.h"

ADFGXEncryptionStrategy::ADFGXEncryptionStrategy()
{
	mapArray['b'] = "AA";
	mapArray['d'] = "DA";
	mapArray['q'] = "FA";
	mapArray['g'] = "GA";
	mapArray['m'] = "XA";
	mapArray['t'] = "AD";
	mapArray['h'] = "DD";
	mapArray['f'] = "FD";
	mapArray['i'] = "GD";
	mapArray['r'] = "XD";
	mapArray['a'] = "AF";
	mapArray['o'] = "DF";
	mapArray['v'] = "FF";
	mapArray['c'] = "GF";
	mapArray['e'] = "XF";
	mapArray['l'] = "AG";
	mapArray['z'] = "DG";
	mapArray['s'] = "FG";
	mapArray['u'] = "GG";
	mapArray['w'] = "XG";
	mapArray['p'] = "AX";
	mapArray['k'] = "DX";
	mapArray['n'] = "FX";
	mapArray['x'] = "GX";
	mapArray['y'] = "XX";
}
std::string ADFGXEncryptionStrategy::encrypt(const char ch) const
{
	return mapArray.at(ch);
}
