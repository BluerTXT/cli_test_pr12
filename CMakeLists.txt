# CMakeList.txt: проект CMake для cli_test; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.10)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("cli_test")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (app "${CMAKE_CURRENT_SOURCE_DIR}/src/cli_test.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/src/m_utils.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  target_compile_features(app PUBLIC cxx_std_20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.

enable_testing()

add_executable (tests "${CMAKE_CURRENT_SOURCE_DIR}/tests/tests.cpp" "${CMAKE_CURRENT_SOURCE_DIR}/src/m_utils.cpp")

add_test(NAME MathUnitTests COMMAND tests)
