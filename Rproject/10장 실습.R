# 10장 실습

aov.out <- aov(count~spray, data=InsectSprays)
anova(aov.out) 
install.packages("agricolae")
library(agricolae) 
duncan.test(aov.out, "spray", alpha=0.05, console=TRUE)
aggregate(count~spray, data=InsectSprays,mean)
TukeyHSD(aov.out)





boxplot(count~spray, data=InsectSprays)
aggregate(count~spray, data=InsectSprays, mean)
aggregate(count~spray, data=InsectSprays, sd)
aggregate(count~spray, data=InsectSprays, summary)
fit <- lm(count~spray, data=InsectSprays)
anova(fit)
smmury(fit)
plot(fit)


aov.out <- aov(count~spray, data=InsectSprays)
anova(aov.out)

TukeyHSD(aov.out)
install.packages("agricolae")
library(agricolae) 
duncan.test(aov.out, "spray", alpha=0.05, console=TRUE)




