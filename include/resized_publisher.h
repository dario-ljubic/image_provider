#include <image_transport/simple_publisher_plugin.h>
#include <image_provider/ResizedImage.h>

class ResizedPublisher : public image_transport::SimplePublisherPlugin<image_provider::ResizedImage>
{
public:
  virtual std::string getTransportName() const
  {
    return "resized";
  }

protected:
  virtual void publish(const sensor_msgs::Image& message,
                       const PublishFn& publish_fn) const;
};
