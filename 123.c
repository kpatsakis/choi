void fun()
{
  int entity_6 = 5;
  char* entity_4;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  entity_4 = (char*)malloc(48*sizeof(char));
  entity_4[48-1]='';
  memset(entity_9, 'q', entity_6-1);
  entity_9[entity_6-1]='';
  entity_6 = 43;
  strcpy(entity_4, entity_9);
}