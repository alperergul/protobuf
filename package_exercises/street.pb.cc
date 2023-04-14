// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: street.proto

#include "street.pb.h"

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
namespace my {
namespace street {
PROTOBUF_CONSTEXPR Street::Street(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.street_name_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }

  , /*decltype(_impl_.city_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct StreetDefaultTypeInternal {
  PROTOBUF_CONSTEXPR StreetDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~StreetDefaultTypeInternal() {}
  union {
    Street _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StreetDefaultTypeInternal _Street_default_instance_;
}  // namespace street
}  // namespace my
static ::_pb::Metadata file_level_metadata_street_2eproto[1];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_street_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_street_2eproto = nullptr;
const ::uint32_t TableStruct_street_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::my::street::Street, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::my::street::Street, _impl_.street_name_),
    PROTOBUF_FIELD_OFFSET(::my::street::Street, _impl_.city_),
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, -1, -1, sizeof(::my::street::Street)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::my::street::_Street_default_instance_._instance,
};
const char descriptor_table_protodef_street_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\014street.proto\022\tmy.street\032\ncity.proto\":\n"
    "\006Street\022\023\n\013street_name\030\001 \001(\t\022\033\n\004city\030\002 \001"
    "(\0132\r.my.city.Cityb\006proto3"
};
static const ::_pbi::DescriptorTable* const descriptor_table_street_2eproto_deps[1] =
    {
        &::descriptor_table_city_2eproto,
};
static ::absl::once_flag descriptor_table_street_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_street_2eproto = {
    false,
    false,
    105,
    descriptor_table_protodef_street_2eproto,
    "street.proto",
    &descriptor_table_street_2eproto_once,
    descriptor_table_street_2eproto_deps,
    1,
    1,
    schemas,
    file_default_instances,
    TableStruct_street_2eproto::offsets,
    file_level_metadata_street_2eproto,
    file_level_enum_descriptors_street_2eproto,
    file_level_service_descriptors_street_2eproto,
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
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_street_2eproto_getter() {
  return &descriptor_table_street_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_street_2eproto(&descriptor_table_street_2eproto);
namespace my {
namespace street {
// ===================================================================

class Street::_Internal {
 public:
  static const ::my::city::City& city(const Street* msg);
};

const ::my::city::City&
Street::_Internal::city(const Street* msg) {
  return *msg->_impl_.city_;
}
void Street::clear_city() {
  if (GetArenaForAllocation() == nullptr && _impl_.city_ != nullptr) {
    delete _impl_.city_;
  }
  _impl_.city_ = nullptr;
}
Street::Street(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:my.street.Street)
}
Street::Street(const Street& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Street* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.street_name_) {}

    , decltype(_impl_.city_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.street_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.street_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_street_name().empty()) {
    _this->_impl_.street_name_.Set(from._internal_street_name(), _this->GetArenaForAllocation());
  }
  if (from._internal_has_city()) {
    _this->_impl_.city_ = new ::my::city::City(*from._impl_.city_);
  }
  // @@protoc_insertion_point(copy_constructor:my.street.Street)
}

inline void Street::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_.street_name_) {}

    , decltype(_impl_.city_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.street_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.street_name_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Street::~Street() {
  // @@protoc_insertion_point(destructor:my.street.Street)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Street::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.street_name_.Destroy();
  if (this != internal_default_instance()) delete _impl_.city_;
}

void Street::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Street::Clear() {
// @@protoc_insertion_point(message_clear_start:my.street.Street)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.street_name_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.city_ != nullptr) {
    delete _impl_.city_;
  }
  _impl_.city_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Street::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string street_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_street_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "my.street.Street.street_name"));
        } else {
          goto handle_unusual;
        }
        continue;
      // .my.city.City city = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_city(), ptr);
          CHK_(ptr);
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

::uint8_t* Street::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:my.street.Street)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string street_name = 1;
  if (!this->_internal_street_name().empty()) {
    const std::string& _s = this->_internal_street_name();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "my.street.Street.street_name");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // .my.city.City city = 2;
  if (this->_internal_has_city()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::city(this),
        _Internal::city(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:my.street.Street)
  return target;
}

::size_t Street::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:my.street.Street)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string street_name = 1;
  if (!this->_internal_street_name().empty()) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_street_name());
  }

  // .my.city.City city = 2;
  if (this->_internal_has_city()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.city_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Street::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Street::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Street::GetClassData() const { return &_class_data_; }


void Street::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Street*>(&to_msg);
  auto& from = static_cast<const Street&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:my.street.Street)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_street_name().empty()) {
    _this->_internal_set_street_name(from._internal_street_name());
  }
  if (from._internal_has_city()) {
    _this->_internal_mutable_city()->::my::city::City::MergeFrom(
        from._internal_city());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Street::CopyFrom(const Street& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:my.street.Street)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Street::IsInitialized() const {
  return true;
}

void Street::InternalSwap(Street* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.street_name_, lhs_arena,
                                       &other->_impl_.street_name_, rhs_arena);
  swap(_impl_.city_, other->_impl_.city_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Street::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_street_2eproto_getter, &descriptor_table_street_2eproto_once,
      file_level_metadata_street_2eproto[0]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace street
}  // namespace my
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::my::street::Street*
Arena::CreateMaybeMessage< ::my::street::Street >(Arena* arena) {
  return Arena::CreateMessageInternal< ::my::street::Street >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
