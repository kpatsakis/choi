void fun()
{
  int entity_4 = 29;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  char* entity_9;
  memset(entity_1, 'C', entity_4-1);
  entity_1[entity_4-1]='';
  entity_9 = (char*)malloc(53*sizeof(char));
  entity_9[53-1]='';
  strcpy(entity_9, entity_1);
}