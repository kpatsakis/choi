void fun()
{
  char entity_5[88] = "";
  entity_5 = NULL;
  char* entity_8;
  char* entity_9;
  char entity_0[61] = "";
  entity_0 = NULL;
  memset(entity_5, 'h', 88-1);
  entity_5[88-1]='';
  entity_9 = (char*)malloc(30*sizeof(char));
  entity_9[30-1]='';
  entity_8 = (char*)malloc(63*sizeof(char));
  entity_8[63-1]='';
  memset(entity_0, 'X', 61-1);
  entity_0[61-1]='';
  entity_0[43] = 'c';
}