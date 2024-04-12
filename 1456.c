void fun()
{
  int entity_6 = 86;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(76*sizeof(char));
  entity_2[76-1]='';
  memset(entity_9, 'w', entity_6-1);
  entity_9[entity_6-1]='';
  strcpy(entity_2, entity_9);
}