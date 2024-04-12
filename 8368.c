void fun()
{
  int entity_8 = 92;
  char entity_3[11] = "";
  entity_3 = NULL;
  char entity_6[58] = "";
  entity_6 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memset(entity_6, 'U', 58-1);
  entity_6[58-1]='';
  memset(entity_3, 'X', 11-1);
  entity_3[11-1]='';
  strcpy(entity_7, entity_6);
}