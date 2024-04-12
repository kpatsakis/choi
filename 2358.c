void fun()
{
  int entity_9 = 92;
  entity_9 = 94;
  char entity_2 = 'z';
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_6;
  memset(entity_0, 'd', entity_9-1);
  entity_0[entity_9-1]='';
  entity_6 = (char*)malloc(86*sizeof(char));
  entity_6[86-1]='';
  memcpy(entity_6, entity_0, entity_9*sizeof(char));
}