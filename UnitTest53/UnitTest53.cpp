#include "pch.h"
#include "CppUnitTest.h"
#include "../5.3/5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = h(0.);
			Assert::AreEqual(t, 1.);

		}
	};
}
