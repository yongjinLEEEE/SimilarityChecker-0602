#include "pch.h"
#include "../Project10/SimilarityChecker.cpp"

TEST(TestCaseName, checkStrLength0) {
	vector <string> input = { "ASD", "DSA" };
	EXPECT_EQ(60, SimilarityChecker().checkstrlength(input));
}

TEST(TestCaseName, checkStrLength1) {
	vector <string> input = { "A", "BB" };
	EXPECT_EQ(0, SimilarityChecker().checkstrlength(input));
}

TEST(TestCaseName, checkStrLength3) {
	vector <string> input = { "AAABB", "BAA" };
	EXPECT_EQ(20, SimilarityChecker().checkstrlength(input));
}

TEST(TestCaseName, checkStrLength4) {
	vector <string> input = { "AA", "AAA" };
	EXPECT_EQ(30, SimilarityChecker().checkstrlength(input));
}