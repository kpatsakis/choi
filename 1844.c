void fun()
{
  int entity_4 = 80;
  entity_4 = 33;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(36*sizeof(char));
  entity_5[36-1]='';
  memset(entity_9, 'x', entity_4-1);
  entity_9[entity_4-1]='';
  memcpy(entity_5, entity_9, entity_4*sizeof(char));
}