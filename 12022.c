void fun()
{
  int entity_1 = 22;
  char entity_9[32] = "";
  char entity_6 = 'Y';
  char entity_5[39] = "";
  char* entity_0;
  memset(entity_9, 's', 32-1);
  entity_9[32-1]='0';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[0]='0';
  memset(entity_5, 'i', 39-1);
  entity_5[39-1]='0';
  memcpy(entity_0, entity_5, 39*sizeof(char));
}