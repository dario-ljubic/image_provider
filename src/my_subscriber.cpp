#include <ros/ros.h>
#include <image_transport/image_transport.h>
//#include <opencv2/highgui/highgui.hpp>
//#include <cv_bridge/cv_bridge.h>

//void imageCallback(const sensor_msgs::ImageConstPtr& msg)
//{
//  try
//  {
//    cv::imshow("view", cv_bridge::toCvShare(msg, "bgr8")->image);
//  }
//  catch (cv_bridge::Exception& e)
//  {
//    ROS_ERROR("Could not convert from '%s' to 'bgr8'.", msg->encoding.c_str());
//  }
//}
//
//int main(int argc, char **argv)
//{
//  ros::init(argc, argv, "image_listener");
//  ros::NodeHandle nh;
//  cv::namedWindow("view");
//  cv::startWindowThread();
//  image_transport::ImageTransport it(nh);
//  image_transport::Subscriber sub = it.subscribe("camera/image", 1, imageCallback);
//  ros::spin();
//  cv::destroyWindow("view");
//}

//http://stackoverflow.com/questions/5816719/difference-between-function-arguments-declared-with-and-in-c

void callback(const sensor_msgs::ImageConstPtr& msg) {
    ROS_INFO("Got image.");
}

int main(int argc, char **argv) {
    ros::init(argc, argv, "image_listener");
    ros::NodeHandle nh;
    image_transport::ImageTransport it(nh);
    image_transport::Subscriber sub = it.subscribe("/camera/image", 1, callback);
    ros::spin();
}
