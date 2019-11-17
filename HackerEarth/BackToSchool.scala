object BackToSchool{
    def main(args: Array[String]): Unit = {
        val n = scala.io.StdIn.readLine().split(' ')
        val N = n.map(x => x.trim.toInt).reduceLeft(_ max _)
        println(N)
    }
    
}
