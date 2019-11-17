object DoctorSecret{
    def main(args: Array[String]): Unit = {
        val n = scala.io.StdIn.readLine().split(' ')
        val N = n.map(x => x.trim.toInt)
        // println(N(0), N(1))
        if( N(0) <= 23 && (500 <= N(1) && N(1) <= 1000) )
            println("Take Medicine")
        else
            println("Don't take Medicine")
    }
    
}