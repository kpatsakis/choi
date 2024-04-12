void fun()
{
  int entity_5 = 48;
  entity_5 = 20;
  char* entity_3;
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  entity_3 = (char*)malloc(4*sizeof(char));
  entity_3[4-1]='';
  memset(entity_9, 'x', entity_5-1);
  entity_9[entity_5-1]='';
  memcpy(entity_3, entity_9, entity_5*sizeof(char));
}