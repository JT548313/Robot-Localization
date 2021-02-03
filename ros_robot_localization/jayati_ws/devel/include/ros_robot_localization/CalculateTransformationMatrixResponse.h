// Generated by gencpp from file ros_robot_localization/CalculateTransformationMatrixResponse.msg
// DO NOT EDIT!


#ifndef ROS_ROBOT_LOCALIZATION_MESSAGE_CALCULATETRANSFORMATIONMATRIXRESPONSE_H
#define ROS_ROBOT_LOCALIZATION_MESSAGE_CALCULATETRANSFORMATIONMATRIXRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Transform.h>

namespace ros_robot_localization
{
template <class ContainerAllocator>
struct CalculateTransformationMatrixResponse_
{
  typedef CalculateTransformationMatrixResponse_<ContainerAllocator> Type;

  CalculateTransformationMatrixResponse_()
    : tr()  {
    }
  CalculateTransformationMatrixResponse_(const ContainerAllocator& _alloc)
    : tr(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Transform_<ContainerAllocator>  _tr_type;
  _tr_type tr;





  typedef boost::shared_ptr< ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CalculateTransformationMatrixResponse_

typedef ::ros_robot_localization::CalculateTransformationMatrixResponse_<std::allocator<void> > CalculateTransformationMatrixResponse;

typedef boost::shared_ptr< ::ros_robot_localization::CalculateTransformationMatrixResponse > CalculateTransformationMatrixResponsePtr;
typedef boost::shared_ptr< ::ros_robot_localization::CalculateTransformationMatrixResponse const> CalculateTransformationMatrixResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator1> & lhs, const ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator2> & rhs)
{
  return lhs.tr == rhs.tr;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator1> & lhs, const ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ros_robot_localization

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b48e1530098e3d959069d2fe641ca40f";
  }

  static const char* value(const ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb48e1530098e3d95ULL;
  static const uint64_t static_value2 = 0x9069d2fe641ca40fULL;
};

template<class ContainerAllocator>
struct DataType< ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ros_robot_localization/CalculateTransformationMatrixResponse";
  }

  static const char* value(const ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Transform tr\n"
"\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Transform\n"
"# This represents the transform between two coordinate frames in free space.\n"
"\n"
"Vector3 translation\n"
"Quaternion rotation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.tr);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CalculateTransformationMatrixResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ros_robot_localization::CalculateTransformationMatrixResponse_<ContainerAllocator>& v)
  {
    s << indent << "tr: ";
    s << std::endl;
    Printer< ::geometry_msgs::Transform_<ContainerAllocator> >::stream(s, indent + "  ", v.tr);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROS_ROBOT_LOCALIZATION_MESSAGE_CALCULATETRANSFORMATIONMATRIXRESPONSE_H
