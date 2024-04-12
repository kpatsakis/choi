void fun()
{
  int entity_0 = 4;
  int entity_2 = 35;
  char* entity_7;
  char entity_1[39] = "";
  entity_1 = NULL;
  char entity_8[49] = "";
  entity_8 = NULL;
  memset(entity_1, 'h', 39-1);
  entity_1[39-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_8, 'a', 49-1);
  entity_8[49-1]='';
  strcpy(entity_7, entity_8);
}