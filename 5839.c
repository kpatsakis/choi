void fun()
{
  int entity_5 = 31;
  int entity_8 = 28;
  int entity_1 = 69;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(77*sizeof(char));
  entity_6[77-1]='';
  memset(entity_9, 'Z', entity_1-1);
  entity_9[entity_1-1]='';
  memcpy(entity_6, entity_9, entity_1*sizeof(char));
}