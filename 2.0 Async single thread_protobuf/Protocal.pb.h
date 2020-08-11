// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Protocal.proto

#ifndef PROTOBUF_Protocal_2eproto__INCLUDED
#define PROTOBUF_Protocal_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_Protocal_2eproto();
void protobuf_AssignDesc_Protocal_2eproto();
void protobuf_ShutdownFile_Protocal_2eproto();

class PBindName;
class PChat;
class PRoomInformation;

// ===================================================================

class PBindName : public ::google::protobuf::Message {
 public:
  PBindName();
  virtual ~PBindName();

  PBindName(const PBindName& from);

  inline PBindName& operator=(const PBindName& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PBindName& default_instance();

  void Swap(PBindName* other);

  // implements Message ----------------------------------------------

  inline PBindName* New() const { return New(NULL); }

  PBindName* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PBindName& from);
  void MergeFrom(const PBindName& from);
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
  void InternalSwap(PBindName* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:PBindName)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_Protocal_2eproto();
  friend void protobuf_AssignDesc_Protocal_2eproto();
  friend void protobuf_ShutdownFile_Protocal_2eproto();

  void InitAsDefaultInstance();
  static PBindName* default_instance_;
};
// -------------------------------------------------------------------

class PChat : public ::google::protobuf::Message {
 public:
  PChat();
  virtual ~PChat();

  PChat(const PChat& from);

  inline PChat& operator=(const PChat& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PChat& default_instance();

  void Swap(PChat* other);

  // implements Message ----------------------------------------------

  inline PChat* New() const { return New(NULL); }

  PChat* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PChat& from);
  void MergeFrom(const PChat& from);
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
  void InternalSwap(PChat* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string information = 1;
  void clear_information();
  static const int kInformationFieldNumber = 1;
  const ::std::string& information() const;
  void set_information(const ::std::string& value);
  void set_information(const char* value);
  void set_information(const char* value, size_t size);
  ::std::string* mutable_information();
  ::std::string* release_information();
  void set_allocated_information(::std::string* information);

  // @@protoc_insertion_point(class_scope:PChat)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr information_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_Protocal_2eproto();
  friend void protobuf_AssignDesc_Protocal_2eproto();
  friend void protobuf_ShutdownFile_Protocal_2eproto();

  void InitAsDefaultInstance();
  static PChat* default_instance_;
};
// -------------------------------------------------------------------

class PRoomInformation : public ::google::protobuf::Message {
 public:
  PRoomInformation();
  virtual ~PRoomInformation();

  PRoomInformation(const PRoomInformation& from);

  inline PRoomInformation& operator=(const PRoomInformation& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const PRoomInformation& default_instance();

  void Swap(PRoomInformation* other);

  // implements Message ----------------------------------------------

  inline PRoomInformation* New() const { return New(NULL); }

  PRoomInformation* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const PRoomInformation& from);
  void MergeFrom(const PRoomInformation& from);
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
  void InternalSwap(PRoomInformation* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // optional string information = 2;
  void clear_information();
  static const int kInformationFieldNumber = 2;
  const ::std::string& information() const;
  void set_information(const ::std::string& value);
  void set_information(const char* value);
  void set_information(const char* value, size_t size);
  ::std::string* mutable_information();
  ::std::string* release_information();
  void set_allocated_information(::std::string* information);

  // @@protoc_insertion_point(class_scope:PRoomInformation)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr information_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_Protocal_2eproto();
  friend void protobuf_AssignDesc_Protocal_2eproto();
  friend void protobuf_ShutdownFile_Protocal_2eproto();

  void InitAsDefaultInstance();
  static PRoomInformation* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PBindName

// optional string name = 1;
inline void PBindName::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PBindName::name() const {
  // @@protoc_insertion_point(field_get:PBindName.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PBindName::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PBindName.name)
}
inline void PBindName::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PBindName.name)
}
inline void PBindName::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PBindName.name)
}
inline ::std::string* PBindName::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:PBindName.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PBindName::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PBindName::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:PBindName.name)
}

// -------------------------------------------------------------------

// PChat

// optional string information = 1;
inline void PChat::clear_information() {
  information_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PChat::information() const {
  // @@protoc_insertion_point(field_get:PChat.information)
  return information_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PChat::set_information(const ::std::string& value) {
  
  information_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PChat.information)
}
inline void PChat::set_information(const char* value) {
  
  information_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PChat.information)
}
inline void PChat::set_information(const char* value, size_t size) {
  
  information_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PChat.information)
}
inline ::std::string* PChat::mutable_information() {
  
  // @@protoc_insertion_point(field_mutable:PChat.information)
  return information_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PChat::release_information() {
  
  return information_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PChat::set_allocated_information(::std::string* information) {
  if (information != NULL) {
    
  } else {
    
  }
  information_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), information);
  // @@protoc_insertion_point(field_set_allocated:PChat.information)
}

// -------------------------------------------------------------------

// PRoomInformation

// optional string name = 1;
inline void PRoomInformation::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PRoomInformation::name() const {
  // @@protoc_insertion_point(field_get:PRoomInformation.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PRoomInformation::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PRoomInformation.name)
}
inline void PRoomInformation::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PRoomInformation.name)
}
inline void PRoomInformation::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PRoomInformation.name)
}
inline ::std::string* PRoomInformation::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:PRoomInformation.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PRoomInformation::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PRoomInformation::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:PRoomInformation.name)
}

// optional string information = 2;
inline void PRoomInformation::clear_information() {
  information_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& PRoomInformation::information() const {
  // @@protoc_insertion_point(field_get:PRoomInformation.information)
  return information_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PRoomInformation::set_information(const ::std::string& value) {
  
  information_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PRoomInformation.information)
}
inline void PRoomInformation::set_information(const char* value) {
  
  information_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PRoomInformation.information)
}
inline void PRoomInformation::set_information(const char* value, size_t size) {
  
  information_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PRoomInformation.information)
}
inline ::std::string* PRoomInformation::mutable_information() {
  
  // @@protoc_insertion_point(field_mutable:PRoomInformation.information)
  return information_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PRoomInformation::release_information() {
  
  return information_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PRoomInformation::set_allocated_information(::std::string* information) {
  if (information != NULL) {
    
  } else {
    
  }
  information_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), information);
  // @@protoc_insertion_point(field_set_allocated:PRoomInformation.information)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Protocal_2eproto__INCLUDED
