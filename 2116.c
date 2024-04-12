void fun()
{
  int entity_4 = 98;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(4*sizeof(char));
  entity_9[4-1]='';
  memset(entity_1, 'L', entity_4-1);
  entity_1[entity_4-1]='';
  strcpy(entity_9, entity_1);
}