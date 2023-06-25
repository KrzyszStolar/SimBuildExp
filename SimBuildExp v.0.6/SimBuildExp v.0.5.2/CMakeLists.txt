# CMakeList.txt: projekt CMake dla elementu SimBuildExp v.0.5.2, dołącz źródło i zdefiniuj
# tutaj logikę specyficzną dla projektu.
#

# Dodaj źródło do pliku wykonywalnego tego projektu.
add_executable (CMakeTarget "SimBuildExp v.0.5.2.cpp" "SimBuildExp v.0.5.2.h" "Map.h" "Map.cpp"  "Object.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeTarget PROPERTY CXX_STANDARD 20)
endif()

# TODO: Dodaj testy i zainstaluj elementy docelowe w razie potrzeby.
