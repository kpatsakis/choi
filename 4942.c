void fun()
{
  int entity_0 = 39;
  char entity_3[30] = "";
  entity_3 = NULL;
  char entity_2[93] = "";
  entity_2 = NULL;
  char* entity_9;
  memset(entity_2, 'H', 93-1);
  entity_2[93-1]='';
  memset(entity_3, 'a', 30-1);
  entity_3[30-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  strcpy(entity_9, entity_3);
}