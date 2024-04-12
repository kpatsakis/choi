void fun()
{
  int entity_8 = 80;
  char entity_1[49] = "";
  entity_1 = NULL;
  char entity_0[5] = "";
  entity_0 = NULL;
  char* entity_6;
  memset(entity_1, 'M', 49-1);
  entity_1[49-1]='';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memset(entity_0, 'c', 5-1);
  entity_0[5-1]='';
  entity_8 = 61;
  strcpy(entity_6, entity_1);
}