#include "BaseApplication.hpp"
#include <iostream>

int My::BaseApplication::Initialize()
{
	m_bQuit = false;
	std::cout << "base application initialize" << std::endl;
	return 0;
}

void My::BaseApplication::Finalize()
{
	std::cout << "call Finalize" << std::endl;
}

void My::BaseApplication::Tick()
{
	std::cout << "call tick" << std::endl;
}

bool My::BaseApplication::IsQuit()
{
	return m_bQuit;
}
