#ifndef PureBase_hpp
#define PureBase_hpp

class PureBase {
private:
  static int ObjectCount;

public:
  PureBase ();
  virtual ~PureBase ();
  static int getObjectCount();
  virtual void shoot()=0;
};
int PureBase::ObjectCount=0;
int PureBase::getObjectCount(){ return ObjectCount;}

PureBase::PureBase (){ObjectCount++;}
PureBase::~PureBase (){ObjectCount--;}



#endif /* PureBase_hpp */
