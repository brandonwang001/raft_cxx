// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: raft.proto

#include "raft.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace raft {
class AppendEntriesInDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AppendEntriesIn> _instance;
} _AppendEntriesIn_default_instance_;
class AppendEntriesOutDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<AppendEntriesOut> _instance;
} _AppendEntriesOut_default_instance_;
}  // namespace raft
static void InitDefaultsAppendEntriesIn_raft_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::raft::_AppendEntriesIn_default_instance_;
    new (ptr) ::raft::AppendEntriesIn();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::raft::AppendEntriesIn::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_AppendEntriesIn_raft_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsAppendEntriesIn_raft_2eproto}, {}};

static void InitDefaultsAppendEntriesOut_raft_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::raft::_AppendEntriesOut_default_instance_;
    new (ptr) ::raft::AppendEntriesOut();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::raft::AppendEntriesOut::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_AppendEntriesOut_raft_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsAppendEntriesOut_raft_2eproto}, {}};

void InitDefaults_raft_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_AppendEntriesIn_raft_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_AppendEntriesOut_raft_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_raft_2eproto[2];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_raft_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_raft_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_raft_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::raft::AppendEntriesIn, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::raft::AppendEntriesOut, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::raft::AppendEntriesIn)},
  { 5, -1, sizeof(::raft::AppendEntriesOut)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::raft::_AppendEntriesIn_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::raft::_AppendEntriesOut_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_raft_2eproto = {
  {}, AddDescriptors_raft_2eproto, "raft.proto", schemas,
  file_default_instances, TableStruct_raft_2eproto::offsets,
  file_level_metadata_raft_2eproto, 2, file_level_enum_descriptors_raft_2eproto, file_level_service_descriptors_raft_2eproto,
};

const char descriptor_table_protodef_raft_2eproto[] =
  "\n\nraft.proto\022\004raft\"\021\n\017AppendEntriesIn\"\022\n"
  "\020AppendEntriesOutb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_raft_2eproto = {
  false, InitDefaults_raft_2eproto, 
  descriptor_table_protodef_raft_2eproto,
  "raft.proto", &assign_descriptors_table_raft_2eproto, 65,
};

void AddDescriptors_raft_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_raft_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_raft_2eproto = []() { AddDescriptors_raft_2eproto(); return true; }();
namespace raft {

// ===================================================================

void AppendEntriesIn::InitAsDefaultInstance() {
}
class AppendEntriesIn::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AppendEntriesIn::AppendEntriesIn()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:raft.AppendEntriesIn)
}
AppendEntriesIn::AppendEntriesIn(const AppendEntriesIn& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:raft.AppendEntriesIn)
}

void AppendEntriesIn::SharedCtor() {
}

AppendEntriesIn::~AppendEntriesIn() {
  // @@protoc_insertion_point(destructor:raft.AppendEntriesIn)
  SharedDtor();
}

void AppendEntriesIn::SharedDtor() {
}

void AppendEntriesIn::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const AppendEntriesIn& AppendEntriesIn::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_AppendEntriesIn_raft_2eproto.base);
  return *internal_default_instance();
}


void AppendEntriesIn::Clear() {
// @@protoc_insertion_point(message_clear_start:raft.AppendEntriesIn)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* AppendEntriesIn::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<AppendEntriesIn*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      default: {
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool AppendEntriesIn::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:raft.AppendEntriesIn)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:raft.AppendEntriesIn)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:raft.AppendEntriesIn)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void AppendEntriesIn::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:raft.AppendEntriesIn)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:raft.AppendEntriesIn)
}

::google::protobuf::uint8* AppendEntriesIn::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:raft.AppendEntriesIn)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:raft.AppendEntriesIn)
  return target;
}

size_t AppendEntriesIn::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:raft.AppendEntriesIn)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AppendEntriesIn::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:raft.AppendEntriesIn)
  GOOGLE_DCHECK_NE(&from, this);
  const AppendEntriesIn* source =
      ::google::protobuf::DynamicCastToGenerated<AppendEntriesIn>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:raft.AppendEntriesIn)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:raft.AppendEntriesIn)
    MergeFrom(*source);
  }
}

void AppendEntriesIn::MergeFrom(const AppendEntriesIn& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:raft.AppendEntriesIn)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void AppendEntriesIn::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:raft.AppendEntriesIn)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AppendEntriesIn::CopyFrom(const AppendEntriesIn& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:raft.AppendEntriesIn)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AppendEntriesIn::IsInitialized() const {
  return true;
}

void AppendEntriesIn::Swap(AppendEntriesIn* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AppendEntriesIn::InternalSwap(AppendEntriesIn* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AppendEntriesIn::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_raft_2eproto);
  return ::file_level_metadata_raft_2eproto[kIndexInFileMessages];
}


// ===================================================================

void AppendEntriesOut::InitAsDefaultInstance() {
}
class AppendEntriesOut::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AppendEntriesOut::AppendEntriesOut()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:raft.AppendEntriesOut)
}
AppendEntriesOut::AppendEntriesOut(const AppendEntriesOut& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:raft.AppendEntriesOut)
}

void AppendEntriesOut::SharedCtor() {
}

AppendEntriesOut::~AppendEntriesOut() {
  // @@protoc_insertion_point(destructor:raft.AppendEntriesOut)
  SharedDtor();
}

void AppendEntriesOut::SharedDtor() {
}

void AppendEntriesOut::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const AppendEntriesOut& AppendEntriesOut::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_AppendEntriesOut_raft_2eproto.base);
  return *internal_default_instance();
}


void AppendEntriesOut::Clear() {
// @@protoc_insertion_point(message_clear_start:raft.AppendEntriesOut)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* AppendEntriesOut::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<AppendEntriesOut*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      default: {
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool AppendEntriesOut::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:raft.AppendEntriesOut)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
  handle_unusual:
    if (tag == 0) {
      goto success;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, _internal_metadata_.mutable_unknown_fields()));
  }
success:
  // @@protoc_insertion_point(parse_success:raft.AppendEntriesOut)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:raft.AppendEntriesOut)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void AppendEntriesOut::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:raft.AppendEntriesOut)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:raft.AppendEntriesOut)
}

::google::protobuf::uint8* AppendEntriesOut::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:raft.AppendEntriesOut)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:raft.AppendEntriesOut)
  return target;
}

size_t AppendEntriesOut::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:raft.AppendEntriesOut)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AppendEntriesOut::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:raft.AppendEntriesOut)
  GOOGLE_DCHECK_NE(&from, this);
  const AppendEntriesOut* source =
      ::google::protobuf::DynamicCastToGenerated<AppendEntriesOut>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:raft.AppendEntriesOut)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:raft.AppendEntriesOut)
    MergeFrom(*source);
  }
}

void AppendEntriesOut::MergeFrom(const AppendEntriesOut& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:raft.AppendEntriesOut)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void AppendEntriesOut::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:raft.AppendEntriesOut)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AppendEntriesOut::CopyFrom(const AppendEntriesOut& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:raft.AppendEntriesOut)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AppendEntriesOut::IsInitialized() const {
  return true;
}

void AppendEntriesOut::Swap(AppendEntriesOut* other) {
  if (other == this) return;
  InternalSwap(other);
}
void AppendEntriesOut::InternalSwap(AppendEntriesOut* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata AppendEntriesOut::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_raft_2eproto);
  return ::file_level_metadata_raft_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace raft
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::raft::AppendEntriesIn* Arena::CreateMaybeMessage< ::raft::AppendEntriesIn >(Arena* arena) {
  return Arena::CreateInternal< ::raft::AppendEntriesIn >(arena);
}
template<> PROTOBUF_NOINLINE ::raft::AppendEntriesOut* Arena::CreateMaybeMessage< ::raft::AppendEntriesOut >(Arena* arena) {
  return Arena::CreateInternal< ::raft::AppendEntriesOut >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
