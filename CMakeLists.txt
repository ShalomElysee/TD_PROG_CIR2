 cmake_minimum_required(VERSION 3.1)
 # Activez Rechargement à chaud pour les compilateurs MSVC si cela est pris en charge.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()
 
project ("CIR2_TD_PROG")
 
# Incluez les sous-projets.
 project(TD_PROG_CIR2)
 add_subdirectory(TD1)
  add_subdirectory(OOP1)
  add_subdirectory(TP2)
  add_subdirectory(Excours)
  add_subdirectory(TP3)
