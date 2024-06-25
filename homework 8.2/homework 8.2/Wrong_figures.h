#pragma once
#include <string>
#include <exception>

class Wrong_figure : public std::exception
{
protected:
	std::string nameEr;

public:
	Wrong_figure(const std::string& err);

	virtual const char* what() const noexcept override;
};