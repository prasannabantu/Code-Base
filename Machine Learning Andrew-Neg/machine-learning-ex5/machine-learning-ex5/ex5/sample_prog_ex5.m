clear ; close all; clc;

load ('ex5data1.mat');

m = size(X, 1);
theta = [1 ; 1];

%J = linearRegCostFunction([ones(m, 1) X], y, theta, 1);
lambda=1;

X=[ones(m,1) X];
a1=X*theta;
J=(1/(2*m))*sum((a1-y).^2);
reg=(lambda/(2*m))*(theta(2:end)'*theta(2:end));
J=J+reg;

grad = zeros(size(theta));
grad(1)=(1/m)*sum(a1);
grad(2:end)=(1/m)*X(:,2:end)'*a1;