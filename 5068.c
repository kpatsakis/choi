void fun()
{
  int entity_9 = 68;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char* entity_1;
  memset(entity_5, 'P', entity_9-1);
  entity_5[entity_9-1]='';
  entity_1 = (char*)malloc(37*sizeof(char));
  entity_1[37-1]='';
  memcpy(entity_1, entity_5, entity_9*sizeof(char));
}