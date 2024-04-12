void fun()
{
  int entity_0 = 43;
  char* entity_9;
  char entity_4 = 'r';
  char entity_1[49] = "";
  entity_1 = NULL;
  char entity_6[37] = "";
  entity_6 = NULL;
  memset(entity_6, 'i', 37-1);
  entity_6[37-1]='';
  memset(entity_1, 'E', 49-1);
  entity_1[49-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  strcpy(entity_9, entity_6);
}