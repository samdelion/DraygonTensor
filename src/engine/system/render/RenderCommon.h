#pragma once

#include "engine/common/Handle.h"

namespace ds_render
{
/**
 * Possible texture types.
 */
enum class TextureType
{
    None,
    TwoDimensional,
    Cubemap
};

/**
 * Possible render data types.
 */
enum class RenderDataType
{
    Int,
    Float,
    UnsignedByte,
};

/**
 * Possible buffer usage types. Essentially how frequently the buffer needs to
 * be updated.
 */
enum class BufferUsageType
{
    // Buffer doesn't need to be updated/infrequently
    Static,
    // Buffer is frequently updated
    Dynamic
};

/**
 * Enumeration of the possible vertex attribute types.
 */
enum class AttributeType
{
    Position,
    Normal,
    TextureCoordinate,
    BoneID,
    BoneWeight
};

/** Shader source type */
enum class ShaderType
{
    VertexShader,
    FragmentShader
};

/** Drawing primitive type */
enum class PrimitiveType
{
    Triangles,
    TriangleStrip,
    Lines,
    Points
};

/** Colour components of an image */
enum class ImageFormat
{
    R,
    RG,
    RGB,
    RGBA
};

/** Image storage format */
enum class InternalImageFormat
{
    RGB8,
    SRGB8,
    RGBA8,
    SRGBA8
};

/** Handle to a vertex buffer */
typedef ds::Handle VertexBufferHandle;
/** Handle to a index buffer */
typedef ds::Handle IndexBufferHandle;
/** Handle to a shader object */
typedef ds::Handle ShaderHandle;
/** Handle to a shader program */
typedef ds::Handle ProgramHandle;
/** Handle to a texture */
typedef ds::Handle RenderTextureHandle;
/** Handle to constant buffer */
typedef ds::Handle ConstantBufferHandle;
/** Handle to mesh resource */
typedef ds::Handle MeshResourceHandle;
/** Handle to terrain resource */
typedef ds::Handle TerrainResourceHandle;
/** Handle to texture object */
typedef ds::Handle TextureHandle;
/** Handle to material object */
typedef ds::Handle MaterialHandle;
}
