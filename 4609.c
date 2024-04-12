void fun()
{
  int entity_8 = 87;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_5;
  char entity_2 = 'v';
  memset(entity_9, 'E', entity_8-1);
  entity_9[entity_8-1]='';
  entity_5 = (char*)malloc(12*sizeof(char));
  entity_5[12-1]='';
  entity_8 = 5;
  strcpy(entity_5, entity_9);
}