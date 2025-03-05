project(
  'keiko',
  'c',
  version: '0.1',
  default_options: ['warning_level=3', 'c_std=gnu11'],
)

cc = meson.get_compiler('c')

add_project_arguments('-DDEBUG_PRINT_CODE', language: 'c')

include = include_directories('./')

src_files = files(
  'chunk.c',
  'compiler.c',
  'debug.c',
  'main.c',
  'memory.c',
  'object.c',
  'scanner.c',
  'table.c',
  'value.c',
  'vm.c',
)

executable(
  'main',
  src_files,
  include_directories: [include],
)
