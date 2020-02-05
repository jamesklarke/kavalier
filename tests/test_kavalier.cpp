#include <gtest/gtest.h>

#include "kavalier.h"

namespace kavalier{

	class KavalierTest : public ::testing::Test{

		protected:
	};

	TEST_F(KavalierTest, MethodAddHandlesZeroInput) {
		int a = 0;
		int b = 0;
		int c = 1;

		Kavalier k;

		EXPECT_EQ(k.add(a, b), 0);
		EXPECT_EQ(k.add(b, c), 1);
		EXPECT_EQ(k.add(c, a), 1);
	}
}
