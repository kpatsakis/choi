void fun()
{
  int entity_4 = 29;
  char entity_6 = 'X';
  char entity_0[76] = "";
  entity_0 = NULL;
  char* entity_8;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(28*sizeof(char));
  entity_8[28-1]='';
  memset(entity_0, 'Y', 76-1);
  entity_0[76-1]='';
  memset(entity_3, 'u', entity_4-1);
  entity_3[entity_4-1]='';
  memcpy(entity_8, entity_3, entity_4*sizeof(char));
}