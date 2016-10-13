set(SRCS
    main.cpp
    MyApp.cpp
    )

add_executable(myApp ${SRCS})
target_link_libraries(myApp myLibShared)

install(TARGETS myApp RUNTIME DESTINATION bin/${PROJECT_NAME})
