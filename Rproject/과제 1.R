########### 8번
Titanic
mytable <- Titanic[1:3, "Male", "Adult",]
CrossTable(mytable)




############## 9 번
head(iris); names(iris)
Sepal.Length<-iris$Sepal.Length
Species<-iris$Species

mytable <- table(Sepal.Length, Species)
CrossTable(mytable)



#######
aggregate(Sepal.Length~Species,data = iris, mean)
aggregate(Sepal.Length~Species,data = iris, sd)


boxplot(Sepal.Length~Species, data = iris)





###########10번
mytable <- Titanic[1:3, "Male", "Child",]
CrossTable(mytable)
plot(mytable)