void fun()
{
  int entity_1 = 37;
  char entity_8[55] = "";
  entity_8 = NULL;
  char entity_2[76] = "";
  entity_2 = NULL;
  char* entity_6;
  memset(entity_2, 'W', 76-1);
  entity_2[76-1]='';
  memset(entity_8, 'C', 55-1);
  entity_8[55-1]='';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  strcpy(entity_6, entity_8);
}