#
# zlib CMakeLists.txt
#

add_library(zlib STATIC
    "adler32.c"
    "compress.c"
    "crc32.c"
    "deflate.c"
    "gzclose.c"
    "gzlib.c"
    "gzread.c"
    "gzwrite.c"
    "infback.c"
    "inffast.c"
    "inflate.c"
    "inftrees.c"
    "trees.c"
    "uncompr.c"
    "zutil.c"
    "contrib/minizip/ioapi.c"
    "contrib/minizip/iowin32.c"
# we don't need these
# uncommented due to them containing 'main' functions
# which confuses compilers
#    "contrib/minizip/miniunz.c"
#    "contrib/minizip/minizip.c"
    "contrib/minizip/mztools.c"
    "contrib/minizip/unzip.c"
    "contrib/minizip/zip.c"
)