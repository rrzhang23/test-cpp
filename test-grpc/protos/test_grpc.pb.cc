// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test_grpc.proto

#include "test_grpc.pb.h"

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

namespace test_grpc {
class PutRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PutRequest> _instance;
} _PutRequest_default_instance_;
class PutReplyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PutReply> _instance;
} _PutReply_default_instance_;
}  // namespace test_grpc
static void InitDefaultsPutRequest_test_5fgrpc_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::test_grpc::_PutRequest_default_instance_;
    new (ptr) ::test_grpc::PutRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::test_grpc::PutRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_PutRequest_test_5fgrpc_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsPutRequest_test_5fgrpc_2eproto}, {}};

static void InitDefaultsPutReply_test_5fgrpc_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::test_grpc::_PutReply_default_instance_;
    new (ptr) ::test_grpc::PutReply();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::test_grpc::PutReply::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_PutReply_test_5fgrpc_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsPutReply_test_5fgrpc_2eproto}, {}};

void InitDefaults_test_5fgrpc_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_PutRequest_test_5fgrpc_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_PutReply_test_5fgrpc_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_test_5fgrpc_2eproto[2];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_test_5fgrpc_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_test_5fgrpc_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_test_5fgrpc_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::test_grpc::PutRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::test_grpc::PutRequest, str_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::test_grpc::PutReply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::test_grpc::PutReply, str_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::test_grpc::PutRequest)},
  { 6, -1, sizeof(::test_grpc::PutReply)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::test_grpc::_PutRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::test_grpc::_PutReply_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_test_5fgrpc_2eproto = {
  {}, AddDescriptors_test_5fgrpc_2eproto, "test_grpc.proto", schemas,
  file_default_instances, TableStruct_test_5fgrpc_2eproto::offsets,
  file_level_metadata_test_5fgrpc_2eproto, 2, file_level_enum_descriptors_test_5fgrpc_2eproto, file_level_service_descriptors_test_5fgrpc_2eproto,
};

const char descriptor_table_protodef_test_5fgrpc_2eproto[] =
  "\n\017test_grpc.proto\022\ttest_grpc\"\031\n\nPutReque"
  "st\022\013\n\003str\030\001 \001(\014\"\027\n\010PutReply\022\013\n\003str\030\001 \001(\014"
  "2\?\n\010TestGRpc\0223\n\003Put\022\025.test_grpc.PutReque"
  "st\032\023.test_grpc.PutReply\"\000b\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_test_5fgrpc_2eproto = {
  false, InitDefaults_test_5fgrpc_2eproto, 
  descriptor_table_protodef_test_5fgrpc_2eproto,
  "test_grpc.proto", &assign_descriptors_table_test_5fgrpc_2eproto, 153,
};

void AddDescriptors_test_5fgrpc_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_test_5fgrpc_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_test_5fgrpc_2eproto = []() { AddDescriptors_test_5fgrpc_2eproto(); return true; }();
namespace test_grpc {

// ===================================================================

void PutRequest::InitAsDefaultInstance() {
}
class PutRequest::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PutRequest::kStrFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PutRequest::PutRequest()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:test_grpc.PutRequest)
}
PutRequest::PutRequest(const PutRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  str_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.str().size() > 0) {
    str_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.str_);
  }
  // @@protoc_insertion_point(copy_constructor:test_grpc.PutRequest)
}

void PutRequest::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_PutRequest_test_5fgrpc_2eproto.base);
  str_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

PutRequest::~PutRequest() {
  // @@protoc_insertion_point(destructor:test_grpc.PutRequest)
  SharedDtor();
}

void PutRequest::SharedDtor() {
  str_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PutRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PutRequest& PutRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_PutRequest_test_5fgrpc_2eproto.base);
  return *internal_default_instance();
}


void PutRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:test_grpc.PutRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  str_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* PutRequest::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<PutRequest*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // bytes str = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        object = msg->mutable_str();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParser;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheck(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
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
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool PutRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:test_grpc.PutRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes str = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_str()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:test_grpc.PutRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:test_grpc.PutRequest)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void PutRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:test_grpc.PutRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes str = 1;
  if (this->str().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->str(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:test_grpc.PutRequest)
}

::google::protobuf::uint8* PutRequest::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:test_grpc.PutRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes str = 1;
  if (this->str().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->str(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:test_grpc.PutRequest)
  return target;
}

size_t PutRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:test_grpc.PutRequest)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes str = 1;
  if (this->str().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->str());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PutRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:test_grpc.PutRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const PutRequest* source =
      ::google::protobuf::DynamicCastToGenerated<PutRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:test_grpc.PutRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:test_grpc.PutRequest)
    MergeFrom(*source);
  }
}

void PutRequest::MergeFrom(const PutRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:test_grpc.PutRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.str().size() > 0) {

    str_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.str_);
  }
}

void PutRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:test_grpc.PutRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PutRequest::CopyFrom(const PutRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:test_grpc.PutRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PutRequest::IsInitialized() const {
  return true;
}

void PutRequest::Swap(PutRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PutRequest::InternalSwap(PutRequest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  str_.Swap(&other->str_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata PutRequest::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_test_5fgrpc_2eproto);
  return ::file_level_metadata_test_5fgrpc_2eproto[kIndexInFileMessages];
}


// ===================================================================

void PutReply::InitAsDefaultInstance() {
}
class PutReply::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PutReply::kStrFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PutReply::PutReply()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:test_grpc.PutReply)
}
PutReply::PutReply(const PutReply& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  str_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.str().size() > 0) {
    str_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.str_);
  }
  // @@protoc_insertion_point(copy_constructor:test_grpc.PutReply)
}

void PutReply::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_PutReply_test_5fgrpc_2eproto.base);
  str_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

PutReply::~PutReply() {
  // @@protoc_insertion_point(destructor:test_grpc.PutReply)
  SharedDtor();
}

void PutReply::SharedDtor() {
  str_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PutReply::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PutReply& PutReply::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_PutReply_test_5fgrpc_2eproto.base);
  return *internal_default_instance();
}


void PutReply::Clear() {
// @@protoc_insertion_point(message_clear_start:test_grpc.PutReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  str_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* PutReply::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<PutReply*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // bytes str = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        object = msg->mutable_str();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParser;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheck(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
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
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool PutReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:test_grpc.PutReply)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes str = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_str()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:test_grpc.PutReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:test_grpc.PutReply)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void PutReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:test_grpc.PutReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes str = 1;
  if (this->str().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->str(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:test_grpc.PutReply)
}

::google::protobuf::uint8* PutReply::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:test_grpc.PutReply)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes str = 1;
  if (this->str().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->str(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:test_grpc.PutReply)
  return target;
}

size_t PutReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:test_grpc.PutReply)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes str = 1;
  if (this->str().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->str());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PutReply::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:test_grpc.PutReply)
  GOOGLE_DCHECK_NE(&from, this);
  const PutReply* source =
      ::google::protobuf::DynamicCastToGenerated<PutReply>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:test_grpc.PutReply)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:test_grpc.PutReply)
    MergeFrom(*source);
  }
}

void PutReply::MergeFrom(const PutReply& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:test_grpc.PutReply)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.str().size() > 0) {

    str_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.str_);
  }
}

void PutReply::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:test_grpc.PutReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PutReply::CopyFrom(const PutReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:test_grpc.PutReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PutReply::IsInitialized() const {
  return true;
}

void PutReply::Swap(PutReply* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PutReply::InternalSwap(PutReply* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  str_.Swap(&other->str_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata PutReply::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_test_5fgrpc_2eproto);
  return ::file_level_metadata_test_5fgrpc_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace test_grpc
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::test_grpc::PutRequest* Arena::CreateMaybeMessage< ::test_grpc::PutRequest >(Arena* arena) {
  return Arena::CreateInternal< ::test_grpc::PutRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::test_grpc::PutReply* Arena::CreateMaybeMessage< ::test_grpc::PutReply >(Arena* arena) {
  return Arena::CreateInternal< ::test_grpc::PutReply >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>