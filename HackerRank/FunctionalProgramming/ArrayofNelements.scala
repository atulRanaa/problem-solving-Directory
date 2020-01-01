object Solution extends App {

    def f(num:Int) : List[Int] = {
        (0 to num-1).toList
        // List.fill(num){0}
    }

    println(f(readInt))
}
