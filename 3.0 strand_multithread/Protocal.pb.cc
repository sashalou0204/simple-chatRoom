// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Protocal.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Protocal.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* PBindName_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PBindName_reflection_ = NULL;
const ::google::protobuf::Descriptor* PChat_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PChat_reflection_ = NULL;
const ::google::protobuf::Descriptor* PRoomInformation_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PRoomInformation_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Protocal_2eproto() {
  protobuf_AddDesc_Protocal_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Protocal.proto");
  GOOGLE_CHECK(file != NULL);
  PBindName_descriptor_ = file->message_type(0);
  static const int PBindName_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBindName, name_),
  };
  PBindName_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PBindName_descriptor_,
      PBindName::default_instance_,
      PBindName_offsets_,
      -1,
      -1,
      -1,
      sizeof(PBindName),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBindName, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PBindName, _is_default_instance_));
  PChat_descriptor_ = file->message_type(1);
  static const int PChat_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PChat, information_),
  };
  PChat_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PChat_descriptor_,
      PChat::default_instance_,
      PChat_offsets_,
      -1,
      -1,
      -1,
      sizeof(PChat),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PChat, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PChat, _is_default_instance_));
  PRoomInformation_descriptor_ = file->message_type(2);
  static const int PRoomInformation_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PRoomInformation, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PRoomInformation, information_),
  };
  PRoomInformation_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PRoomInformation_descriptor_,
      PRoomInformation::default_instance_,
      PRoomInformation_offsets_,
      -1,
      -1,
      -1,
      sizeof(PRoomInformation),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PRoomInformation, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PRoomInformation, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Protocal_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PBindName_descriptor_, &PBindName::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PChat_descriptor_, &PChat::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PRoomInformation_descriptor_, &PRoomInformation::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Protocal_2eproto() {
  delete PBindName::default_instance_;
  delete PBindName_reflection_;
  delete PChat::default_instance_;
  delete PChat_reflection_;
  delete PRoomInformation::default_instance_;
  delete PRoomInformation_reflection_;
}

void protobuf_AddDesc_Protocal_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016Protocal.proto\"\031\n\tPBindName\022\014\n\004name\030\001 "
    "\001(\t\"\034\n\005PChat\022\023\n\013information\030\001 \001(\t\"5\n\020PRo"
    "omInformation\022\014\n\004name\030\001 \001(\t\022\023\n\013informati"
    "on\030\002 \001(\tb\006proto3", 136);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Protocal.proto", &protobuf_RegisterTypes);
  PBindName::default_instance_ = new PBindName();
  PChat::default_instance_ = new PChat();
  PRoomInformation::default_instance_ = new PRoomInformation();
  PBindName::default_instance_->InitAsDefaultInstance();
  PChat::default_instance_->InitAsDefaultInstance();
  PRoomInformation::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Protocal_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Protocal_2eproto {
  StaticDescriptorInitializer_Protocal_2eproto() {
    protobuf_AddDesc_Protocal_2eproto();
  }
} static_descriptor_initializer_Protocal_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PBindName::kNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PBindName::PBindName()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:PBindName)
}

void PBindName::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

PBindName::PBindName(const PBindName& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:PBindName)
}

void PBindName::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

PBindName::~PBindName() {
  // @@protoc_insertion_point(destructor:PBindName)
  SharedDtor();
}

void PBindName::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void PBindName::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PBindName::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PBindName_descriptor_;
}

const PBindName& PBindName::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Protocal_2eproto();
  return *default_instance_;
}

PBindName* PBindName::default_instance_ = NULL;

PBindName* PBindName::New(::google::protobuf::Arena* arena) const {
  PBindName* n = new PBindName;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PBindName::Clear() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool PBindName::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:PBindName)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "PBindName.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:PBindName)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:PBindName)
  return false;
#undef DO_
}

void PBindName::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:PBindName)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "PBindName.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // @@protoc_insertion_point(serialize_end:PBindName)
}

::google::protobuf::uint8* PBindName::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:PBindName)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "PBindName.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:PBindName)
  return target;
}

int PBindName::ByteSize() const {
  int total_size = 0;

  // optional string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PBindName::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const PBindName* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PBindName>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PBindName::MergeFrom(const PBindName& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
}

void PBindName::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PBindName::CopyFrom(const PBindName& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PBindName::IsInitialized() const {

  return true;
}

void PBindName::Swap(PBindName* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PBindName::InternalSwap(PBindName* other) {
  name_.Swap(&other->name_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PBindName::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PBindName_descriptor_;
  metadata.reflection = PBindName_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PBindName

// optional string name = 1;
void PBindName::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& PBindName::name() const {
  // @@protoc_insertion_point(field_get:PBindName.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PBindName::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PBindName.name)
}
 void PBindName::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PBindName.name)
}
 void PBindName::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PBindName.name)
}
 ::std::string* PBindName::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:PBindName.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* PBindName::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PBindName::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:PBindName.name)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PChat::kInformationFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PChat::PChat()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:PChat)
}

void PChat::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

PChat::PChat(const PChat& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:PChat)
}

void PChat::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  information_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

PChat::~PChat() {
  // @@protoc_insertion_point(destructor:PChat)
  SharedDtor();
}

void PChat::SharedDtor() {
  information_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void PChat::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PChat::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PChat_descriptor_;
}

const PChat& PChat::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Protocal_2eproto();
  return *default_instance_;
}

PChat* PChat::default_instance_ = NULL;

PChat* PChat::New(::google::protobuf::Arena* arena) const {
  PChat* n = new PChat;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PChat::Clear() {
  information_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool PChat::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:PChat)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string information = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_information()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->information().data(), this->information().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "PChat.information"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:PChat)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:PChat)
  return false;
#undef DO_
}

void PChat::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:PChat)
  // optional string information = 1;
  if (this->information().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->information().data(), this->information().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "PChat.information");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->information(), output);
  }

  // @@protoc_insertion_point(serialize_end:PChat)
}

::google::protobuf::uint8* PChat::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:PChat)
  // optional string information = 1;
  if (this->information().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->information().data(), this->information().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "PChat.information");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->information(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:PChat)
  return target;
}

int PChat::ByteSize() const {
  int total_size = 0;

  // optional string information = 1;
  if (this->information().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->information());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PChat::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const PChat* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PChat>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PChat::MergeFrom(const PChat& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.information().size() > 0) {

    information_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.information_);
  }
}

void PChat::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PChat::CopyFrom(const PChat& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PChat::IsInitialized() const {

  return true;
}

void PChat::Swap(PChat* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PChat::InternalSwap(PChat* other) {
  information_.Swap(&other->information_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PChat::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PChat_descriptor_;
  metadata.reflection = PChat_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PChat

// optional string information = 1;
void PChat::clear_information() {
  information_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& PChat::information() const {
  // @@protoc_insertion_point(field_get:PChat.information)
  return information_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PChat::set_information(const ::std::string& value) {
  
  information_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PChat.information)
}
 void PChat::set_information(const char* value) {
  
  information_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PChat.information)
}
 void PChat::set_information(const char* value, size_t size) {
  
  information_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PChat.information)
}
 ::std::string* PChat::mutable_information() {
  
  // @@protoc_insertion_point(field_mutable:PChat.information)
  return information_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* PChat::release_information() {
  
  return information_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PChat::set_allocated_information(::std::string* information) {
  if (information != NULL) {
    
  } else {
    
  }
  information_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), information);
  // @@protoc_insertion_point(field_set_allocated:PChat.information)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PRoomInformation::kNameFieldNumber;
const int PRoomInformation::kInformationFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PRoomInformation::PRoomInformation()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:PRoomInformation)
}

void PRoomInformation::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

PRoomInformation::PRoomInformation(const PRoomInformation& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:PRoomInformation)
}

void PRoomInformation::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  information_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

PRoomInformation::~PRoomInformation() {
  // @@protoc_insertion_point(destructor:PRoomInformation)
  SharedDtor();
}

void PRoomInformation::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  information_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void PRoomInformation::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PRoomInformation::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PRoomInformation_descriptor_;
}

const PRoomInformation& PRoomInformation::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Protocal_2eproto();
  return *default_instance_;
}

PRoomInformation* PRoomInformation::default_instance_ = NULL;

PRoomInformation* PRoomInformation::New(::google::protobuf::Arena* arena) const {
  PRoomInformation* n = new PRoomInformation;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PRoomInformation::Clear() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  information_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool PRoomInformation::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:PRoomInformation)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "PRoomInformation.name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_information;
        break;
      }

      // optional string information = 2;
      case 2: {
        if (tag == 18) {
         parse_information:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_information()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->information().data(), this->information().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "PRoomInformation.information"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:PRoomInformation)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:PRoomInformation)
  return false;
#undef DO_
}

void PRoomInformation::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:PRoomInformation)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "PRoomInformation.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // optional string information = 2;
  if (this->information().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->information().data(), this->information().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "PRoomInformation.information");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->information(), output);
  }

  // @@protoc_insertion_point(serialize_end:PRoomInformation)
}

::google::protobuf::uint8* PRoomInformation::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:PRoomInformation)
  // optional string name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "PRoomInformation.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // optional string information = 2;
  if (this->information().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->information().data(), this->information().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "PRoomInformation.information");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->information(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:PRoomInformation)
  return target;
}

int PRoomInformation::ByteSize() const {
  int total_size = 0;

  // optional string name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional string information = 2;
  if (this->information().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->information());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PRoomInformation::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const PRoomInformation* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const PRoomInformation>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PRoomInformation::MergeFrom(const PRoomInformation& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.information().size() > 0) {

    information_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.information_);
  }
}

void PRoomInformation::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PRoomInformation::CopyFrom(const PRoomInformation& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PRoomInformation::IsInitialized() const {

  return true;
}

void PRoomInformation::Swap(PRoomInformation* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PRoomInformation::InternalSwap(PRoomInformation* other) {
  name_.Swap(&other->name_);
  information_.Swap(&other->information_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PRoomInformation::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PRoomInformation_descriptor_;
  metadata.reflection = PRoomInformation_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PRoomInformation

// optional string name = 1;
void PRoomInformation::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& PRoomInformation::name() const {
  // @@protoc_insertion_point(field_get:PRoomInformation.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PRoomInformation::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PRoomInformation.name)
}
 void PRoomInformation::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PRoomInformation.name)
}
 void PRoomInformation::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PRoomInformation.name)
}
 ::std::string* PRoomInformation::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:PRoomInformation.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* PRoomInformation::release_name() {
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PRoomInformation::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:PRoomInformation.name)
}

// optional string information = 2;
void PRoomInformation::clear_information() {
  information_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& PRoomInformation::information() const {
  // @@protoc_insertion_point(field_get:PRoomInformation.information)
  return information_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PRoomInformation::set_information(const ::std::string& value) {
  
  information_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:PRoomInformation.information)
}
 void PRoomInformation::set_information(const char* value) {
  
  information_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:PRoomInformation.information)
}
 void PRoomInformation::set_information(const char* value, size_t size) {
  
  information_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:PRoomInformation.information)
}
 ::std::string* PRoomInformation::mutable_information() {
  
  // @@protoc_insertion_point(field_mutable:PRoomInformation.information)
  return information_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* PRoomInformation::release_information() {
  
  return information_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void PRoomInformation::set_allocated_information(::std::string* information) {
  if (information != NULL) {
    
  } else {
    
  }
  information_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), information);
  // @@protoc_insertion_point(field_set_allocated:PRoomInformation.information)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
