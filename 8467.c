void fun()
{
  int entity_5 = 35;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_9;
  memset(entity_1, 'p', entity_5-1);
  entity_1[entity_5-1]='';
  entity_9 = (char*)malloc(100*sizeof(char));
  entity_9[100-1]='';
  entity_5 = 55;
  memcpy(entity_9, entity_1, entity_5*sizeof(char));
}