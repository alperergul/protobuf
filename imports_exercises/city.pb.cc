// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: city.proto

#include "city.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = ::PROTOBUF_NAMESPACE_ID::internal;
PROTOBUF_CONSTEXPR City::City(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.name_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.country_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.zip_code_)*/ ::int64_t{0}

  , /*decltype(_impl_._cached_size_)*/{}} {}
struct CityDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CityDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~CityDefaultTypeInternal() {}
  union {
    City _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CityDefaultTypeInternal _City_default_instance_;
static ::_pb::Metadata file_level_metadata_city_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_city_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_city_2eproto = nullptr;
const ::uint32_t TableStruct_city_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::City, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::City, _impl_.name_),
    PROTOBUF_FIELD_OFFSET(::City, _impl_.zip_code_),
    PROTOBUF_FIELD_OFFSET(::City, _impl_.country_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::City)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::_City_default_instance_._instance,
};
const char descriptor_table_protodef_city_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\ncity.proto\"7\n\004City\022\014\n\004name\030\001 \001(\t\022\020\n\010zi"
    "p_code\030\002 \001(\003\022\017\n\007country\030\003 \001(\tb\006proto3"
};
static ::absl::once_flag descriptor_table_city_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_city_2eproto = {
    false,
    false,
    77,
    descriptor_table_protodef_city_2eproto,
    "city.proto",
    &descriptor_table_city_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_city_2eproto::offsets,
    file_level_metadata_city_2eproto,
    file_level_enum_descriptors_city_2eproto,
    file_level_service_descriptors_city_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_city_2eproto_getter() {
  return &descriptor_table_city_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_city_2eproto(&descriptor_table_city_2eproto);
// ===================================================================

class City::_Internal {
 public:
};

City::City(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:City)
}
City::City(const City& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  City* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.name_) {}

    , decltype(_impl_.country_) {}

    , decltype(_impl_.zip_code_) {}

    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), _this->GetArenaForAllocation());
  }
  _impl_.country_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.country_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_country().empty()) {
    _this->_impl_.country_.Set(from._internal_country(), _this->GetArenaForAllocation());
  }
  _this->_impl_.zip_code_ = from._impl_.zip_code_;
  // @@protoc_insertion_point(copy_constructor:City)
}

inline void City::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.name_) {}

    , decltype(_impl_.country_) {}

    , decltype(_impl_.zip_code_) { ::int64_t{0} }

    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.country_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.country_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

City::~City() {
  // @@protoc_insertion_point(destructor:City)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void City::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.name_.Destroy();
  _impl_.country_.Destroy();
}

void City::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void City::Clear() {
// @@protoc_insertion_point(message_clear_start:City)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.name_.ClearToEmpty();
  _impl_.country_.ClearToEmpty();
  _impl_.zip_code_ = ::int64_t{0};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* City::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "City.name"));
        } else {
          goto handle_unusual;
        }
        continue;
      // int64 zip_code = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 16)) {
          _impl_.zip_code_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else {
          goto handle_unusual;
        }
        continue;
      // string country = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_country();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "City.country"));
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* City::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:City)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    const std::string& _s = this->_internal_name();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "City.name");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // int64 zip_code = 2;
  if (this->_internal_zip_code() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(
        2, this->_internal_zip_code(), target);
  }

  // string country = 3;
  if (!this->_internal_country().empty()) {
    const std::string& _s = this->_internal_country();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "City.country");
    target = stream->WriteStringMaybeAliased(3, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:City)
  return target;
}

::size_t City::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:City)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string name = 1;
  if (!this->_internal_name().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_name());
  }

  // string country = 3;
  if (!this->_internal_country().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_country());
  }

  // int64 zip_code = 2;
  if (this->_internal_zip_code() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(
        this->_internal_zip_code());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData City::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    City::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*City::GetClassData() const { return &_class_data_; }


void City::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<City*>(&to_msg);
  auto& from = static_cast<const City&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:City)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (!from._internal_country().empty()) {
    _this->_internal_set_country(from._internal_country());
  }
  if (from._internal_zip_code() != 0) {
    _this->_internal_set_zip_code(from._internal_zip_code());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void City::CopyFrom(const City& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:City)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool City::IsInitialized() const {
  return true;
}

void City::InternalSwap(City* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.name_, lhs_arena,
                                       &other->_impl_.name_, rhs_arena);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.country_, lhs_arena,
                                       &other->_impl_.country_, rhs_arena);

  swap(_impl_.zip_code_, other->_impl_.zip_code_);
}

::PROTOBUF_NAMESPACE_ID::Metadata City::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_city_2eproto_getter, &descriptor_table_city_2eproto_once,
      file_level_metadata_city_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::City*
Arena::CreateMaybeMessage< ::City >(Arena* arena) {
  return Arena::CreateMessageInternal< ::City >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
