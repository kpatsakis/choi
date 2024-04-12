void fun()
{
  int entity_4 = 95;
  entity_4 = 79;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_5;
  memset(entity_9, 'l', entity_4-1);
  entity_9[entity_4-1]='';
  entity_5 = (char*)malloc(31*sizeof(char));
  entity_5[31-1]='';
  memcpy(entity_5, entity_9, entity_4*sizeof(char));
}