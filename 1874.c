void fun()
{
  int entity_1 = 7;
  char entity_6[31] = "";
  entity_6 = NULL;
  char entity_9 = 'N';
  char* entity_0;
  memset(entity_6, 'i', 31-1);
  entity_6[31-1]='';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  entity_1 = 53;
  memcpy(entity_0, entity_6, 31*sizeof(char));
}