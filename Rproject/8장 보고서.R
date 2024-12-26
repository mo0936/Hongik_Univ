#이표본 t-검정

xy <- subset(mtcars, cyl==4 | cyl==6, c(cyl, mpg))
x<-subset(xy, cyl==4, c(mpg))
y <- subset(xy, cyl == 6, c(mpg))

#x<-subset(mtcars, cyl==4, c(mpg))
#y <- subset(mtcars, cyl == 6, c(mpg))


boxplot(mpg ~ cyl, data=xy)
t.test(x,y)

#등분산 T-검정
t.test(x,y, var.equal=T)

var.test(x$mpg,y$mpg)

InsectSprays
boxplot(count~spray, data = InsectSprays)
xy <- subset(InsectSprays, spray=="B" | spray=="F")
xy$spray <- droplevels(xy$spray)
boxplot(count~spray, data=xy)

x <- subset(xy, spray=="B", c(count))$count
y <- subset(xy, spray=="F", c(count))$count

var.test(x,y)
t.test(x, y, var.equal = T)
t.test(x,y)
mean(x)
mean(y)
sd(x)
sd(y)
length(x)
length(y)