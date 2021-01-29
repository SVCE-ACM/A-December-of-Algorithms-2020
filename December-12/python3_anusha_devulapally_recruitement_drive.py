path="https://raw.githubusercontent.com/anusha-devulapally/A-December-of-Algorithms-2020/main/src/assets/RECRUITMENT%20DRIVE%20-%20Sheet1.csv"

import numpy as np 
import pandas as pd 
class LogitRegression() : 
    def __init__( self, learning_rate, iterations ) :         
        self.learning_rate = learning_rate         
        self.iterations = iterations   
    def fit( self, X, Y ) :                 
        self.m, self.n = X.shape               
        self.W = np.zeros( self.n )         
        self.b = 0        
        self.X = X         
        self.Y = Y 
          
        # gradient descent learning 
                  
        for i in range( self.iterations ) :             
            self.update_weights()             
        return self
      
    def update_weights( self ) :            
        A = 1 / ( 1 + np.exp( - ( self.X.dot( self.W ) + self.b ) ) )         
        tmp = ( A - self.Y.T )         
        tmp = np.reshape( tmp, self.m )         
        dW = np.dot( self.X.T, tmp ) / self.m          
        db = np.sum( tmp ) / self.m  
          
        # update weights     
        self.W = self.W - self.learning_rate * dW     
        self.b = self.b - self.learning_rate * db 
          
        return self
      
    def predict( self, X ) : 
        k=np.dot(X.T,self.W)+self.b   
        Z = 1 / ( 1 + np.exp(-(k)))         
        Y = np.where( Z > 0.5, 1, 0 )         
        return Y 
  
def main() : 
    df = pd.read_csv(path) 
    X = df.iloc[:,:-1].values 
    Y = df.iloc[:,-1:].values     
    model = LogitRegression( learning_rate = 0.3, iterations = 1000 ) 
    model.fit( X, Y )         
    x=list(map(float,input().split()))
    x=np.array(x).reshape(-1,1)
    y_pred2=model.predict(x)
    if(y_pred2==1):
      print("Selected")
    else:
      print("Not selected")
if __name__ == "__main__" :      
    main()