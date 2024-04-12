void fun()
{
  int entity_3 = 29;
  char* entity_8;
  char entity_6[33] = "";
  entity_6 = NULL;
  memset(entity_6, 'x', 33-1);
  entity_6[33-1]='';
  entity_8 = (char*)malloc(38*sizeof(char));
  entity_8[38-1]='';
  strcpy(entity_8, entity_6);
}