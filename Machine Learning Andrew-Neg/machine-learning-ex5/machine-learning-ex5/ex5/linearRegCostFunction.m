function [J, grad] = linearRegCostFunction(X, y, theta, lambda)
%LINEARREGCOSTFUNCTION Compute cost and gradient for regularized linear 
%regression with multiple variables
%   [J, grad] = LINEARREGCOSTFUNCTION(X, y, theta, lambda) computes the 
%   cost of using theta as the parameter for linear regression to fit the 
%   data points in X and y. Returns the cost in J and the gradient in grad

% Initialize some useful values
m = length(y); % number of training examples

% You need to return the following variables correctly 
J = 0;
grad = zeros(size(theta));

% ====================== YOUR CODE HERE ======================
% Instructions: Compute the cost and gradient of regularized linear 
%               regression for a particular choice of theta.
%
%               You should set J to the cost and grad to the gradient.
%

%X=[ones(m,1) X];
##a1=X*theta;
##z=(a1-y);
##J=(1/(2*m))*sum(z.^2);
##reg=(lambda/(2*m))*(theta(2:end)'*theta(2:end));
##J=J+reg;
##
##grad(1)=(1/m)*sum(z);
##grad(2:end)=(1/m)*(z)'*X(:,2:end)+(lambda/m)*theta(2:end);

a1=X*theta;
z=(a1-y);
J=(1/(2*m))*sum(z.^2);
reg=(lambda/(2*m))*(theta(2:end))'*theta(2:end);
J=J+reg;

grad(1)=(1/m)*sum(z);
grad(2:end)=(1/m)*(X(:,2:end))'*(z)+(lambda/m)*theta(2:end);








% =========================================================================

grad = grad(:);

end
