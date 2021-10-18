// Generated by gencpp from file sick_scan/SickLocIsSystemReadySrvRequest.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCISSYSTEMREADYSRVREQUEST_H
#define SICK_SCAN_MESSAGE_SICKLOCISSYSTEMREADYSRVREQUEST_H


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
struct SickLocIsSystemReadySrvRequest_
{
  typedef SickLocIsSystemReadySrvRequest_<ContainerAllocator> Type;

  SickLocIsSystemReadySrvRequest_()
    {
    }
  SickLocIsSystemReadySrvRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef std::shared_ptr< ::sick_scan::SickLocIsSystemReadySrvRequest_<ContainerAllocator> > Ptr;
  typedef std::shared_ptr< ::sick_scan::SickLocIsSystemReadySrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SickLocIsSystemReadySrvRequest_

typedef ::sick_scan::SickLocIsSystemReadySrvRequest_<std::allocator<void> > SickLocIsSystemReadySrvRequest;

typedef std::shared_ptr< ::sick_scan::SickLocIsSystemReadySrvRequest > SickLocIsSystemReadySrvRequestPtr;
typedef std::shared_ptr< ::sick_scan::SickLocIsSystemReadySrvRequest const> SickLocIsSystemReadySrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sick_scan::SickLocIsSystemReadySrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sick_scan::SickLocIsSystemReadySrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace sick_scan

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickLocIsSystemReadySrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sick_scan::SickLocIsSystemReadySrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickLocIsSystemReadySrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sick_scan::SickLocIsSystemReadySrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickLocIsSystemReadySrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sick_scan::SickLocIsSystemReadySrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sick_scan::SickLocIsSystemReadySrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::sick_scan::SickLocIsSystemReadySrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::sick_scan::SickLocIsSystemReadySrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sick_scan/SickLocIsSystemReadySrvRequest";
  }

  static const char* value(const ::sick_scan::SickLocIsSystemReadySrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sick_scan::SickLocIsSystemReadySrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Definition of ROS service SickLocIsSystemReady for sick localization.\n"
"#\n"
"# ROS service SickLocIsSystemReady check if the system is ready\n"
"# by sending cola command (\"sMN IsSystemReady\").\n"
"#\n"
"# See Telegram-Listing-v1.1.0.241R.pdf for further details about \n"
"# Cola telegrams and this command.\n"
"\n"
"#\n"
"# Request (input)\n"
"#\n"
"\n"
;
  }

  static const char* value(const ::sick_scan::SickLocIsSystemReadySrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sick_scan::SickLocIsSystemReadySrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SickLocIsSystemReadySrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sick_scan::SickLocIsSystemReadySrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::sick_scan::SickLocIsSystemReadySrvRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // SICK_SCAN_MESSAGE_SICKLOCISSYSTEMREADYSRVREQUEST_H
