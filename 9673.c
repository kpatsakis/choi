void fun()
{
  int entity_1 = 91;
  int entity_9 = 39;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_4;
  memset(entity_2, 'K', entity_1-1);
  entity_2[entity_1-1]='';
  entity_4 = (char*)malloc(8*sizeof(char));
  entity_4[8-1]='';
  strcpy(entity_4, entity_2);
}