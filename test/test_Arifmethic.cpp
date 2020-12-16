#include "Arifmethic.h"
#include <fstream>
#include <../gtest/gtest.h>

TEST(TArifmethic, can_create_polish)
{
  ASSERT_NO_THROW();
}

TEST(TArifmethic, can_plus)
{
  TPolish ans;
  char* s = "2+2";
  int expI = 4;
  int I = ans.Calculate(s);
  EXPECT_EQ(expI, I);
}

TEST(TArifmethic, can_mult)
{
  TPolish ans;
  char* s = "2-2";
  int expI = 0;
  int I = ans.Calculate(s);
  EXPECT_EQ(expI, I);
}

TEST(TArifmethic, can_calc_with_brackets)
{
  TPolish ans;
  char* s = "((((2+2)*(2+2))+2)*2)";
  int expI = 36;
  int I = ans.Calculate(s);
  EXPECT_EQ(expI, I);
}

TEST(TArifmethic, can_calc_large_expression)
{
  TPolish ans;
  char* s = "(2+2)*2/2*2/2-2/2*(2+2)+2/2*2*2";
  int expI = 4;
  int I = ans.Calculate(s);
  EXPECT_EQ(expI, I);

}

//доп задания

TEST(TArifmethic, can_pow)
{
  TPolish ans;
  char* s = "2^2";
  int expI = 4;
  int I = ans.Calculate(s);
  EXPECT_EQ(expI, I);
}

TEST(TArifmethic, can_write_to_file)
{
  TPolish ans;
  char* s = "(2+2)*2-2/2";
  ans.WriteToFile("output_s.txt", s);
  string expS = "(2+2)*2-2/2";
  string S = "";
  ifstream fin("output_s.txt");
  fin >> S;
  fin.close();
  EXPECT_EQ(expS, S);

}