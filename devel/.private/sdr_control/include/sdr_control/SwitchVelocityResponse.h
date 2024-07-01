// Generated by gencpp from file sdr_control/SwitchVelocityResponse.msg
// DO NOT EDIT!


#ifndef SDR_CONTROL_MESSAGE_SWITCHVELOCITYRESPONSE_H
#define SDR_CONTROL_MESSAGE_SWITCHVELOCITYRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sdr_control
{
template <class ContainerAllocator>
struct SwitchVelocityResponse_
{
  typedef SwitchVelocityResponse_<ContainerAllocator> Type;

  SwitchVelocityResponse_()
    : switched(false)  {
    }
  SwitchVelocityResponse_(const ContainerAllocator& _alloc)
    : switched(false)  {
  (void)_alloc;
    }



   typedef uint8_t _switched_type;
  _switched_type switched;





  typedef boost::shared_ptr< ::sdr_control::SwitchVelocityResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sdr_control::SwitchVelocityResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SwitchVelocityResponse_

typedef ::sdr_control::SwitchVelocityResponse_<std::allocator<void> > SwitchVelocityResponse;

typedef boost::shared_ptr< ::sdr_control::SwitchVelocityResponse > SwitchVelocityResponsePtr;
typedef boost::shared_ptr< ::sdr_control::SwitchVelocityResponse const> SwitchVelocityResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sdr_control::SwitchVelocityResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sdr_control::SwitchVelocityResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::sdr_control::SwitchVelocityResponse_<ContainerAllocator1> & lhs, const ::sdr_control::SwitchVelocityResponse_<ContainerAllocator2> & rhs)
{
  return lhs.switched == rhs.switched;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::sdr_control::SwitchVelocityResponse_<ContainerAllocator1> & lhs, const ::sdr_control::SwitchVelocityResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace sdr_control

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::sdr_control::SwitchVelocityResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sdr_control::SwitchVelocityResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sdr_control::SwitchVelocityResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sdr_control::SwitchVelocityResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sdr_control::SwitchVelocityResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sdr_control::SwitchVelocityResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sdr_control::SwitchVelocityResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c4c7f65f90564606c525a97b2bbdf630";
  }

  static const char* value(const ::sdr_control::SwitchVelocityResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc4c7f65f90564606ULL;
  static const uint64_t static_value2 = 0xc525a97b2bbdf630ULL;
};

template<class ContainerAllocator>
struct DataType< ::sdr_control::SwitchVelocityResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sdr_control/SwitchVelocityResponse";
  }

  static const char* value(const ::sdr_control::SwitchVelocityResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sdr_control::SwitchVelocityResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool switched\n"
;
  }

  static const char* value(const ::sdr_control::SwitchVelocityResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sdr_control::SwitchVelocityResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.switched);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SwitchVelocityResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sdr_control::SwitchVelocityResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sdr_control::SwitchVelocityResponse_<ContainerAllocator>& v)
  {
    s << indent << "switched: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.switched);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SDR_CONTROL_MESSAGE_SWITCHVELOCITYRESPONSE_H
