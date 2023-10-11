#include "sick_scan/sick_scan_base.h" /* Base definitions included in all header files, added by add_sick_scan_base_header.py. Do not edit this line. */
// Generated by gencpp from file sick_scan/SickLocMapStateSrv.msg
// DO NOT EDIT!


#ifndef SICK_SCAN_MESSAGE_SICKLOCMAPSTATESRV_H
#define SICK_SCAN_MESSAGE_SICKLOCMAPSTATESRV_H

#include <ros/service_traits.h>


#include <sick_scan_xd/SickLocMapStateSrvRequest.h>
#include <sick_scan_xd/SickLocMapStateSrvResponse.h>


namespace sick_scan_xd
{

struct SickLocMapStateSrv
{

typedef SickLocMapStateSrvRequest Request;
typedef SickLocMapStateSrvResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SickLocMapStateSrv
} // namespace sick_scan_xd


namespace roswrap
{
namespace service_traits
{


template<>
struct MD5Sum< ::sick_scan_xd::SickLocMapStateSrv > {
  static const char* value()
  {
    return "404bd6a962d7cc3edc8c0ed18403c22b";
  }

  static const char* value(const ::sick_scan_xd::SickLocMapStateSrv&) { return value(); }
};

template<>
struct DataType< ::sick_scan_xd::SickLocMapStateSrv > {
  static const char* value()
  {
    return "sick_scan/SickLocMapStateSrv";
  }

  static const char* value(const ::sick_scan_xd::SickLocMapStateSrv&) { return value(); }
};


// service_traits::MD5Sum< ::sick_scan_xd::SickLocMapStateSrvRequest> should match
// service_traits::MD5Sum< ::sick_scan_xd::SickLocMapStateSrv >
template<>
struct MD5Sum< ::sick_scan_xd::SickLocMapStateSrvRequest>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::SickLocMapStateSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocMapStateSrvRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::SickLocMapStateSrvRequest> should match
// service_traits::DataType< ::sick_scan_xd::SickLocMapStateSrv >
template<>
struct DataType< ::sick_scan_xd::SickLocMapStateSrvRequest>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::SickLocMapStateSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocMapStateSrvRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::sick_scan_xd::SickLocMapStateSrvResponse> should match
// service_traits::MD5Sum< ::sick_scan_xd::SickLocMapStateSrv >
template<>
struct MD5Sum< ::sick_scan_xd::SickLocMapStateSrvResponse>
{
  static const char* value()
  {
    return MD5Sum< ::sick_scan_xd::SickLocMapStateSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocMapStateSrvResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::sick_scan_xd::SickLocMapStateSrvResponse> should match
// service_traits::DataType< ::sick_scan_xd::SickLocMapStateSrv >
template<>
struct DataType< ::sick_scan_xd::SickLocMapStateSrvResponse>
{
  static const char* value()
  {
    return DataType< ::sick_scan_xd::SickLocMapStateSrv >::value();
  }
  static const char* value(const ::sick_scan_xd::SickLocMapStateSrvResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace roswrap

#endif // SICK_SCAN_MESSAGE_SICKLOCMAPSTATESRV_H