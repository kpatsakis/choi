void fun()
{
  int entity_0 = 42;
  char entity_2[97] = "";
  entity_2 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memset(entity_2, 'm', 97-1);
  entity_2[97-1]='';
  entity_0 = 11;
  strcpy(entity_9, entity_2);
}