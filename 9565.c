void fun()
{
  int entity_6 = 28;
  entity_6 = 37;
  char* entity_3;
  char entity_4[89] = "";
  entity_4 = NULL;
  char entity_0[32] = "";
  entity_0 = NULL;
  char entity_8[71] = "";
  entity_8 = NULL;
  memset(entity_8, 'u', 71-1);
  entity_8[71-1]='';
  memset(entity_0, 'b', 32-1);
  entity_0[32-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memset(entity_4, 'X', 89-1);
  entity_4[89-1]='';
  strcpy(entity_3, entity_4);
}