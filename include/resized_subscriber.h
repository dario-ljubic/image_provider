#include <image_transport/simple_subscriber_plugin.h>
#include <image_provider/ResizedImage.h>

class ResizedSubscriber : public image_transport::SimpleSubscriberPlugin<image_provider::ResizedImage>
{
public:
  virtual ~ResizedSubscriber() {}

  virtual std::string getTransportName() const
  {
    return "resized";
  }

protected:
  virtual void internalCallback(const typename image_provider::ResizedImage::ConstPtr& message,
                                const Callback& user_cb);
};
