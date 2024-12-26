lm(list=ls())
x<-3
ls()

1:10
z<-seq(1,10,1)
z[1]
z[c(4, 8)]
z<-z[-2]

fruits<-c("banana", "apple", "orange")
fruits[2]
fruits <- c(fruits, "lemon")

all <- c(z, fruits)
length(z)
length(fruits)
length(all)
nchar(fruits[2])

x<-c(1, 2, 3)
y<-c(4, 5, 6)
crossprod(x, y)

xy<-c(x, y)
A<-cbind(x, y)
B<-rbind(x, y)

c(1, 3, 5, 0)
A<-matrix(c(1, 3,
            5, 0), 2, 2, byrow=T)


A[1, 2]
A[1,]
A[2,]
A[,1]
A[,2]
t(A)
solve(A)
A %*% solve(A)
solve(A) %*% A



name <- c("j","y","c","s")
age <- c(10,12,13,15)

family<-data.frame(name,age)
family[1, 2]
family[1,]
family[,2]
family$name
family$age

gender<-c("f","f","m","f")
family <- data.frame(family,gender)
family$gender<-NULL






subset(mtcars,vs==1)
mtcars3 <- subset(mtcars,vs==1&am==0, c("hp","am"))
mtcars[, c("hp","am")]



install.packages("wordcloud2")
library(wordcloud2)
head(demoFreq)
wordcloud2(data=demoFreq)

demoFreq <- demoFreq[-2,]
wordcloud2(demoFreq, size=1.2,
	     color = "random-light",
           shape='star',
           backgroundColor = "grey")

