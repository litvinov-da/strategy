#include "hashencryptionstrategy.h"
#include <string>

std::string HashEncryptionStrategy::encrypt(const char ch) const
{
	return std::to_string(std::hash<char>{}(ch));
}
