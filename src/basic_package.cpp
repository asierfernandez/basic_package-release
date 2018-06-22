#include "ros/ros.h"
int main(int argc, char* argv[])
{
  ros::init(argc, argv, "basic_package_node");
  ROS_INFO("basic_package_node finished succsessfully");
  return -1;
}