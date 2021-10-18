// Generated by gencpp from file sick_scan/SickLocAutoStartSavePoseIntervalSrvRequest.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCAUTOSTARTSAVEPOSEINTERVALSRVREQUEST_H
#define SICK_SCAN_MESSAGE_SICKLOCAUTOSTARTSAVEPOSEINTERVALSRVREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sick_scan
{
template <class ContainerAllocator>
struct SickLocAutoStartSavePoseIntervalSrvRequest_
{
  typedef SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator> Type;

  SickLocAutoStartSavePoseIntervalSrvRequest_()
    {
    }
  SickLocAutoStartSavePoseIntervalSrvRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef std::shared_ptr< ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SickLocAutoStartSavePoseIntervalSrvRequest_

typedef ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<std::allocator<void> > SickLocAutoStartSavePoseIntervalSrvRequest;

typedef std::shared_ptr< ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest > SickLocAutoStartSavePoseIntervalSrvRequestPtr;
typedef std::shared_ptr< ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest const> SickLocAutoStartSavePoseIntervalSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace sick_scan

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/SickLocAutoStartSavePoseIntervalSrvRequest";
  }

  static const char* value(const ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Definition of ROS service SickLocAutoStartSavePoseInterval for sick localization\n"
"# The interval in seconds for saving the pose automatically for auto start while localizing.\n"
"# Example call (ROS1):\n"
"# rosservice call SickLocAutoStartSavePoseInterval \"{}\"\n"
"# Example call (ROS2):\n"
"# ros2 service call SickLocAutoStartSavePoseInterval sick_scan/srv/SickLocAutoStartSavePoseIntervalSrv \"{}\"\n"
"# \n"
"\n"
"# \n"
"# Request (input)\n"
"# \n"
"\n"
;
  }

  static const char* value(const ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SickLocAutoStartSavePoseIntervalSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::sick_scan::SickLocAutoStartSavePoseIntervalSrvRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // SICK_SCAN_MESSAGE_SICKLOCAUTOSTARTSAVEPOSEINTERVALSRVREQUEST_H
