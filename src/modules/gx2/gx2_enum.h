#ifndef GX2_ENUM_H
#define GX2_ENUM_H

#ifndef GX2_ENUM
#define GX2_ENUM(name, type) namespace name##_ { enum Value : type {
#endif

#ifndef GX2_ENUM_WITH_RANGE
#define GX2_ENUM_WITH_RANGE(name, type, min, max) namespace name##_ { enum Value : type {
#endif

#ifndef GX2_ENUM_END
#define GX2_ENUM_END(name) }; } using name = name##_::Value;
#endif

#ifndef GX2_ENUM_VALUE
#define GX2_ENUM_VALUE(key, value) key = value,
#endif

GX2_ENUM(GX2AAMode, uint32_t)
   GX2_ENUM_VALUE(Mode1X, 0)
GX2_ENUM_END(GX2AAMode)

GX2_ENUM_WITH_RANGE(GX2AttribFormatType, uint32_t, 0, 0x1F)
   GX2_ENUM_VALUE(TYPE_8, 0x00)
   GX2_ENUM_VALUE(TYPE_4_4, 0x01)
   GX2_ENUM_VALUE(TYPE_16, 0x02)
   GX2_ENUM_VALUE(TYPE_16_FLOAT, 0x03)
   GX2_ENUM_VALUE(TYPE_8_8, 0x04)
   GX2_ENUM_VALUE(TYPE_32, 0x05)
   GX2_ENUM_VALUE(TYPE_32_FLOAT, 0x06)
   GX2_ENUM_VALUE(TYPE_16_16, 0x07)
   GX2_ENUM_VALUE(TYPE_16_16_FLOAT, 0x08)
   GX2_ENUM_VALUE(TYPE_10_11_11_FLOAT, 0x09)
   GX2_ENUM_VALUE(TYPE_8_8_8_8, 0x0A)
   GX2_ENUM_VALUE(TYPE_10_10_10_2, 0x0B)
   GX2_ENUM_VALUE(TYPE_32_32, 0x0C)
   GX2_ENUM_VALUE(TYPE_32_32_FLOAT, 0x0D)
   GX2_ENUM_VALUE(TYPE_16_16_16_16, 0x0E)
   GX2_ENUM_VALUE(TYPE_16_16_16_16_FLOAT, 0x0F)
   GX2_ENUM_VALUE(TYPE_32_32_32, 0x10)
   GX2_ENUM_VALUE(TYPE_32_32_32_FLOAT, 0x11)
   GX2_ENUM_VALUE(TYPE_32_32_32_32, 0x12)
   GX2_ENUM_VALUE(TYPE_32_32_32_32_FLOAT, 0x13)
GX2_ENUM_END(GX2AttribFormatType)

GX2_ENUM(GX2AttribFormatFlags, uint32_t)
   GX2_ENUM_VALUE(INTEGER, 0x100)
   GX2_ENUM_VALUE(SIGNED, 0x200)
   GX2_ENUM_VALUE(DEGAMMA, 0x400)
   GX2_ENUM_VALUE(SCALED, 0x800)
GX2_ENUM_END(GX2AttribFormatFlags)

GX2_ENUM_WITH_RANGE(GX2AttribFormat, uint32_t, 0, 0xA0F)
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
GX2_ENUM_END(GX2AttribFormat)

GX2_ENUM_WITH_RANGE(GX2AttribIndexType, uint32_t, 0, 1)
   GX2_ENUM_VALUE(PerVertex, 0)
   GX2_ENUM_VALUE(PerInstance, 1)
GX2_ENUM_END(GX2AttribIndexType)

GX2_ENUM_WITH_RANGE(GX2AlphaToMaskMode, uint32_t, 0, 4)
   GX2_ENUM_VALUE(NonDithered,   0)
   GX2_ENUM_VALUE(Dither0,       1)
   GX2_ENUM_VALUE(Dither90,      2)
   GX2_ENUM_VALUE(Dither180,     3)
   GX2_ENUM_VALUE(Dither270,     4)
GX2_ENUM_END(GX2AlphaToMaskMode)

GX2_ENUM_WITH_RANGE(GX2BlendMode, uint32_t, 0, 20)
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
   GX2_ENUM_VALUE(BothSrcAlpha,     11)
   GX2_ENUM_VALUE(BothInvSrcAlpha,  12)
   GX2_ENUM_VALUE(BlendFactor,      13)
   GX2_ENUM_VALUE(InvBlendFactor,   14)
   GX2_ENUM_VALUE(Src1Color,        15)
   GX2_ENUM_VALUE(InvSrc1Color,     16)
   GX2_ENUM_VALUE(Src1Alpha,        17)
   GX2_ENUM_VALUE(InvSrc1Alpha,     18)
GX2_ENUM_END(GX2BlendMode)

GX2_ENUM_WITH_RANGE(GX2BlendCombineMode, uint32_t, 0, 4)
   GX2_ENUM_VALUE(Add,              0)
   GX2_ENUM_VALUE(Subtract,         1)
   GX2_ENUM_VALUE(Min,              2)
   GX2_ENUM_VALUE(Max,              3)
   GX2_ENUM_VALUE(RevSubtract,      4)
GX2_ENUM_END(GX2BlendCombineMode)

GX2_ENUM_WITH_RANGE(GX2BufferingMode, uint32_t, 1, 4)
   GX2_ENUM_VALUE(Single, 1)
   GX2_ENUM_VALUE(Double, 2)
   GX2_ENUM_VALUE(Triple, 3)
GX2_ENUM_END(GX2BufferingMode)

GX2_ENUM_WITH_RANGE(GX2ChannelMask, uint32_t, 0, 15)
   GX2_ENUM_VALUE(R,    1)
   GX2_ENUM_VALUE(G,    2)
   GX2_ENUM_VALUE(RG,   3)
   GX2_ENUM_VALUE(B,    4)
   GX2_ENUM_VALUE(RB,   5)
   GX2_ENUM_VALUE(GB,   6)
   GX2_ENUM_VALUE(RGB,  7)
   GX2_ENUM_VALUE(A,    8)
   GX2_ENUM_VALUE(RA,   9)
   GX2_ENUM_VALUE(GA,   10)
   GX2_ENUM_VALUE(RGA,  11)
   GX2_ENUM_VALUE(BA,   12)
   GX2_ENUM_VALUE(RBA,  13)
   GX2_ENUM_VALUE(GBA,  14)
   GX2_ENUM_VALUE(RGBA, 15)
GX2_ENUM_END(GX2ChannelMask)

GX2_ENUM_WITH_RANGE(GX2CompareFunction, uint32_t, 0, 7)
   GX2_ENUM_VALUE(Never, 0)
   GX2_ENUM_VALUE(Less, 1)
   GX2_ENUM_VALUE(Equal, 2)
   GX2_ENUM_VALUE(LessOrEqual, 3)
   GX2_ENUM_VALUE(Greater, 4)
   GX2_ENUM_VALUE(NotEqual, 5)
   GX2_ENUM_VALUE(GreaterOrEqual, 6)
   GX2_ENUM_VALUE(Always, 7)
GX2_ENUM_END(GX2CompareFunction)

GX2_ENUM(GX2Component, uint32_t)
   GX2_ENUM_VALUE(Mem0, 0)
   GX2_ENUM_VALUE(Mem1, 1)
   GX2_ENUM_VALUE(Mem2, 2)
   GX2_ENUM_VALUE(Mem3, 3)
   GX2_ENUM_VALUE(Zero, 4)
   GX2_ENUM_VALUE(One, 5)
GX2_ENUM_END(GX2Component)

GX2_ENUM(GX2ClearFlags, uint32_t)
   GX2_ENUM_VALUE(Depth, 1)
   GX2_ENUM_VALUE(Stencil, 2)
GX2_ENUM_END(GX2ClearFlags)

GX2_ENUM_WITH_RANGE(GX2DrcRenderMode, uint32_t, 0, 3)
   GX2_ENUM_VALUE(Disabled,      0)
   GX2_ENUM_VALUE(Single,        1)
GX2_ENUM_END(GX2DrcRenderMode)

GX2_ENUM_WITH_RANGE(GX2EndianSwapMode, uint32_t, 0, 3)
   GX2_ENUM_VALUE(None, 0)
   GX2_ENUM_VALUE(Swap8In16, 1)
   GX2_ENUM_VALUE(Swap8In32, 2)
   GX2_ENUM_VALUE(Default, 3)
GX2_ENUM_END(GX2EndianSwapMode)

GX2_ENUM_WITH_RANGE(GX2EventType, uint32_t, 0, 5)
   GX2_ENUM_VALUE(Vsync, 2)
   GX2_ENUM_VALUE(Flip, 3)
   GX2_ENUM_VALUE(DisplayListOverrun, 4)
   GX2_ENUM_VALUE(Max, 5)
GX2_ENUM_END(GX2EventType)

GX2_ENUM_WITH_RANGE(GX2FetchShaderType, uint32_t, 0, 3)
   GX2_ENUM_VALUE(NoTessellation, 0)
   GX2_ENUM_VALUE(LineTessellation, 1)
   GX2_ENUM_VALUE(TriangleTessellation, 2)
   GX2_ENUM_VALUE(QuadTessellation, 3)
GX2_ENUM_END(GX2FetchShaderType)

GX2_ENUM_WITH_RANGE(GX2FrontFace, uint32_t, 0, 1)
   GX2_ENUM_VALUE(CounterClockwise, 0)
   GX2_ENUM_VALUE(Clockwise, 1)
GX2_ENUM_END(GX2FrontFace)

GX2_ENUM_WITH_RANGE(GX2IndexType, uint32_t, 0x0, 0x9)
   GX2_ENUM_VALUE(U16_LE,              0x0)
   GX2_ENUM_VALUE(U32_LE,              0x1)
   GX2_ENUM_VALUE(U16,                 0x4)
   GX2_ENUM_VALUE(U32,                 0x9)
GX2_ENUM_END(GX2IndexType)

GX2_ENUM_WITH_RANGE(GX2InvalidateMode, uint32_t, 1, 0x1ff)
   GX2_ENUM_VALUE(None,                0x0)
GX2_ENUM_END(GX2InvalidateMode)

GX2_ENUM_WITH_RANGE(GX2LogicOp, uint32_t, 0, 0xff)
   GX2_ENUM_VALUE(Clear,               0x00)
   GX2_ENUM_VALUE(Nor,                 0x11)
   GX2_ENUM_VALUE(InvertedAnd,         0x22)
   GX2_ENUM_VALUE(InvertedCopy,        0x33)
   GX2_ENUM_VALUE(ReverseAnd,          0x44)
   GX2_ENUM_VALUE(Invert,              0x55)
   GX2_ENUM_VALUE(Xor,                 0x66)
   GX2_ENUM_VALUE(NotAnd,              0x77)
   GX2_ENUM_VALUE(And,                 0x88)
   GX2_ENUM_VALUE(Equiv,               0x99)
   GX2_ENUM_VALUE(NoOp,                0xAA)
   GX2_ENUM_VALUE(InvertedOr,          0xBB)
   GX2_ENUM_VALUE(Copy,                0xCC)
   GX2_ENUM_VALUE(ReverseOr,           0xDD)
   GX2_ENUM_VALUE(Or,                  0xEE)
   GX2_ENUM_VALUE(Set,                 0xFF)
GX2_ENUM_END(GX2LogicOp)

GX2_ENUM_WITH_RANGE(GX2PrimitiveMode, uint32_t, 0x1, 0x94)
   GX2_ENUM_VALUE(Triangles,           0x4)
   GX2_ENUM_VALUE(TriangleStrip,       0x6)
   GX2_ENUM_VALUE(Quads,               0x13)
   GX2_ENUM_VALUE(QuadStrip,           0x14)
GX2_ENUM_END(GX2PrimitiveMode)

GX2_ENUM_WITH_RANGE(GX2PolygonMode, uint32_t, 0, 2)
   GX2_ENUM_VALUE(Point,               0)
   GX2_ENUM_VALUE(Line,                1)
   GX2_ENUM_VALUE(Triangle,            2)
GX2_ENUM_END(GX2PolygonMode)

GX2_ENUM_WITH_RANGE(GX2RenderTarget, uint32_t, 0, 7)
   GX2_ENUM_VALUE(Target0,             0)
   GX2_ENUM_VALUE(Target1,             1)
   GX2_ENUM_VALUE(Target2,             2)
   GX2_ENUM_VALUE(Target3,             3)
   GX2_ENUM_VALUE(Target4,             4)
   GX2_ENUM_VALUE(Target5,             5)
   GX2_ENUM_VALUE(Target6,             6)
   GX2_ENUM_VALUE(Target7,             7)
GX2_ENUM_END(GX2RenderTarget)

GX2_ENUM(GX2RResourceFlags, uint32_t)
   GX2_ENUM_VALUE(BindTexture,         1 << 0)
   GX2_ENUM_VALUE(BindColorBuffer,     1 << 1)
   GX2_ENUM_VALUE(BindDepthBuffer,     1 << 2)
   GX2_ENUM_VALUE(BindScanBuffer,      1 << 3)
   GX2_ENUM_VALUE(BindVertexBuffer,    1 << 4)
   GX2_ENUM_VALUE(BindIndexBuffer,     1 << 5)
   GX2_ENUM_VALUE(BindUniformBlock,    1 << 6)
   GX2_ENUM_VALUE(BindShaderProgram,   1 << 7)
   GX2_ENUM_VALUE(BindStreamOutput,    1 << 8)
   GX2_ENUM_VALUE(BindDisplayList,     1 << 9)
   GX2_ENUM_VALUE(BindGSRing,          1 << 10)
   GX2_ENUM_VALUE(UsageCpuRead,        1 << 11)
   GX2_ENUM_VALUE(UsageCpuWrite,       1 << 12)
   GX2_ENUM_VALUE(UsageCpuReadWrite,   UsageCpuRead | UsageCpuWrite)
   GX2_ENUM_VALUE(UsageGpuRead,        1 << 13)
   GX2_ENUM_VALUE(UsageGpuWrite,       1 << 14)
   GX2_ENUM_VALUE(UsageGpuReadWrite,   UsageGpuRead | UsageGpuWrite)
   GX2_ENUM_VALUE(UsageDmaRead,        1 << 15)
   GX2_ENUM_VALUE(UsageDmaWrite,       1 << 16)
   GX2_ENUM_VALUE(UsageForceMEM1,      1 << 17)
   GX2_ENUM_VALUE(UsageForceMEM2,      1 << 18)
   GX2_ENUM_VALUE(UserMemory,          1 << 29)
   GX2_ENUM_VALUE(Locked,              1 << 30)
GX2_ENUM_END(GX2RResourceFlags)

GX2_ENUM_WITH_RANGE(GX2RoundingMode, uint32_t, 0, 1)
   GX2_ENUM_VALUE(RoundToEven,         0)
   GX2_ENUM_VALUE(Truncate,            1)
GX2_ENUM_END(GX2RoundingMode)

GX2_ENUM_WITH_RANGE(GX2ScanTarget, uint32_t, 1, 8)
   GX2_ENUM_VALUE(TV,                  1)
   GX2_ENUM_VALUE(DRC,                 4)
GX2_ENUM_END(GX2ScanTarget)

GX2_ENUM(GX2SurfaceDim, uint32_t)
   GX2_ENUM_VALUE(Texture1D,           0)
   GX2_ENUM_VALUE(Texture2D,           1)
   GX2_ENUM_VALUE(Texture3D,           2)
   GX2_ENUM_VALUE(TextureCube,         3)
   GX2_ENUM_VALUE(Texture1DArray,      4)
   GX2_ENUM_VALUE(Texture2DArray,      5)
   GX2_ENUM_VALUE(Texture2DMSAA,       6)
   GX2_ENUM_VALUE(Texture2DMSAAArray,  7)
GX2_ENUM_END(GX2SurfaceDim)

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
GX2_ENUM_END(GX2SurfaceFormat)

GX2_ENUM(GX2SurfaceUse, uint32_t)
   GX2_ENUM_VALUE(Texture,          1 << 0)
   GX2_ENUM_VALUE(ColorBuffer,      1 << 1)
   GX2_ENUM_VALUE(DepthBuffer,      1 << 2)
   GX2_ENUM_VALUE(ScanBuffer,       1 << 3)
GX2_ENUM_END(GX2SurfaceUse)

GX2_ENUM_WITH_RANGE(GX2StencilFunction, uint32_t, 0, 7)
   GX2_ENUM_VALUE(Keep, 0)
   GX2_ENUM_VALUE(Zero, 1)
   GX2_ENUM_VALUE(Replace, 2)
   GX2_ENUM_VALUE(IncrClamp, 3)
   GX2_ENUM_VALUE(DecrClamp, 4)
   GX2_ENUM_VALUE(Invert, 5)
   GX2_ENUM_VALUE(IncrWrap, 6)
   GX2_ENUM_VALUE(DecrWrap, 7)
GX2_ENUM_END(GX2StencilFunction)

GX2_ENUM_WITH_RANGE(GX2TessellationMode, uint32_t, 0, 2)
   GX2_ENUM_VALUE(Discrete, 0)
   GX2_ENUM_VALUE(Continuous, 1)
   GX2_ENUM_VALUE(Adaptive, 2)
GX2_ENUM_END(GX2TessellationMode)

GX2_ENUM_WITH_RANGE(GX2TexBorderType, uint32_t, 0, 3)
   GX2_ENUM_VALUE(TransparentBlack, 0)
   GX2_ENUM_VALUE(Black, 1)
   GX2_ENUM_VALUE(White, 2)
   GX2_ENUM_VALUE(Variable, 3)
GX2_ENUM_END(GX2TexBorderType)

GX2_ENUM_WITH_RANGE(GX2TexClampMode, uint32_t, 0, 7)
   GX2_ENUM_VALUE(Wrap, 0)
   GX2_ENUM_VALUE(Mirror, 1)
   GX2_ENUM_VALUE(Clamp, 2)
   GX2_ENUM_VALUE(MirrorOnce, 3)
   GX2_ENUM_VALUE(ClampBorder, 6)
GX2_ENUM_END(GX2TexClampMode)

GX2_ENUM_WITH_RANGE(GX2TexMipFilterMode, uint32_t, 0, 2)
   GX2_ENUM_VALUE(None, 0)
   GX2_ENUM_VALUE(Point, 1)
   GX2_ENUM_VALUE(Linear, 2)
GX2_ENUM_END(GX2TexMipFilterMode)

GX2_ENUM_WITH_RANGE(GX2TexMipPerfMode, uint32_t, 0, 7)
   GX2_ENUM_VALUE(Disable, 0)
GX2_ENUM_END(GX2TexMipPerfMode)

GX2_ENUM_WITH_RANGE(GX2TexXYFilterMode, uint32_t, 0, 1)
   GX2_ENUM_VALUE(Point, 0)
   GX2_ENUM_VALUE(Linear, 1)
GX2_ENUM_END(GX2TexXYFilterMode)

GX2_ENUM_WITH_RANGE(GX2TexAnisoRatio, uint32_t, 0, 4)
   GX2_ENUM_VALUE(None, 0)
GX2_ENUM_END(GX2TexAnisoRatio)

GX2_ENUM_WITH_RANGE(GX2TexZFilterMode, uint32_t, 0, 2)
   GX2_ENUM_VALUE(None,    0)
   GX2_ENUM_VALUE(Point,   1)
   GX2_ENUM_VALUE(Linear,  2)
GX2_ENUM_END(GX2TexZFilterMode)

GX2_ENUM_WITH_RANGE(GX2TexZPerfMode, uint32_t, 0, 3)
GX2_ENUM_END(GX2TexZPerfMode)

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
GX2_ENUM_END(GX2TileMode)

GX2_ENUM_WITH_RANGE(GX2TVRenderMode, uint32_t, 0, 5)
   GX2_ENUM_VALUE(Standard480p,  1)
   GX2_ENUM_VALUE(Wide480p,      2)
   GX2_ENUM_VALUE(Wide720p,      3)
   GX2_ENUM_VALUE(Wide1080p,     5)
GX2_ENUM_END(GX2TVRenderMode)

GX2_ENUM_WITH_RANGE(GX2TVScanMode, uint32_t, 0, 7)
   GX2_ENUM_VALUE(None, 0)
GX2_ENUM_END(GX2TVScanMode)

GX2_ENUM(GX2SamplerVarType, uint32_t)
   GX2_ENUM_VALUE(Sampler1D, 0)
   GX2_ENUM_VALUE(Sampler2D, 1)
   GX2_ENUM_VALUE(Sampler3D, 3)
   GX2_ENUM_VALUE(SamplerCube, 4)
GX2_ENUM_END(GX2SamplerVarType)

GX2_ENUM(GX2ShaderMode, uint32_t)
   GX2_ENUM_VALUE(UniformRegister, 0)
   GX2_ENUM_VALUE(UniformBlock, 1)
   GX2_ENUM_VALUE(GeometryShader, 2)
   GX2_ENUM_VALUE(ComputeShader, 3)
GX2_ENUM_END(GX2ShaderMode)

GX2_ENUM(GX2ShaderVarType, uint32_t)
   GX2_ENUM_VALUE(Int, 2)
   GX2_ENUM_VALUE(Float, 4)
   GX2_ENUM_VALUE(Float2, 9)
   GX2_ENUM_VALUE(Float3, 10)
   GX2_ENUM_VALUE(Float4, 11)
   GX2_ENUM_VALUE(Int2, 15)
   GX2_ENUM_VALUE(Int3, 16)
   GX2_ENUM_VALUE(Int4, 17)
   GX2_ENUM_VALUE(Matrix4x4, 29)
GX2_ENUM_END(GX2ShaderVarType)

#undef GX2_ENUM
#undef GX2_ENUM_WITH_RANGE
#undef GX2_ENUM_END
#undef GX2_ENUM_VALUE

#endif // ifdef GX2_ENUM_H
