object Divisibility{
    def main(args: Array[String]): Unit = {
        val n = scala.io.StdIn.readInt()
        val arr = scala.io.StdIn.readLine().split(' ').last
        val N = arr.trim.toInt
        
        
        if((N)%10 == 0) println("Yes")
        else println("No")
    }
    
}
