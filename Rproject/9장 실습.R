auto <- subset(mtcars, am==0)
x<- auto$hp
y <- auto$mpg

plot(x,y)
fit <- lm(y~x)
fit
abline(fit)
anova(fit)
summary(fit)

abline(fit)
par(mfrow=c(2,2))
plot(fit)
shapiro.test(fit$resid)

9장 보고서
#################







state.x77 <- data.frame(state.x77)
names(state.x77)
fit <- lm(Life.Exp ~ Illiteracy, data = state.x77)
with(state.x77, plot(Illiteracy, Life.Exp))
abline(fit)
anova(fit)
summary(fit)

plot(x,y)
abline(fit)

par(mfrow=c(2,2))
plot(fit)

install.packages("car")
library(car)
influencePlot(fit)

shapiro.test(fit$resid)