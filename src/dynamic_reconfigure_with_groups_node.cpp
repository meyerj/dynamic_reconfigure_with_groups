#include <ros/ros.h>
#include <dynamic_reconfigure/server.h>

#include <dynamic_reconfigure_with_groups/TestConfig.h>

using dynamic_reconfigure_with_groups::TestConfig;

void callback(TestConfig &config, uint32_t level)
{
    ROS_INFO("In callback(TestConfig &config, uint32_t level)");
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "dynamic_reconfigure_with_groups");
    dynamic_reconfigure::Server<TestConfig> server;
    server.setCallback(&callback);
    ros::spin();
    return 0;
}
