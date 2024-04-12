void fun()
{
  int entity_3 = 62;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(76*sizeof(char));
  entity_9[76-1]='';
  memset(entity_1, 'x', entity_3-1);
  entity_1[entity_3-1]='';
  memcpy(entity_9, entity_1, entity_3*sizeof(char));
}