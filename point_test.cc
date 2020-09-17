#include "point.h"
#include <gtest/gtest.h>
namespace {


TEST(point,DefaultConstructor) {
    point a1;
    EXPECT_EQ(0.0,a1.getx());
    EXPECT_EQ(0.0,a1.gety());

}
TEST(point,ParameterizedConstructor) {
    point a1(1.0,2.0);
    EXPECT_EQ(1.0,a1.getx());
    EXPECT_EQ(2.0,a1.gety());

}

TEST(point,CopyConstructor) {
    point a1(1001,5000.0);
    point a2(a1);
    EXPECT_EQ(1001,a2.getx());
    EXPECT_EQ(5000.0,a2.gety());

}
TEST(point,distanceFromOrigin){

     point p1(4.0,3.0);

     EXPECT_EQ(5.0,p1.distancefromorigin(4.0,3.0));


}
TEST(point,isorigin){

     point p1(4.0,3.0);

     EXPECT_STREQ("NO",p1.isorigin(4.0,3.0).c_str());

}
TEST(point,isXaxis){

     point p1(4.0,3.0);

     EXPECT_STREQ("YES",p1.isxaxis(0.0,3.0).c_str());

}

TEST(point,isYaxis){

     point p1(4.0,3.0);

     EXPECT_STREQ("NO",p1.isyaxis(0.0,3.0).c_str());

}
TEST(point,QuadrantCheck){

     point p1(4.0,3.0);

     EXPECT_STREQ("Q1",p1.quadrant(4.0,3.0).c_str());
     EXPECT_STREQ("ORIGIN",p1.quadrant(0.0,0.0).c_str());


}

TEST(Point,DisplayTest) {
    point a1(1001,5000.0);
    std::string ExpectedOut="1001,5000\n";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
}
