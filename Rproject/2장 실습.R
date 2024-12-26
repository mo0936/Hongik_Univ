hp<-mtcars$hp
boxplot(hp) #상자도표
hist(hp) #히스토그램 (연속적인 값)
mean(hp) #평균
median(hp) #중앙값
var(hp) #분산
sd(hp) #표준편차
max(hp) #최댓값
min(hp) #최소값
quantile(hp) #분위수
boxplot(hp)$out
IQR(hp) 
which(hp > 180 + 1.5 * 83.5)
mtcars[31,]


install.packages("GGally")
library(GGally)
data(mtcars)
mtcars$cyl <- factor(mtcars$cyl)
mtcars$am <- factor(mtcars$am)
mtcars$vs <- factor(mtcars$vs)
mtcars$gear <- factor(mtcars$gear)
ggpairs(mtcars)

data(mtcars)
cor(mtcars$wt, mtcars$hp)
fit <- lm(hp~wt, data~mtcars)
with(mtcars,plot(wt, hp, xlab = "무게", ylab = "마력"))
abline(fit)
legend(1.5, 250, "hp =- 1.821+46.160*wt")

par(mfrow=c(2,2))
boxplot(hp~cyl, data=mtcars)
boxplot(hp~am, data=mtcars)


par(mfrow=c(2,2))
boxplot(hp~cyl, data=mtcars)
aggregate(hp~cyl, mean, data=mtcars)
aggregate(hp~cyl, var, data=mtcars)
aggregate(hp~cyl, sd, data=mtcars)
aggregate(hp~cyl, max, data=mtcars)
aggregate(hp~cyl, min, data=mtcars)
aggregate(hp~cyl, IQR, data=mtcars)


boxplot(hp~am, data=mtcars)
aggregate(hp~am, mean, data=mtcars)
aggregate(hp~am, var, data=mtcars)
aggregate(hp~am, sd, data=mtcars)
aggregate(hp~am, max, data=mtcars)
aggregate(hp~am, min, data=mtcars)
aggregate(hp~am, IQR, data=mtcars)


par(mfrow=c(1, 2))
boxplot(hp~am+cyl, data = mtcars)
boxplot(hp~cyl+am, data = mtcars)
aggregate(hp~cyl+am, mean, data=mtcars)
aggregate(hp~cyl+am, var, data=mtcars)
aggregate(hp~cyl+am, sd, data=mtcars)
aggregate(hp~cyl+am, max, data=mtcars)
aggregate(hp~cyl+am, min, data=mtcars)
aggregate(hp~cyl+am, IQR, data=mtcars)


subset(mtcars, cyl==8 & am==0, c("cyl","am", "hp"))
a$hp)



iris
names(iris)
#help(iris)
boxplot(Sepal.Length~Species, data=iris)
aggregate(Sepal.Length ~Species, data=iris, mean)
boxplot(Sepal.Width~Species, data=iris)
aggregate(Sepal.Width~Species, data=iris, mean)


######실습
data <- subset(mtcars, am == 0 &cyl == 8, c("am","cyl", "hp","mpg"))
fit <- lm(hp~mpg, data = data)
fit




######예제 @@@
par(mfrow = c(2, 2))
z<- c(1, 2, 2, 3, 3, 3, 4, 4, 5)
table(z)
hist(z)
boxplot(z)
mean(z)
median(z)
quantile(z)
range(z)
var(z)
sd(z)

IQR(z)
