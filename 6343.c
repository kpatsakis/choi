void fun()
{
  char entity_9[97] = "";
  entity_9 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(58*sizeof(char));
  entity_5[58-1]='';
  memset(entity_9, 'U', 97-1);
  entity_9[97-1]='';
  strcpy(entity_5, entity_9);
}