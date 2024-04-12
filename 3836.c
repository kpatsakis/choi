void fun()
{
  int entity_8 = 73;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(19*sizeof(char));
  entity_4[19-1]='';
  memset(entity_9, 'f', entity_8-1);
  entity_9[entity_8-1]='';
  entity_8 = 81;
  strcpy(entity_4, entity_9);
}