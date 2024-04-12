void fun()
{
  int entity_9 = 81;
  char entity_2[29] = "";
  entity_2 = NULL;
  char* entity_8;
  char entity_1 = 'Q';
  char entity_0[49] = "";
  entity_0 = NULL;
  memset(entity_0, 'Y', 49-1);
  entity_0[49-1]='';
  memset(entity_2, 'f', 29-1);
  entity_2[29-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  strcpy(entity_8, entity_2);
}