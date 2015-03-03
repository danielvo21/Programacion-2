#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Programacion II\StringClass.h"
#include "..\Programacion II\StringClass.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestString)
		{
			String s;

			Assert::AreEqual(s.length(), 0);

		}
		
		TEST_METHOD(TestStringChar)
		{
			String s("hola");

			Assert::AreEqual(s.length(), 4);

			Assert::AreEqual(s.getString(), "hola");
		}
			
		TEST_METHOD(TestStringString)
		{
			String s1("hola");

			String s2(s1);

			Assert::AreEqual(s2.getString(), "hola");
		}
		
		TEST_METHOD(TestStringIsEqual)
		{
			String s1("hola"), s2 ("hola");
			
			Assert::IsTrue(s1 == s2);
		}

		TEST_METHOD(TestStringIsNotEqual)
		{
			String s1("hola"), s2("adios");

			Assert::IsTrue(s1 != s2);
		}

	};
}