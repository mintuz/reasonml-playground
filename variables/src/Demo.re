let message = {
    let part1 = "hello "
    let part2 = ref("world") /* Make something mutable */

    if (part2^ === "world") { /* Reference a value */
        part2 := "adam" /* Reassign the value */
    }

    part1 ++ part2^; /* concat two strings together referencing second value in part2 */
}

Js.log(message)
