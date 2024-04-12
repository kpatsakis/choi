void fun()
{
  int entity_0 = 5;
  entity_0 = 13;
  char entity_7[86] = "";
  entity_7 = NULL;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char* entity_9;
  memset(entity_1, 'i', entity_0-1);
  entity_1[entity_0-1]='';
  memset(entity_7, 'I', 86-1);
  entity_7[86-1]='';
  entity_9 = (char*)malloc(17*sizeof(char));
  entity_9[17-1]='';
  memcpy(entity_9, entity_1, entity_0*sizeof(char));
}