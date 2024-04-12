void fun()
{
  int entity_0 = 58;
  int entity_2 = 21;
  char* entity_5;
  char entity_8[58] = "";
  entity_8 = NULL;
  char entity_1[37] = "";
  entity_1 = NULL;
  memset(entity_8, 'y', 58-1);
  entity_8[58-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memset(entity_1, 'J', 37-1);
  entity_1[37-1]='';
  strcpy(entity_5, entity_8);
}