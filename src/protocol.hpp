#pragma once
#include <cstdint>

namespace p2p::proto {
struct Packet {
    uint16_t size; // total size in bytes, including this header
    uint16_t type;
    uint32_t id;
} __attribute__((packed));
} // namespace p2p::proto
