void fun()
{
  int entity_5 = 16;
  entity_5 = 35;
  char* entity_3;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  entity_3 = (char*)malloc(59*sizeof(char));
  entity_3[59-1]='';
  memset(entity_9, 'P', entity_5-1);
  entity_9[entity_5-1]='';
  memcpy(entity_3, entity_9, entity_5*sizeof(char));
}