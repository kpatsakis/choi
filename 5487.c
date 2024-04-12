void fun()
{
  int entity_6 = 33;
  char* entity_3;
  char entity_8[76] = "";
  entity_8 = NULL;
  char entity_5[19] = "";
  entity_5 = NULL;
  char entity_4 = 'n';
  memset(entity_8, 'x', 76-1);
  entity_8[76-1]='';
  memset(entity_5, 'G', 19-1);
  entity_5[19-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  strcpy(entity_3, entity_8);
}