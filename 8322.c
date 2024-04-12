void fun()
{
  int entity_1 = 36;
  char entity_6[42] = "";
  entity_6 = NULL;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(82*sizeof(char));
  entity_0[82-1]='';
  memset(entity_6, 'q', 42-1);
  entity_6[42-1]='';
  memset(entity_9, 'W', entity_1-1);
  entity_9[entity_1-1]='';
  entity_9[19] = 'Y';
}