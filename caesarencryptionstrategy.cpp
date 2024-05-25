#include "caesarencryptionstrategy.h"
#include <string>

std::string CaesarEncryptionStrategy::encrypt(const char ch) const
{
	return std::string{static_cast<char>(ch + 1)};
}
