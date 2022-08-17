// pretend we already included types
#define _LIBSEVEN_BASE_TYPES_H

// lol. lmao.
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#define U8_MAX UINT8_MAX

#define i8    int8_t
#define i16   int16_t
#define i32   int32_t
#define i64   int64_t
#define isize ptrdiff_t

#define u8    uint8_t
#define u16   uint16_t
#define u32   uint32_t
#define u64   uint64_t
#define usize size_t

#include <seven/hw/cpu.h>
#include <seven/hw/dma.h>
#include <seven/hw/gpio.h>
#include <seven/hw/input.h>
#include <seven/hw/irq.h>
#include <seven/hw/memory.h>
#include <seven/hw/serial.h>
#include <seven/hw/sram.h>
#include <seven/hw/svc.h>
#include <seven/hw/timer.h>
#include <seven/hw/video.h>
#include <seven/hw/waitstate.h>
#include <seven/svc/affine.h>
#include <seven/svc/decompression.h>
#include <seven/svc/math.h>
#include <seven/svc/memory.h>
#include <seven/svc/reset.h>
#include <seven/svc/sound.h>
#include <seven/svc/system.h>
#include <seven/svc/wait.h>
#include <seven/util/debug.h>
#include <seven/util/log.h>
#include <seven/util/profile.h>
#include <seven/util/random.h>
#include <seven/util/simd.h>
#include <seven/video/bg_affine.h>
#include <seven/video/bg_bitmap.h>
#include <seven/video/bg_mixed.h>
#include <seven/video/bg_regular.h>
#include <seven/video/bg_scroll.h>
#include <seven/video/bg_tiled.h>
#include <seven/video/bg_transform.h>
#include <seven/video/blend.h>
#include <seven/video/color.h>
#include <seven/video/matrix.h>
#include <seven/video/mosaic.h>
#include <seven/video/oam.h>
#include <seven/video/object.h>
#include <seven/video/prelude.h>
#include <seven/video/window.h>
// #include <seven/hw/sound.h>
// #include <seven/serial/joybus.h>
// #include <seven/serial/multiplayer.h>
// #include <seven/serial/raw.h>
// #include <seven/serial/uart.h>
// #include <seven/util/math.h>
// #include <seven/util/memory.h>
// #include <seven/util/overlay.h>
// #include <seven/util/string.h>
// #include <seven/video/palette.h>
