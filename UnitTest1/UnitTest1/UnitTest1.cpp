#include "pch.h"
#include "CppUnitTest.h"
#include "../../lab5.1/lab5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double t;
			t = k(0, 1);
			Assert::AreEqual(t, cos(1.));
		}
	};
}