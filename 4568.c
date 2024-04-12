void fun()
{
  int entity_0 = 56;
  char entity_3[67] = "";
  entity_3 = NULL;
  char* entity_4;
  char entity_8[39] = "";
  entity_8 = NULL;
  memset(entity_8, 'i', 39-1);
  entity_8[39-1]='';
  memset(entity_3, 'l', 67-1);
  entity_3[67-1]='';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  strcpy(entity_4, entity_3);
}