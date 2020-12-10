  
aux_source_directory(. DL_MALLOC_SRC)

add_library(dlmalloc STATIC ${DL_MALLOC_SRC})
target_compile_definitions(dlmalloc PRIVATE ONLY_MSPACES=1)