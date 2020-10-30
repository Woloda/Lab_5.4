#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.4/Lab_5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1Lab54
{
	TEST_CLASS(UnitTest1Lab54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double l = P0(1, 4);
			Assert::AreEqual(l, 3.2);
		}
	};
}
