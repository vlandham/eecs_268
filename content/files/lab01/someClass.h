/** @file
 *	 An example file
 *  @author Jim V
 *  @date 28 August 2007
 *  @version 0.1 */
 
 /** This is a class.  It does things. */
 class Some
 {
 public:
 	/** Default constructor. */
 	Some();
 	
 	/** Accessor method for data
 	 * @pre None.
 	 * @post None.
 	 * @return The value stored in data. */
 	int getData() const;
 	
 	/** Mutator method for data.
 	 * @param x An integer value.
 	 * @pre x has desired new value for data.
 	 * @post data now has the value of x. */
 	void setData(inx x);
 
 private:
 	/** The data member in the class Some. */
 	int data;
 };
