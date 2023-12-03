#pragma once
#include <iostream>

class PrintClass
{
public:
	friend std::ostream& operator<<(std::ostream& os, const PrintClass* p);
	void virtual printFunc()const = 0;
};

