file(GLOB hdrs "*.h*") 
file(GLOB srcs "*.cpp")

add_library(${Arifmethic} STATIC ${srcs} ${hdrs}) 


