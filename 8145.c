void fun()
{
  int entity_5 = 4;
  int entity_8 = 84;
  char* entity_9;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  entity_9 = (char*)malloc(11*sizeof(char));
  entity_9[11-1]='';
  memset(entity_1, 'i', entity_5-1);
  entity_1[entity_5-1]='';
  entity_5 = 66;
  memcpy(entity_9, entity_1, entity_5*sizeof(char));
}