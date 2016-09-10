/* Auto-generated by genmsg_cpp for file /home/biorobotics/Desktop/brl_workspace/raven_2/msg/raven_state.msg */
#ifndef RAVEN_2_MESSAGE_RAVEN_STATE_H
#define RAVEN_2_MESSAGE_RAVEN_STATE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace raven_2
{
template <class ContainerAllocator>
struct raven_state_ {
  typedef raven_state_<ContainerAllocator> Type;

  raven_state_()
  : hdr()
  , runlevel(0)
  , sublevel(0)
  , last_seq(0)
  , type()
  , pos()
  , ori()
  , ori_d()
  , pos_d()
  , dt()
  , encVals()
  , tau()
  , mpos()
  , jpos()
  , mvel()
  , jvel()
  , mpos_d()
  , jpos_d()
  , grasp_d()
  , encoffsets()
  {
    type.assign(0);
    pos.assign(0);
    ori.assign(0.0);
    ori_d.assign(0.0);
    pos_d.assign(0);
    encVals.assign(0);
    tau.assign(0.0);
    mpos.assign(0.0);
    jpos.assign(0.0);
    mvel.assign(0.0);
    jvel.assign(0.0);
    mpos_d.assign(0.0);
    jpos_d.assign(0.0);
    grasp_d.assign(0.0);
    encoffsets.assign(0.0);
  }

  raven_state_(const ContainerAllocator& _alloc)
  : hdr(_alloc)
  , runlevel(0)
  , sublevel(0)
  , last_seq(0)
  , type()
  , pos()
  , ori()
  , ori_d()
  , pos_d()
  , dt()
  , encVals()
  , tau()
  , mpos()
  , jpos()
  , mvel()
  , jvel()
  , mpos_d()
  , jpos_d()
  , grasp_d()
  , encoffsets()
  {
    type.assign(0);
    pos.assign(0);
    ori.assign(0.0);
    ori_d.assign(0.0);
    pos_d.assign(0);
    encVals.assign(0);
    tau.assign(0.0);
    mpos.assign(0.0);
    jpos.assign(0.0);
    mvel.assign(0.0);
    jvel.assign(0.0);
    mpos_d.assign(0.0);
    jpos_d.assign(0.0);
    grasp_d.assign(0.0);
    encoffsets.assign(0.0);
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _hdr_type;
   ::std_msgs::Header_<ContainerAllocator>  hdr;

  typedef int32_t _runlevel_type;
  int32_t runlevel;

  typedef int32_t _sublevel_type;
  int32_t sublevel;

  typedef int32_t _last_seq_type;
  int32_t last_seq;

  typedef boost::array<int32_t, 2>  _type_type;
  boost::array<int32_t, 2>  type;

  typedef boost::array<int32_t, 6>  _pos_type;
  boost::array<int32_t, 6>  pos;

  typedef boost::array<float, 18>  _ori_type;
  boost::array<float, 18>  ori;

  typedef boost::array<float, 18>  _ori_d_type;
  boost::array<float, 18>  ori_d;

  typedef boost::array<int32_t, 6>  _pos_d_type;
  boost::array<int32_t, 6>  pos_d;

  typedef ros::Duration _dt_type;
  ros::Duration dt;

  typedef boost::array<int32_t, 16>  _encVals_type;
  boost::array<int32_t, 16>  encVals;

  typedef boost::array<float, 16>  _tau_type;
  boost::array<float, 16>  tau;

  typedef boost::array<float, 16>  _mpos_type;
  boost::array<float, 16>  mpos;

  typedef boost::array<float, 16>  _jpos_type;
  boost::array<float, 16>  jpos;

  typedef boost::array<float, 16>  _mvel_type;
  boost::array<float, 16>  mvel;

  typedef boost::array<float, 16>  _jvel_type;
  boost::array<float, 16>  jvel;

  typedef boost::array<float, 16>  _mpos_d_type;
  boost::array<float, 16>  mpos_d;

  typedef boost::array<float, 16>  _jpos_d_type;
  boost::array<float, 16>  jpos_d;

  typedef boost::array<float, 2>  _grasp_d_type;
  boost::array<float, 2>  grasp_d;

  typedef boost::array<float, 16>  _encoffsets_type;
  boost::array<float, 16>  encoffsets;


  ROS_DEPRECATED uint32_t get_type_size() const { return (uint32_t)type.size(); }
  ROS_DEPRECATED uint32_t get_pos_size() const { return (uint32_t)pos.size(); }
  ROS_DEPRECATED uint32_t get_ori_size() const { return (uint32_t)ori.size(); }
  ROS_DEPRECATED uint32_t get_ori_d_size() const { return (uint32_t)ori_d.size(); }
  ROS_DEPRECATED uint32_t get_pos_d_size() const { return (uint32_t)pos_d.size(); }
  ROS_DEPRECATED uint32_t get_encVals_size() const { return (uint32_t)encVals.size(); }
  ROS_DEPRECATED uint32_t get_tau_size() const { return (uint32_t)tau.size(); }
  ROS_DEPRECATED uint32_t get_mpos_size() const { return (uint32_t)mpos.size(); }
  ROS_DEPRECATED uint32_t get_jpos_size() const { return (uint32_t)jpos.size(); }
  ROS_DEPRECATED uint32_t get_mvel_size() const { return (uint32_t)mvel.size(); }
  ROS_DEPRECATED uint32_t get_jvel_size() const { return (uint32_t)jvel.size(); }
  ROS_DEPRECATED uint32_t get_mpos_d_size() const { return (uint32_t)mpos_d.size(); }
  ROS_DEPRECATED uint32_t get_jpos_d_size() const { return (uint32_t)jpos_d.size(); }
  ROS_DEPRECATED uint32_t get_grasp_d_size() const { return (uint32_t)grasp_d.size(); }
  ROS_DEPRECATED uint32_t get_encoffsets_size() const { return (uint32_t)encoffsets.size(); }
private:
  static const char* __s_getDataType_() { return "raven_2/raven_state"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "173f52385e84b98995f307af4bea25a2"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "Header      hdr\n\
int32       runlevel\n\
int32       sublevel\n\
int32       last_seq\n\
int32[2]    type\n\
int32[6]    pos\n\
float32[18]   ori\n\
float32[18]   ori_d\n\
int32[6]    pos_d\n\
duration    dt\n\
int32[16]   encVals\n\
float32[16] tau\n\
float32[16] mpos\n\
float32[16] jpos\n\
float32[16] mvel\n\
float32[16] jvel\n\
float32[16] mpos_d\n\
float32[16] jpos_d\n\
float32[2]  grasp_d\n\
float32[16] encoffsets\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, hdr);
    ros::serialization::serialize(stream, runlevel);
    ros::serialization::serialize(stream, sublevel);
    ros::serialization::serialize(stream, last_seq);
    ros::serialization::serialize(stream, type);
    ros::serialization::serialize(stream, pos);
    ros::serialization::serialize(stream, ori);
    ros::serialization::serialize(stream, ori_d);
    ros::serialization::serialize(stream, pos_d);
    ros::serialization::serialize(stream, dt);
    ros::serialization::serialize(stream, encVals);
    ros::serialization::serialize(stream, tau);
    ros::serialization::serialize(stream, mpos);
    ros::serialization::serialize(stream, jpos);
    ros::serialization::serialize(stream, mvel);
    ros::serialization::serialize(stream, jvel);
    ros::serialization::serialize(stream, mpos_d);
    ros::serialization::serialize(stream, jpos_d);
    ros::serialization::serialize(stream, grasp_d);
    ros::serialization::serialize(stream, encoffsets);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, hdr);
    ros::serialization::deserialize(stream, runlevel);
    ros::serialization::deserialize(stream, sublevel);
    ros::serialization::deserialize(stream, last_seq);
    ros::serialization::deserialize(stream, type);
    ros::serialization::deserialize(stream, pos);
    ros::serialization::deserialize(stream, ori);
    ros::serialization::deserialize(stream, ori_d);
    ros::serialization::deserialize(stream, pos_d);
    ros::serialization::deserialize(stream, dt);
    ros::serialization::deserialize(stream, encVals);
    ros::serialization::deserialize(stream, tau);
    ros::serialization::deserialize(stream, mpos);
    ros::serialization::deserialize(stream, jpos);
    ros::serialization::deserialize(stream, mvel);
    ros::serialization::deserialize(stream, jvel);
    ros::serialization::deserialize(stream, mpos_d);
    ros::serialization::deserialize(stream, jpos_d);
    ros::serialization::deserialize(stream, grasp_d);
    ros::serialization::deserialize(stream, encoffsets);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(hdr);
    size += ros::serialization::serializationLength(runlevel);
    size += ros::serialization::serializationLength(sublevel);
    size += ros::serialization::serializationLength(last_seq);
    size += ros::serialization::serializationLength(type);
    size += ros::serialization::serializationLength(pos);
    size += ros::serialization::serializationLength(ori);
    size += ros::serialization::serializationLength(ori_d);
    size += ros::serialization::serializationLength(pos_d);
    size += ros::serialization::serializationLength(dt);
    size += ros::serialization::serializationLength(encVals);
    size += ros::serialization::serializationLength(tau);
    size += ros::serialization::serializationLength(mpos);
    size += ros::serialization::serializationLength(jpos);
    size += ros::serialization::serializationLength(mvel);
    size += ros::serialization::serializationLength(jvel);
    size += ros::serialization::serializationLength(mpos_d);
    size += ros::serialization::serializationLength(jpos_d);
    size += ros::serialization::serializationLength(grasp_d);
    size += ros::serialization::serializationLength(encoffsets);
    return size;
  }

  typedef boost::shared_ptr< ::raven_2::raven_state_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::raven_2::raven_state_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct raven_state
typedef  ::raven_2::raven_state_<std::allocator<void> > raven_state;

typedef boost::shared_ptr< ::raven_2::raven_state> raven_statePtr;
typedef boost::shared_ptr< ::raven_2::raven_state const> raven_stateConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::raven_2::raven_state_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::raven_2::raven_state_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace raven_2

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::raven_2::raven_state_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::raven_2::raven_state_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::raven_2::raven_state_<ContainerAllocator> > {
  static const char* value() 
  {
    return "173f52385e84b98995f307af4bea25a2";
  }

  static const char* value(const  ::raven_2::raven_state_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x173f52385e84b989ULL;
  static const uint64_t static_value2 = 0x95f307af4bea25a2ULL;
};

template<class ContainerAllocator>
struct DataType< ::raven_2::raven_state_<ContainerAllocator> > {
  static const char* value() 
  {
    return "raven_2/raven_state";
  }

  static const char* value(const  ::raven_2::raven_state_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::raven_2::raven_state_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header      hdr\n\
int32       runlevel\n\
int32       sublevel\n\
int32       last_seq\n\
int32[2]    type\n\
int32[6]    pos\n\
float32[18]   ori\n\
float32[18]   ori_d\n\
int32[6]    pos_d\n\
duration    dt\n\
int32[16]   encVals\n\
float32[16] tau\n\
float32[16] mpos\n\
float32[16] jpos\n\
float32[16] mvel\n\
float32[16] jvel\n\
float32[16] mpos_d\n\
float32[16] jpos_d\n\
float32[2]  grasp_d\n\
float32[16] encoffsets\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::raven_2::raven_state_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::raven_2::raven_state_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.hdr);
    stream.next(m.runlevel);
    stream.next(m.sublevel);
    stream.next(m.last_seq);
    stream.next(m.type);
    stream.next(m.pos);
    stream.next(m.ori);
    stream.next(m.ori_d);
    stream.next(m.pos_d);
    stream.next(m.dt);
    stream.next(m.encVals);
    stream.next(m.tau);
    stream.next(m.mpos);
    stream.next(m.jpos);
    stream.next(m.mvel);
    stream.next(m.jvel);
    stream.next(m.mpos_d);
    stream.next(m.jpos_d);
    stream.next(m.grasp_d);
    stream.next(m.encoffsets);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct raven_state_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::raven_2::raven_state_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::raven_2::raven_state_<ContainerAllocator> & v) 
  {
    s << indent << "hdr: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.hdr);
    s << indent << "runlevel: ";
    Printer<int32_t>::stream(s, indent + "  ", v.runlevel);
    s << indent << "sublevel: ";
    Printer<int32_t>::stream(s, indent + "  ", v.sublevel);
    s << indent << "last_seq: ";
    Printer<int32_t>::stream(s, indent + "  ", v.last_seq);
    s << indent << "type[]" << std::endl;
    for (size_t i = 0; i < v.type.size(); ++i)
    {
      s << indent << "  type[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.type[i]);
    }
    s << indent << "pos[]" << std::endl;
    for (size_t i = 0; i < v.pos.size(); ++i)
    {
      s << indent << "  pos[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.pos[i]);
    }
    s << indent << "ori[]" << std::endl;
    for (size_t i = 0; i < v.ori.size(); ++i)
    {
      s << indent << "  ori[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.ori[i]);
    }
    s << indent << "ori_d[]" << std::endl;
    for (size_t i = 0; i < v.ori_d.size(); ++i)
    {
      s << indent << "  ori_d[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.ori_d[i]);
    }
    s << indent << "pos_d[]" << std::endl;
    for (size_t i = 0; i < v.pos_d.size(); ++i)
    {
      s << indent << "  pos_d[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.pos_d[i]);
    }
    s << indent << "dt: ";
    Printer<ros::Duration>::stream(s, indent + "  ", v.dt);
    s << indent << "encVals[]" << std::endl;
    for (size_t i = 0; i < v.encVals.size(); ++i)
    {
      s << indent << "  encVals[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.encVals[i]);
    }
    s << indent << "tau[]" << std::endl;
    for (size_t i = 0; i < v.tau.size(); ++i)
    {
      s << indent << "  tau[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.tau[i]);
    }
    s << indent << "mpos[]" << std::endl;
    for (size_t i = 0; i < v.mpos.size(); ++i)
    {
      s << indent << "  mpos[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.mpos[i]);
    }
    s << indent << "jpos[]" << std::endl;
    for (size_t i = 0; i < v.jpos.size(); ++i)
    {
      s << indent << "  jpos[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.jpos[i]);
    }
    s << indent << "mvel[]" << std::endl;
    for (size_t i = 0; i < v.mvel.size(); ++i)
    {
      s << indent << "  mvel[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.mvel[i]);
    }
    s << indent << "jvel[]" << std::endl;
    for (size_t i = 0; i < v.jvel.size(); ++i)
    {
      s << indent << "  jvel[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.jvel[i]);
    }
    s << indent << "mpos_d[]" << std::endl;
    for (size_t i = 0; i < v.mpos_d.size(); ++i)
    {
      s << indent << "  mpos_d[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.mpos_d[i]);
    }
    s << indent << "jpos_d[]" << std::endl;
    for (size_t i = 0; i < v.jpos_d.size(); ++i)
    {
      s << indent << "  jpos_d[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.jpos_d[i]);
    }
    s << indent << "grasp_d[]" << std::endl;
    for (size_t i = 0; i < v.grasp_d.size(); ++i)
    {
      s << indent << "  grasp_d[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.grasp_d[i]);
    }
    s << indent << "encoffsets[]" << std::endl;
    for (size_t i = 0; i < v.encoffsets.size(); ++i)
    {
      s << indent << "  encoffsets[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.encoffsets[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // RAVEN_2_MESSAGE_RAVEN_STATE_H

