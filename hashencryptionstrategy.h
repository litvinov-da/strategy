#pragma once

#include "iencryptionstrategy.h"

class HashEncryptionStrategy : public IEncryptionStrategy
{
public:
	~HashEncryptionStrategy() override = default;

	std::string encrypt(const char) const override;
};
