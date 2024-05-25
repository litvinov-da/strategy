#pragma once

#include "iencryptionstrategy.h"

class CaesarEncryptionStrategy : public IEncryptionStrategy
{
public:
	CaesarEncryptionStrategy() = default;
	~CaesarEncryptionStrategy() override = default;

	std::string encrypt(const char) const override;
};
