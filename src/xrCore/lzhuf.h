#ifndef _LZ_H_
#define _LZ_H_

extern XRCORE_API unsigned _writeLZ(FILE *file, void *data, unsigned size);
extern XRCORE_API unsigned _readLZ(FILE *file, void * &data, unsigned size);

extern XRCORE_API void _compressLZ(u8** dest, unsigned* dest_sz, void* src, unsigned src_sz);
extern XRCORE_API void _decompressLZ(u8** dest, unsigned* dest_sz, void* src, unsigned src_sz);

#endif
