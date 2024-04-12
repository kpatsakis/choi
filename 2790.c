void fun()
{
  int entity_7 = 47;
  entity_7 = 66;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(36*sizeof(char));
  entity_1[36-1]='';
  memset(entity_9, 'x', entity_7-1);
  entity_9[entity_7-1]='';
  memcpy(entity_1, entity_9, entity_7*sizeof(char));
}