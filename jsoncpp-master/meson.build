project(
  'jsoncpp',
  'cpp',

  # Note: version must be updated in three places when doing a release. This
  # annoying process ensures that amalgamate, CMake, and meson all report the
  # correct version.
  # 1. /meson.build
  # 2. /include/json/version.h
  # 3. /CMakeLists.txt
  # IMPORTANT: also update the SOVERSION!!
  version : '1.9.2',
  default_options : [
    'buildtype=release',
    'cpp_std=c++11',
    'warning_level=1'],
  license : 'Public Domain',
  meson_version : '>= 0.50.0')


jsoncpp_headers = [
  'include/json/allocator.h',
  'include/json/assertions.h',
  'include/json/autolink.h',
  'include/json/config.h',
  'include/json/json_features.h',
  'include/json/forwards.h',
  'include/json/json.h',
  'include/json/reader.h',
  'include/json/value.h',
  'include/json/version.h',
  'include/json/writer.h']
jsoncpp_include_directories = include_directories('include')

install_headers(
  jsoncpp_headers,
  subdir : 'json')

if get_option('default_library') == 'shared' and meson.get_compiler('cpp').get_id() == 'msvc'
  dll_export_flag = '-DJSON_DLL_BUILD'
  dll_import_flag = '-DJSON_DLL'
else
  dll_export_flag = []
  dll_import_flag = []
endif

jsoncpp_lib = library(
  'jsoncpp',
  [ jsoncpp_headers,
    'src/lib_json/json_tool.h',
    'src/lib_json/json_reader.cpp',
    'src/lib_json/json_value.cpp',
    'src/lib_json/json_writer.cpp'],
  soversion : 22,
  install : true,
  include_directories : jsoncpp_include_directories,
  cpp_args: dll_export_flag)

import('pkgconfig').generate(
  libraries : jsoncpp_lib,
  version : meson.project_version(),
  name : 'jsoncpp',
  filebase : 'jsoncpp',
  description : 'A C++ library for interacting with JSON')

# for libraries bundling jsoncpp
jsoncpp_dep = declare_dependency(
  include_directories : jsoncpp_include_directories,
  link_with : jsoncpp_lib,
  version : meson.project_version(),
  )

# tests
python = import('python').find_installation()

jsoncpp_test = executable(
  'jsoncpp_test',
  [ 'src/test_lib_json/jsontest.cpp',
    'src/test_lib_json/jsontest.h',
    'src/test_lib_json/main.cpp',
    'src/test_lib_json/fuzz.cpp'],
  include_directories : jsoncpp_include_directories,
  link_with : jsoncpp_lib,
  install : false,
  cpp_args: dll_import_flag)
test(
  'unittest_jsoncpp_test',
  jsoncpp_test)

jsontestrunner = executable(
  'jsontestrunner',
  'src/jsontestrunner/main.cpp',
  include_directories : jsoncpp_include_directories,
  link_with : jsoncpp_lib,
  install : false,
  cpp_args: dll_import_flag)
test(
  'unittest_jsontestrunner',
  python,
  args : [
    '-B',
    join_paths(meson.current_source_dir(), 'test/runjsontests.py'),
    jsontestrunner,
    join_paths(meson.current_source_dir(), 'test/data')]
  )
