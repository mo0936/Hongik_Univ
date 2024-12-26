class(state.x77)
state.x77 <- data.frame(state.x77)
x <- state.x77$Life.Exp
mean(x)
sd(x)
t.test(x, mu=71)
boxplot(x)

#샤피로
shapiro.test(x)
wilcox.test(x, mu=71)


qqnorm(x)
qqline(x)

##########
state.x77 <- data.frame(state.x77)
x <- state.x77$Life.Exp
t.test(x, mu=71)
shapiro.test(x)
qqnorm(x)
qqline(x)