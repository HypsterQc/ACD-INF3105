tests_folder=tests
prog=tp1
help_first_line="Usage: ./tp1 manuel d'utilisation."

# Normal usage

@test "test0 : erreur -1" {
    skip
    run ./$prog
    [ "$status" -eq 0 ]
    [ "${lines[0]}" = "$help_first_line" ]
}

@test "test1 : erreur -2" {
    skip
    run ./$prog < $tests_folder/test1
    [ "${lines[0]}" = "****/\/\****" ]
    [ "${lines[1]}" = "*/\/****\/\*" ]
}

@test "test2 : erreur -3" {
    skip
    run ./$prog < $tests_folder/test1
    [ "${lines[0]}" = "****/\/\****" ]
    [ "${lines[1]}" = "*/\/****\/\*" ]
}

@test "test3 : erreur -4" {
    skip
    run ./$prog < $tests_folder/test1
    [ "${lines[0]}" = "****/\/\****" ]
    [ "${lines[1]}" = "*/\/****\/\*" ]
}

@test "test4 : erreur -5" {
    skip
    run ./$prog < $tests_folder/test1
    [ "${lines[0]}" = "****/\/\****" ]
    [ "${lines[1]}" = "*/\/****\/\*" ]
}

@test "test5 : erreur -6" {
    skip
    run ./$prog < $tests_folder/test1
    [ "${lines[0]}" = "****/\/\****" ]
    [ "${lines[1]}" = "*/\/****\/\*" ]
}

@test "test6 : erreur -7" {
    skip
    run ./$prog < $tests_folder/test1
    [ "${lines[0]}" = "****/\/\****" ]
    [ "${lines[1]}" = "*/\/****\/\*" ]
}

@test "testx : x" {
    skip
    run ./$prog < $tests_folder/test1
    [ "${lines[0]}" = "****/\/\****" ]
    [ "${lines[1]}" = "*/\/****\/\*" ]
}

@test "testx : x" {
    skip
    run ./$prog < $tests_folder/test1
    [ "${lines[0]}" = "****/\/\****" ]
    [ "${lines[1]}" = "*/\/****\/\*" ]
}

@test "testx : x" {
    skip
    run ./$prog < $tests_folder/test1
    [ "${lines[0]}" = "****/\/\****" ]
    [ "${lines[1]}" = "*/\/****\/\*" ]
}

@test "testx : x" {
    skip
    run ./$prog < $tests_folder/test1
    [ "${lines[0]}" = "****/\/\****" ]
    [ "${lines[1]}" = "*/\/****\/\*" ]
}

@test "testx : x" {
    skip
    run ./$prog < $tests_folder/test1
    [ "${lines[0]}" = "****/\/\****" ]
    [ "${lines[1]}" = "*/\/****\/\*" ]
}

@test "testx : x" {
    skip
    run ./$prog < $tests_folder/test1
    [ "${lines[0]}" = "****/\/\****" ]
    [ "${lines[1]}" = "*/\/****\/\*" ]
}

@test "testx : x" {
    skip
    run ./$prog < $tests_folder/test1
    [ "${lines[0]}" = "****/\/\****" ]
    [ "${lines[1]}" = "*/\/****\/\*" ]
}
