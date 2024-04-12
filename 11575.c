void fun()
{
  char* entity_6;
  char entity_4[67] = "";
  char* entity_0;
  char entity_3 = 'c';
  char entity_7[39] = "";
  entity_0 = (char*)malloc(32*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'J', 67-1);
  entity_4[67-1]='0';
  memset(entity_7, 'J', 39-1);
  entity_7[39-1]='0';
  entity_6 = (char*)malloc(2*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_7, 39*sizeof(char));
}