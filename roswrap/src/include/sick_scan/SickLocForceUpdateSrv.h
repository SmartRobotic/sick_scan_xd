// Generated by gencpp from file sick_scan/SickLocForceUpdateSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCFORCEUPDATESRV_H
#define SICK_SCAN_MESSAGE_SICKLOCFORCEUPDATESRV_H

#include <ros/service_traits.h>


#include <sick_scan/SickLocForceUpdateSrvRequest.h>
#include <sick_scan/SickLocForceUpdateSrvResponse.h>


namespace sick_scan
{

struct SickLocForceUpdateSrv
{

typedef SickLocForceUpdateSrvRequest Request;
typedef SickLocForceUpdateSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocForceUpdateSrv
} // namespace sick_scan


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan::SickLocForceUpdateSrv > {
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::sick_scan::SickLocForceUpdateSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan::SickLocForceUpdateSrv > {
  static const char* value()
  {
    return "sick_scan/SickLocForceUpdateSrv";
  }

  static const char* value(const ::sick_scan::SickLocForceUpdateSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan::SickLocForceUpdateSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan::SickLocForceUpdateSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocForceUpdateSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocForceUpdateSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocForceUpdateSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocForceUpdateSrvRequest> should match
// service_traits::DataType< ::sick_scan::SickLocForceUpdateSrv >
template<>
struct DataType< ::sick_scan::SickLocForceUpdateSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocForceUpdateSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocForceUpdateSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan::SickLocForceUpdateSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan::SickLocForceUpdateSrv >
template<>
struct MD5Sum< ::sick_scan::SickLocForceUpdateSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickLocForceUpdateSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocForceUpdateSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickLocForceUpdateSrvResponse> should match
// service_traits::DataType< ::sick_scan::SickLocForceUpdateSrv >
template<>
struct DataType< ::sick_scan::SickLocForceUpdateSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickLocForceUpdateSrv >::value();
  }
  static const char* value(const ::sick_scan::SickLocForceUpdateSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SICK_SCAN_MESSAGE_SICKLOCFORCEUPDATESRV_H
