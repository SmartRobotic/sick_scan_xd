// Generated by gencpp from file sick_scan/SickDevGetLidarConfigSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKDEVGETLIDARCONFIGSRV_H
#define SICK_SCAN_MESSAGE_SICKDEVGETLIDARCONFIGSRV_H

#include <ros/service_traits.h>


#include <sick_scan/SickDevGetLidarConfigSrvRequest.h>
#include <sick_scan/SickDevGetLidarConfigSrvResponse.h>


namespace sick_scan
{

struct SickDevGetLidarConfigSrv
{

typedef SickDevGetLidarConfigSrvRequest Request;
typedef SickDevGetLidarConfigSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickDevGetLidarConfigSrv
} // namespace sick_scan


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan::SickDevGetLidarConfigSrv > {
  static const char* value()
  {
    return "3b08b268ba490855937a775f72b2e481";
  }

  static const char* value(const ::sick_scan::SickDevGetLidarConfigSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan::SickDevGetLidarConfigSrv > {
  static const char* value()
  {
    return "sick_scan/SickDevGetLidarConfigSrv";
  }

  static const char* value(const ::sick_scan::SickDevGetLidarConfigSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan::SickDevGetLidarConfigSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan::SickDevGetLidarConfigSrv >
template<>
struct MD5Sum< ::sick_scan::SickDevGetLidarConfigSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickDevGetLidarConfigSrv >::value();
  }
  static const char* value(const ::sick_scan::SickDevGetLidarConfigSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickDevGetLidarConfigSrvRequest> should match
// service_traits::DataType< ::sick_scan::SickDevGetLidarConfigSrv >
template<>
struct DataType< ::sick_scan::SickDevGetLidarConfigSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickDevGetLidarConfigSrv >::value();
  }
  static const char* value(const ::sick_scan::SickDevGetLidarConfigSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan::SickDevGetLidarConfigSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan::SickDevGetLidarConfigSrv >
template<>
struct MD5Sum< ::sick_scan::SickDevGetLidarConfigSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan::SickDevGetLidarConfigSrv >::value();
  }
  static const char* value(const ::sick_scan::SickDevGetLidarConfigSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan::SickDevGetLidarConfigSrvResponse> should match
// service_traits::DataType< ::sick_scan::SickDevGetLidarConfigSrv >
template<>
struct DataType< ::sick_scan::SickDevGetLidarConfigSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan::SickDevGetLidarConfigSrv >::value();
  }
  static const char* value(const ::sick_scan::SickDevGetLidarConfigSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SICK_SCAN_MESSAGE_SICKDEVGETLIDARCONFIGSRV_H
