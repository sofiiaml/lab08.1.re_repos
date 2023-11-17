#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "CppUnitTest.h"
#include "../PR08.1.re/PR08.1.re.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81re
{
	TEST_CLASS(UnitTest81re)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "asd+=gfd--+";
			Assert::AreEqual(5, Count(str, 0));

			char* dest1 = new char[15];
			dest1[0] = '\0';
			char* dest2 = Change(dest1, str, dest1, 0);
		Assert::AreEqual("asd+=gfd***+", dest2);

		}
	};
}
