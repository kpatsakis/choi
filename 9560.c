void fun()
{
  int entity_2 = 83;
  int entity_0 = 9;
  char entity_6 = 'E';
  char entity_5 = 'M';
  char entity_9[9] = "";
  entity_9 = NULL;
  char* entity_8;
  memset(entity_9, 'i', 9-1);
  entity_9[9-1]='';
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  strcpy(entity_8, entity_9);
}