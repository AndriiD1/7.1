#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include <algorithm>
#include "../oop7.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			vector<int> u = { -1, 0, 1 };
			auto min = *std::min_element(u.begin(), u.end(), myfn);
			Assert::AreEqual(min, -1);
		}
	};
}
