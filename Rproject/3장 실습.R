Titanic

mytable <- Titanic[1:3 , "Female", "Adult",]
install.packages("gmodels")
library(gmodels)

CrossTable(mytable)
#순서 맞추기
plot(mytable)

pt<-prop.table(mytable, 1)
barplot(pt, beside = T, legend = c("1", "2", "3"))


mtcars$am
mtcars$cyl
mytable2 <- table(mtcars$am, mtcars$cyl)
CrossTable(mtcars$am, mtcars$cyl)
CrossTable(mytable2)
plot(mytable2) # 모자이크 그래프
pt<-prop.table(mytable2, 1)*100
barplot(pt, beside = T, legend = c("1", "2"))




cyl <- mtcars$cyl
am <- mtcars$am
levels(am) <- list(a = 0, m = 1)
mytable2 <- table(cyl, am)
CrossTable(cyl, am)
CrossTable(mytable2)
plot(mytable2) # 모자이크 그래프
pt<-prop.table(mytable2, 1)*100
barplot(pt, beside = T, legend = c("4", "6", "8"))
#0 = auto





##########실습############
mtcars$gear
mtcars$am
mytable3 <- table(mtcars$gear, mtcars$am)
CrossTable(mytable3)


