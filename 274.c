void fun()
{
  int entity_6 = 96;
  entity_6 = 96;
  char* entity_2;
  char entity_8 = 'E';
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  memset(entity_9, 'i', entity_6-1);
  entity_9[entity_6-1]='';
  entity_2 = (char*)malloc(33*sizeof(char));
  entity_2[33-1]='';
  strcpy(entity_2, entity_9);
}