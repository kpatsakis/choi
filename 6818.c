void fun()
{
  int entity_4 = 67;
  char* entity_8;
  char entity_6[91] = "";
  entity_6 = NULL;
  char entity_2 = 'B';
  char entity_3[18] = "";
  entity_3 = NULL;
  memset(entity_6, 'P', 91-1);
  entity_6[91-1]='';
  memset(entity_3, 'u', 18-1);
  entity_3[18-1]='';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  strcpy(entity_8, entity_3);
}