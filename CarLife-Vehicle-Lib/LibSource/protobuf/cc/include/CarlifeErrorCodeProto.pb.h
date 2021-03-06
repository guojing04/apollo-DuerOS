// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CarlifeErrorCodeProto.proto

#ifndef PROTOBUF_CarlifeErrorCodeProto_2eproto__INCLUDED
#define PROTOBUF_CarlifeErrorCodeProto_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace baidu {
namespace carlife {
namespace protobuf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CarlifeErrorCodeProto_2eproto();
void protobuf_AssignDesc_CarlifeErrorCodeProto_2eproto();
void protobuf_ShutdownFile_CarlifeErrorCodeProto_2eproto();

class CarlifeErrorCode;

// ===================================================================

class CarlifeErrorCode : public ::google::protobuf::Message {
 public:
  CarlifeErrorCode();
  virtual ~CarlifeErrorCode();

  CarlifeErrorCode(const CarlifeErrorCode& from);

  inline CarlifeErrorCode& operator=(const CarlifeErrorCode& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CarlifeErrorCode& default_instance();

  void Swap(CarlifeErrorCode* other);

  // implements Message ----------------------------------------------

  CarlifeErrorCode* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CarlifeErrorCode& from);
  void MergeFrom(const CarlifeErrorCode& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string errorCode = 1;
  inline bool has_errorcode() const;
  inline void clear_errorcode();
  static const int kErrorCodeFieldNumber = 1;
  inline const ::std::string& errorcode() const;
  inline void set_errorcode(const ::std::string& value);
  inline void set_errorcode(const char* value);
  inline void set_errorcode(const char* value, size_t size);
  inline ::std::string* mutable_errorcode();
  inline ::std::string* release_errorcode();
  inline void set_allocated_errorcode(::std::string* errorcode);

  // @@protoc_insertion_point(class_scope:com.baidu.carlife.protobuf.CarlifeErrorCode)
 private:
  inline void set_has_errorcode();
  inline void clear_has_errorcode();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* errorcode_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_CarlifeErrorCodeProto_2eproto();
  friend void protobuf_AssignDesc_CarlifeErrorCodeProto_2eproto();
  friend void protobuf_ShutdownFile_CarlifeErrorCodeProto_2eproto();

  void InitAsDefaultInstance();
  static CarlifeErrorCode* default_instance_;
};
// ===================================================================


// ===================================================================

// CarlifeErrorCode

// required string errorCode = 1;
inline bool CarlifeErrorCode::has_errorcode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CarlifeErrorCode::set_has_errorcode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CarlifeErrorCode::clear_has_errorcode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CarlifeErrorCode::clear_errorcode() {
  if (errorcode_ != &::google::protobuf::internal::kEmptyString) {
    errorcode_->clear();
  }
  clear_has_errorcode();
}
inline const ::std::string& CarlifeErrorCode::errorcode() const {
  return *errorcode_;
}
inline void CarlifeErrorCode::set_errorcode(const ::std::string& value) {
  set_has_errorcode();
  if (errorcode_ == &::google::protobuf::internal::kEmptyString) {
    errorcode_ = new ::std::string;
  }
  errorcode_->assign(value);
}
inline void CarlifeErrorCode::set_errorcode(const char* value) {
  set_has_errorcode();
  if (errorcode_ == &::google::protobuf::internal::kEmptyString) {
    errorcode_ = new ::std::string;
  }
  errorcode_->assign(value);
}
inline void CarlifeErrorCode::set_errorcode(const char* value, size_t size) {
  set_has_errorcode();
  if (errorcode_ == &::google::protobuf::internal::kEmptyString) {
    errorcode_ = new ::std::string;
  }
  errorcode_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CarlifeErrorCode::mutable_errorcode() {
  set_has_errorcode();
  if (errorcode_ == &::google::protobuf::internal::kEmptyString) {
    errorcode_ = new ::std::string;
  }
  return errorcode_;
}
inline ::std::string* CarlifeErrorCode::release_errorcode() {
  clear_has_errorcode();
  if (errorcode_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = errorcode_;
    errorcode_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void CarlifeErrorCode::set_allocated_errorcode(::std::string* errorcode) {
  if (errorcode_ != &::google::protobuf::internal::kEmptyString) {
    delete errorcode_;
  }
  if (errorcode) {
    set_has_errorcode();
    errorcode_ = errorcode;
  } else {
    clear_has_errorcode();
    errorcode_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace carlife
}  // namespace baidu
}  // namespace com

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CarlifeErrorCodeProto_2eproto__INCLUDED
