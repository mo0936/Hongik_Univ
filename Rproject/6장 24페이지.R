curve(dnorm(x, 0, 1), from=-5, to=5)
hist(rnorm(1000000))


x<- rnorm(30*100, 0, 1)
hist(x)
x<- matrix(x, 100, 30)
x.bar <- apply(x, 1, mean)
low <- x.bar - 1.96*1/sqrt(30)
high <- x.bar + 1.96 * 1/sqrt(30)
cl <- data.frame(low, high)

plot(NA, xlim=c(0, 101), ylim=c(-1,1))
cl$x0 <- 1:100; cl$y0 <- cl$low
cl$x1 <- 1:100; cl$y1 <- cl$high
segments(cl$x0, cl$y0, cl$x1, cl$y1)
abline(h=0)

which(high<0)
which(low>0)