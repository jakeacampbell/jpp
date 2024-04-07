#include "pch.h"

#include "Analytics.h"
#include <iostream>

jpp::analytics::scoped_timer::scoped_timer()
{
	start = std::chrono::high_resolution_clock::now();
}

jpp::analytics::scoped_timer::~scoped_timer()
{
	end = std::chrono::high_resolution_clock::now();

	float ms = std::chrono::duration<float>(end - start).count() * 1000.0f;

	std::cout << "Timer duration: " << ms << std::endl;
}