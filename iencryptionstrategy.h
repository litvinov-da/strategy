#pragma once

#include <memory>
#include <string>

class IEncryptionStrategy
{
public:
	using Ptr = std::shared_ptr<IEncryptionStrategy>;
	using ConstPtr = std::shared_ptr<const IEncryptionStrategy>;
	IEncryptionStrategy() = default;
	virtual ~IEncryptionStrategy() = default;

	virtual std::string encrypt(const char) const = 0;
};
