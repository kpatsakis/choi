void fun()
{
  int entity_1 = 92;
  int entity_2 = 62;
  char* entity_4;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  memset(entity_9, 'F', entity_1-1);
  entity_9[entity_1-1]='';
  entity_4 = (char*)malloc(37*sizeof(char));
  entity_4[37-1]='';
  memcpy(entity_4, entity_9, entity_1*sizeof(char));
}