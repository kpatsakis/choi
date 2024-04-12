void fun()
{
  int entity_9 = 42;
  char entity_6[96] = "";
  entity_6 = NULL;
  char entity_3[4] = "";
  entity_3 = NULL;
  char* entity_4;
  memset(entity_3, 'i', 4-1);
  entity_3[4-1]='';
  memset(entity_6, 'n', 96-1);
  entity_6[96-1]='';
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[entity_9-1]='';
  strcpy(entity_4, entity_3);
}