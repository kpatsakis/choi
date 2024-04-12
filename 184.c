void fun()
{
  int entity_6 = 8;
  char* entity_5;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  entity_5 = (char*)malloc(76*sizeof(char));
  entity_5[76-1]='';
  memset(entity_9, 'g', entity_6-1);
  entity_9[entity_6-1]='';
  strcpy(entity_5, entity_9);
}