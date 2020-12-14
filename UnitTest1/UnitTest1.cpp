#include "pch.h"
#include "CppUnitTest.h"
#include "../Project10.3/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int kil_towar = 2;
			towar* s = new towar[kil_towar + 100];

			s[0].n_towar = "qwe";
			s[0].vart³st = 100;
			s[0].kilkist = 30;
			s[0].units = (measurement)2;
			s[0].masa = 17;

			s[1].n_towar = "wer";
			s[1].vart³st = 120;
			s[1].kilkist = 80;
			s[1].units = (measurement)3;
			s[1].masa = 2;

			SortTXT("C:\\Student\\ [Tkachenko.Marharyta.IK-11]\\Lab_11.1(C++)\\Lab_11.1(C++)\\test.txt", "C:\\Student\\ [Tkachenko.Marharyta.IK-11]\\Lab_11.1(C++)\\Lab_11.1(C++)\\test.txt", kil_towar, s);
			Print_towar(s, kil_towar, 0, "C:\\Student\\ [Tkachenko.Marharyta.IK-11]\\Lab_11.1(C++)\\Lab_11.1(C++)\\test.txt");

			Assert::AreEqual(s[0].vart³st, 100);
		}
	};
}
