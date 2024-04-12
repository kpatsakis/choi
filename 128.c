void fun()
{
  int entity_3 = 33;
  int entity_7 = 10;
  char entity_0[10] = "";
  entity_0 = NULL;
  char entity_6[62] = "";
  entity_6 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memset(entity_0, 'X', 10-1);
  entity_0[10-1]='';
  memset(entity_6, 'n', 62-1);
  entity_6[62-1]='';
  strcpy(entity_5, entity_6);
}