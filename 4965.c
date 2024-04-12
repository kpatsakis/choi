void fun()
{
  int entity_0 = 65;
  int entity_1 = 54;
  char* entity_9;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  memset(entity_5, 'a', entity_1-1);
  entity_5[entity_1-1]='';
  entity_9 = (char*)malloc(96*sizeof(char));
  entity_9[96-1]='';
  entity_1 = 89;
  memcpy(entity_9, entity_5, entity_1*sizeof(char));
}