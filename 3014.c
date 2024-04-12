void fun()
{
  int entity_3 = 63;
  entity_3 = 63;
  char* entity_9;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  entity_9 = (char*)malloc(53*sizeof(char));
  entity_9[53-1]='';
  memset(entity_1, 'v', entity_3-1);
  entity_1[entity_3-1]='';
  strcpy(entity_9, entity_1);
}