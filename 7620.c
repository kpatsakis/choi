void fun()
{
  int entity_9 = 21;
  char entity_8[26] = "";
  entity_8 = NULL;
  char* entity_6;
  char entity_3[97] = "";
  entity_3 = NULL;
  memset(entity_3, 'f', 97-1);
  entity_3[97-1]='';
  memset(entity_8, 'x', 26-1);
  entity_8[26-1]='';
  entity_6 = (char*)malloc(27*sizeof(char));
  entity_6[27-1]='';
  strcpy(entity_6, entity_8);
}