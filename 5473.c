void fun()
{
  int entity_2 = 84;
  char* entity_9;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  memset(entity_4, 'i', entity_2-1);
  entity_4[entity_2-1]='';
  entity_9 = (char*)malloc(55*sizeof(char));
  entity_9[55-1]='';
  strcpy(entity_9, entity_4);
}