#include "pch.h"
#include "../Project10/SimilarityChecker.cpp"

TEST(TestCaseName, checkStrLength) {
	vector <string> input = { "ASD", "DSA" };
	EXPECT_EQ(60, SimilarityChecker().checkstrlength(input));
  
}