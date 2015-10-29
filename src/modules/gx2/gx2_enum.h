#ifndef GX2_ENUM_H
#define GX2_ENUM_H

#ifndef GX2_ENUM
#define GX2_ENUM(name, type) namespace name { enum Value : type {
#endif

#ifndef GX2_ENUM_END
#define GX2_ENUM_END }; }
#endif

#ifndef GX2_ENUM_VALUE
#define GX2_ENUM_VALUE(key, value) key = value,
#endif

#ifndef GX2_ENUM_VALID_RANGE
#define GX2_ENUM_VALID_RANGE(min, max) First = min, Last = max,
#endif

GX2_ENUM(GX2AAMode, uint32_t)
   GX2_ENUM_VALUE(Mode1X, 0)
GX2_ENUM_END

GX2_ENUM(GX2AttribFormat, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 0xA0F)

   GX2_ENUM_VALUE(UNORM_8, 0x0)
   GX2_ENUM_VALUE(UNORM_8_8, 0x04)
   GX2_ENUM_VALUE(UNORM_8_8_8_8, 0x0a)

   GX2_ENUM_VALUE(UINT_8, 0x100)
   GX2_ENUM_VALUE(UINT_8_8, 0x104)
   GX2_ENUM_VALUE(UINT_8_8_8_8, 0x10a)

   GX2_ENUM_VALUE(SNORM_8, 0x200)
   GX2_ENUM_VALUE(SNORM_8_8, 0x204)
   GX2_ENUM_VALUE(SNORM_8_8_8_8, 0x20a)

   GX2_ENUM_VALUE(SINT_8, 0x300)
   GX2_ENUM_VALUE(SINT_8_8, 0x304)
   GX2_ENUM_VALUE(SINT_8_8_8_8, 0x30a)

   GX2_ENUM_VALUE(FLOAT_32, 0x806)
   GX2_ENUM_VALUE(FLOAT_32_32, 0x80d)
   GX2_ENUM_VALUE(FLOAT_32_32_32, 0x811)
   GX2_ENUM_VALUE(FLOAT_32_32_32_32, 0x813)
GX2_ENUM_END

GX2_ENUM(GX2AttribIndexType, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 1)
   GX2_ENUM_VALUE(PerVertex, 0)
   GX2_ENUM_VALUE(PerInstance, 1)
GX2_ENUM_END

GX2_ENUM(GX2AlphaToMaskMode, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 4)
GX2_ENUM_END

GX2_ENUM(GX2BlendMode, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 20)
   GX2_ENUM_VALUE(Zero,             0)
   GX2_ENUM_VALUE(One,              1)
   GX2_ENUM_VALUE(SrcColor,         2)
   GX2_ENUM_VALUE(InvSrcColor,      3)
   GX2_ENUM_VALUE(SrcAlpha,         4)
   GX2_ENUM_VALUE(InvSrcAlpha,      5)
   GX2_ENUM_VALUE(DestAlpha,        6)
   GX2_ENUM_VALUE(InvDestAlpha,     7)
   GX2_ENUM_VALUE(DestColor,        8)
   GX2_ENUM_VALUE(InvDestColor,     9)
   GX2_ENUM_VALUE(SrcAlphaSat,      10)
   GX2_ENUM_VALUE(BlendFactor,      13)
   GX2_ENUM_VALUE(InvBlendFactor,   14)
   GX2_ENUM_VALUE(Src1Color,        15)
   GX2_ENUM_VALUE(InvSrc1Color,     16)
   GX2_ENUM_VALUE(Src1Alpha,        17)
   GX2_ENUM_VALUE(InvSrc1Alpha,     18)
GX2_ENUM_END

GX2_ENUM(GX2BlendCombineMode, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 4)
   GX2_ENUM_VALUE(Add,              0)
   GX2_ENUM_VALUE(Subtract,         1)
   GX2_ENUM_VALUE(Min,              2)
   GX2_ENUM_VALUE(Max,              3)
   GX2_ENUM_VALUE(RevSubtract,      4)
GX2_ENUM_END

GX2_ENUM(GX2BufferingMode, uint32_t)
   GX2_ENUM_VALID_RANGE(1, 4)
GX2_ENUM_END

GX2_ENUM(GX2ChannelMask, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 15)
GX2_ENUM_END

GX2_ENUM(GX2CompareFunction, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 7)
   GX2_ENUM_VALUE(Never, 0)
   GX2_ENUM_VALUE(Less, 1)
   GX2_ENUM_VALUE(Equal, 2)
   GX2_ENUM_VALUE(LessOrEqual, 3)
   GX2_ENUM_VALUE(Greater, 4)
   GX2_ENUM_VALUE(NotEqual, 5)
   GX2_ENUM_VALUE(GreaterOrEqual, 6)
   GX2_ENUM_VALUE(Always, 7)
GX2_ENUM_END

GX2_ENUM(GX2ClearFlags, uint32_t)
   GX2_ENUM_VALUE(Depth, 1)
GX2_ENUM_END

GX2_ENUM(GX2DrcRenderMode, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 3)
   GX2_ENUM_VALUE(Disabled,      0)
   GX2_ENUM_VALUE(Single,        1)
GX2_ENUM_END

GX2_ENUM(GX2EndianSwapMode, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 3)
   GX2_ENUM_VALUE(None, 0)
   GX2_ENUM_VALUE(Default, 3)
GX2_ENUM_END

GX2_ENUM(GX2EventType, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 5)
   GX2_ENUM_VALUE(Vsync, 2)
   GX2_ENUM_VALUE(Flip, 3)
GX2_ENUM_END

GX2_ENUM(GX2FetchShaderType, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 3)
GX2_ENUM_END

GX2_ENUM(GX2IndexType, uint32_t)
   GX2_ENUM_VALID_RANGE(0x1, 0x9)
   GX2_ENUM_VALUE(U16, 0x4)
GX2_ENUM_END

GX2_ENUM(GX2InvalidateMode, uint32_t)
   GX2_ENUM_VALID_RANGE(1, 0x1ff)
GX2_ENUM_END

GX2_ENUM(GX2LogicOp, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 0xff)
   GX2_ENUM_VALUE(Clear, 0x00)
   GX2_ENUM_VALUE(Nor, 0x11)
   GX2_ENUM_VALUE(InvertedAnd, 0x22)
   GX2_ENUM_VALUE(InvertedCopy, 0x33)
   GX2_ENUM_VALUE(ReverseAnd, 0x44)
   GX2_ENUM_VALUE(Invert, 0x55)
   GX2_ENUM_VALUE(Xor, 0x66)
   GX2_ENUM_VALUE(NotAnd, 0x77)
   GX2_ENUM_VALUE(And, 0x88)
   GX2_ENUM_VALUE(Equiv, 0x99)
   GX2_ENUM_VALUE(NoOp, 0xAA)
   GX2_ENUM_VALUE(InvertedOr, 0xBB)
   GX2_ENUM_VALUE(Copy, 0xCC)
   GX2_ENUM_VALUE(ReverseOr, 0xDD)
   GX2_ENUM_VALUE(Or, 0xEE)
   GX2_ENUM_VALUE(Set, 0xFF)
GX2_ENUM_END

GX2_ENUM(GX2PrimitiveMode, uint32_t)
   GX2_ENUM_VALID_RANGE(0x1, 0x94)
   GX2_ENUM_VALUE(Triangles,        0x4)
   GX2_ENUM_VALUE(TriangleStrip,    0x6)
   GX2_ENUM_VALUE(Quads,            0x13)
   GX2_ENUM_VALUE(QuadStrip,        0x14)
GX2_ENUM_END

GX2_ENUM(GX2RenderTarget, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 7)
GX2_ENUM_END

GX2_ENUM(GX2RoundingMode, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 1)
GX2_ENUM_END

GX2_ENUM(GX2ScanTarget, uint32_t)
   GX2_ENUM_VALID_RANGE(1, 8)
   GX2_ENUM_VALUE(TV,   1)
   GX2_ENUM_VALUE(DRC,  4)
GX2_ENUM_END

GX2_ENUM(GX2SurfaceDim, uint32_t)
   GX2_ENUM_VALUE(Texture2D,           1)
   GX2_ENUM_VALUE(Texture2DMSAA,       6)
   GX2_ENUM_VALUE(Texture2DMSAAArray,  7)
GX2_ENUM_END

GX2_ENUM(GX2SurfaceFormat, uint32_t)
   GX2_ENUM_VALUE(INVALID,                   0x00)
   GX2_ENUM_VALUE(UNORM_R4_G4,               0x02)
   GX2_ENUM_VALUE(UNORM_R4_G4_B4_A4,         0x0b)
   GX2_ENUM_VALUE(UNORM_R8,                  0x01)
   GX2_ENUM_VALUE(UNORM_R8_G8,               0x07)
   GX2_ENUM_VALUE(UNORM_R8_G8_B8_A8,         0x01a)
   GX2_ENUM_VALUE(UNORM_R16,                 0x05)
   GX2_ENUM_VALUE(UNORM_R16_G16,             0x0f)
   GX2_ENUM_VALUE(UNORM_R16_G16_B16_A16,     0x01f)
   GX2_ENUM_VALUE(UNORM_R5_G6_B5,            0x08)
   GX2_ENUM_VALUE(UNORM_R5_G5_B5_A1,         0x0a)
   GX2_ENUM_VALUE(UNORM_A1_B5_G5_R5,         0x0c)
   GX2_ENUM_VALUE(UNORM_R24_X8,              0x011)
   GX2_ENUM_VALUE(UNORM_A2_B10_G10_R10,      0x01b)
   GX2_ENUM_VALUE(UNORM_R10_G10_B10_A2,      0x019)
   GX2_ENUM_VALUE(UNORM_BC1,                 0x031)
   GX2_ENUM_VALUE(UNORM_BC2,                 0x032)
   GX2_ENUM_VALUE(UNORM_BC3,                 0x033)
   GX2_ENUM_VALUE(UNORM_BC4,                 0x034)
   GX2_ENUM_VALUE(UNORM_BC5,                 0x035)
   GX2_ENUM_VALUE(UNORM_NV12,                0x081)

   GX2_ENUM_VALUE(UINT_R8,                   0x101)
   GX2_ENUM_VALUE(UINT_R8_G8,                0x107)
   GX2_ENUM_VALUE(UINT_R8_G8_B8_A8,          0x11a)
   GX2_ENUM_VALUE(UINT_R16,                  0x105)
   GX2_ENUM_VALUE(UINT_R16_G16,              0x10f)
   GX2_ENUM_VALUE(UINT_R16_G16_B16_A16,      0x11f)
   GX2_ENUM_VALUE(UINT_R32,                  0x10d)
   GX2_ENUM_VALUE(UINT_R32_G32,              0x11d)
   GX2_ENUM_VALUE(UINT_R32_G32_B32_A32,      0x122)
   GX2_ENUM_VALUE(UINT_A2_B10_G10_R10,       0x11b)
   GX2_ENUM_VALUE(UINT_R10_G10_B10_A2,       0x119)
   GX2_ENUM_VALUE(UINT_X24_G8,               0x111)
   GX2_ENUM_VALUE(UINT_G8_X24,               0x11c)

   GX2_ENUM_VALUE(SNORM_R8,                  0x201)
   GX2_ENUM_VALUE(SNORM_R8_G8,               0x207)
   GX2_ENUM_VALUE(SNORM_R8_G8_B8_A8,         0x21a)
   GX2_ENUM_VALUE(SNORM_R16,                 0x205)
   GX2_ENUM_VALUE(SNORM_R16_G16,             0x20f)
   GX2_ENUM_VALUE(SNORM_R16_G16_B16_A16,     0x21f)
   GX2_ENUM_VALUE(SNORM_R10_G10_B10_A2,      0x219)
   GX2_ENUM_VALUE(SNORM_BC4,                 0x234)
   GX2_ENUM_VALUE(SNORM_BC5,                 0x235)

   GX2_ENUM_VALUE(SINT_R8,                   0x301)
   GX2_ENUM_VALUE(SINT_R8_G8,                0x307)
   GX2_ENUM_VALUE(SINT_R8_G8_B8_A8,          0x31a)
   GX2_ENUM_VALUE(SINT_R16,                  0x305)
   GX2_ENUM_VALUE(SINT_R16_G16,              0x30f)
   GX2_ENUM_VALUE(SINT_R16_G16_B16_A16,      0x31f)
   GX2_ENUM_VALUE(SINT_R32,                  0x30d)
   GX2_ENUM_VALUE(SINT_R32_G32,              0x31d)
   GX2_ENUM_VALUE(SINT_R32_G32_B32_A32,      0x322)
   GX2_ENUM_VALUE(SINT_R10_G10_B10_A2,       0x319)

   GX2_ENUM_VALUE(SRGB_R8_G8_B8_A8,          0x41a)
   GX2_ENUM_VALUE(SRGB_BC1,                  0x431)
   GX2_ENUM_VALUE(SRGB_BC2,                  0x432)
   GX2_ENUM_VALUE(SRGB_BC3,                  0x433)

   GX2_ENUM_VALUE(FLOAT_R32,                 0x80e)
   GX2_ENUM_VALUE(FLOAT_R32_G32,             0x81e)
   GX2_ENUM_VALUE(FLOAT_R32_G32_B32_A32,     0x823)
   GX2_ENUM_VALUE(FLOAT_R16,                 0x806)
   GX2_ENUM_VALUE(FLOAT_R16_G16,             0x810)
   GX2_ENUM_VALUE(FLOAT_R16_G16_B16_A16,     0x820)
   GX2_ENUM_VALUE(FLOAT_R11_G11_B10,         0x816)
   GX2_ENUM_VALUE(FLOAT_D24_S8,              0x811)
   GX2_ENUM_VALUE(FLOAT_X8_X24,              0x81c)
GX2_ENUM_END

GX2_ENUM(GX2SurfaceUse, uint32_t)
   GX2_ENUM_VALUE(Texture,          1 << 0)
   GX2_ENUM_VALUE(ColorBuffer,      1 << 1)
   GX2_ENUM_VALUE(DepthBuffer,      1 << 2)
GX2_ENUM_END

GX2_ENUM(GX2TessellationMode, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 2)
GX2_ENUM_END

GX2_ENUM(GX2TexBorderType, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 3)
   GX2_ENUM_VALUE(TransparentBlack, 0)
   GX2_ENUM_VALUE(Black, 1)
   GX2_ENUM_VALUE(White, 2)
   GX2_ENUM_VALUE(Variable, 3)
GX2_ENUM_END

GX2_ENUM(GX2TexClampMode, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 7)
   GX2_ENUM_VALUE(Wrap, 0)
   GX2_ENUM_VALUE(Mirror, 1)
   GX2_ENUM_VALUE(Clamp, 2)
   GX2_ENUM_VALUE(MirrorOnce, 3)
   GX2_ENUM_VALUE(ClampBorder, 6)
GX2_ENUM_END

GX2_ENUM(GX2TexMipFilterMode, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 2)
   GX2_ENUM_VALUE(None, 0)
   GX2_ENUM_VALUE(Point, 1)
   GX2_ENUM_VALUE(Linear, 2)
GX2_ENUM_END

GX2_ENUM(GX2TexMipPerfMode, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 7)
GX2_ENUM_END

GX2_ENUM(GX2TexXYFilterMode, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 1)
   GX2_ENUM_VALUE(Point, 0)
   GX2_ENUM_VALUE(Linear, 1)
GX2_ENUM_END

GX2_ENUM(GX2TexZFilterMode, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 2)
GX2_ENUM_END

GX2_ENUM(GX2TexZPerfMode, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 3)
GX2_ENUM_END

GX2_ENUM(GX2TileMode, uint32_t)
   GX2_ENUM_VALUE(Default,          0)
   GX2_ENUM_VALUE(LinearAligned,    1)
   GX2_ENUM_VALUE(Tiled1DThin1,     2)
   GX2_ENUM_VALUE(Tiled1DThick,     3)
   GX2_ENUM_VALUE(Tiled2DThin1,     4)
   GX2_ENUM_VALUE(Tiled2DThin2,     5)
   GX2_ENUM_VALUE(Tiled2DThin4,     6)
   GX2_ENUM_VALUE(Tiled2DThick,     7)
   GX2_ENUM_VALUE(Tiled2BThin1,     8)
   GX2_ENUM_VALUE(Tiled2BThin2,     9)
   GX2_ENUM_VALUE(Tiled2BThin4,     10)
   GX2_ENUM_VALUE(Tiled2BThick,     11)
   GX2_ENUM_VALUE(Tiled3DThin1,     12)
   GX2_ENUM_VALUE(Tiled3DThick,     13)
   GX2_ENUM_VALUE(Tiled3BThin1,     14)
   GX2_ENUM_VALUE(Tiled3BThick,     15)
   GX2_ENUM_VALUE(LinearSpecial,    16)
GX2_ENUM_END

GX2_ENUM(GX2TVRenderMode, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 5)
   GX2_ENUM_VALUE(Standard480p,  1)
   GX2_ENUM_VALUE(Wide480p,      2)
   GX2_ENUM_VALUE(Wide720p,      3)
   GX2_ENUM_VALUE(Wide1080p,     5)
GX2_ENUM_END

GX2_ENUM(GX2TVScanMode, uint32_t)
   GX2_ENUM_VALID_RANGE(0, 7)
   GX2_ENUM_VALUE(None, 0)
GX2_ENUM_END

GX2_ENUM(GX2ShaderMode, uint32_t)
   GX2_ENUM_VALUE(UniformRegister, 0)
   GX2_ENUM_VALUE(UniformBlock, 1)
   GX2_ENUM_VALUE(GeometryShader, 2)
GX2_ENUM_END

GX2_ENUM(GX2UniformType, uint32_t)
   GX2_ENUM_VALUE(Int, 2)
   GX2_ENUM_VALUE(Float, 4)
   GX2_ENUM_VALUE(Float2, 9)
   GX2_ENUM_VALUE(Float3, 10)
   GX2_ENUM_VALUE(Float4, 11)
   GX2_ENUM_VALUE(Int2, 15)
   GX2_ENUM_VALUE(Int3, 16)
   GX2_ENUM_VALUE(Int4, 17)
   GX2_ENUM_VALUE(Matrix4x4, 29)
GX2_ENUM_END

#undef GX2_ENUM
#undef GX2_ENUM_END
#undef GX2_ENUM_VALUE
#undef GX2_ENUM_VALID_RANGE

#endif