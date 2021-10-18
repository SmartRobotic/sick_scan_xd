// Generated by gencpp from file sick_scan/SickDevIMUActiveSrvRequest.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKDEVIMUACTIVESRVREQUEST_H
#define SICK_SCAN_MESSAGE_SICKDEVIMUACTIVESRVREQUEST_H


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
struct SickDevIMUActiveSrvRequest_
{
  typedef SickDevIMUActiveSrvRequest_<ContainerAllocator> Type;

  SickDevIMUActiveSrvRequest_()
    {
    }
  SickDevIMUActiveSrvRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef std::shared_ptr< ::sick_scan::SickDevIMUActiveSrvRequest_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::sick_scan::SickDevIMUActiveSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SickDevIMUActiveSrvRequest_

typedef ::sick_scan::SickDevIMUActiveSrvRequest_<std::allocator<void> > SickDevIMUActiveSrvRequest;

typedef std::shared_ptr< ::sick_scan::SickDevIMUActiveSrvRequest > SickDevIMUActiveSrvRequestPtr;
typedef std::shared_ptr< ::sick_scan::SickDevIMUActiveSrvRequest const> SickDevIMUActiveSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan::SickDevIMUActiveSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan::SickDevIMUActiveSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace sick_scan

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickDevIMUActiveSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickDevIMUActiveSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickDevIMUActiveSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickDevIMUActiveSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickDevIMUActiveSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickDevIMUActiveSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan::SickDevIMUActiveSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::sick_scan::SickDevIMUActiveSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan::SickDevIMUActiveSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/SickDevIMUActiveSrvRequest";
  }

  static const char* value(const ::sick_scan::SickDevIMUActiveSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan::SickDevIMUActiveSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Definition of ROS service SickDevIMUActive for sick localization\n"
"# Read IMU Active status\n"
"# Example call (ROS1):\n"
"# rosservice call SickDevIMUActive \"{<parameter>}\"\n"
"# Example call (ROS2):\n"
"# ros2 service call SickDevIMUActive sick_scan/srv/SickDevIMUActiveSrv \"{<parameter>}\"\n"
"# \n"
"\n"
"# \n"
"# Request (input)\n"
"# \n"
"\n"
;
  }

  static const char* value(const ::sick_scan::SickDevIMUActiveSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan::SickDevIMUActiveSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SickDevIMUActiveSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan::SickDevIMUActiveSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::sick_scan::SickDevIMUActiveSrvRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // SICK_SCAN_MESSAGE_SICKDEVIMUACTIVESRVREQUEST_H
