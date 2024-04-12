void fun()
{
  int entity_9 = 91;
  int entity_7 = 8;
  entity_9 = 68;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(9*sizeof(char));
  entity_5[9-1]='';
  memset(entity_0, 'M', entity_9-1);
  entity_0[entity_9-1]='';
  memcpy(entity_5, entity_0, entity_9*sizeof(char));
}