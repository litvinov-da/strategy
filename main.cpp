#include <cstdlib>
#include <memory>

#include "iencryptionstrategy.h"
#include "adfgxencryptionstrategy.h"
#include "hashencryptionstrategy.h"
#include "caesarencryptionstrategy.h"
#include "encryption.h"

enum
{
	NO_ARGUMENT_CODE = 1,
	INVALID_ARGUMENTS_CODE = 2
};

enum Strategy
{
	CAESAR = 0,
	ADFGX = 1,
	HASH = 2
};

int main(int argc, char** argv)
{
	if(argc == 1)
		return NO_ARGUMENT_CODE;

	if(argc < 2)
		return INVALID_ARGUMENTS_CODE;

	int strategyCode = std::atoi(argv[1]);	

	auto getStrategy = [](int code) -> IEncryptionStrategy::Ptr {
		if(code == CAESAR)
			return std::make_shared<CaesarEncryptionStrategy>();
		if(code == ADFGX)
			return std::make_shared<ADFGXEncryptionStrategy>();
		if(code == HASH)
			return std::make_shared<HashEncryptionStrategy>();
	};
	
	Encryption enc {argv[2]};
	enc.setStrategy(getStrategy(strategyCode));
	enc.encrypt();
}
