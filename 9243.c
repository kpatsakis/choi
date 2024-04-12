void fun()
{
  int entity_0 = 11;
  char entity_7[39] = "";
  entity_7 = NULL;
  char* entity_2;
  char entity_6[25] = "";
  entity_6 = NULL;
  char entity_8[71] = "";
  entity_8 = NULL;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  memset(entity_8, 'h', 71-1);
  entity_8[71-1]='';
  memset(entity_6, 'b', 25-1);
  entity_6[25-1]='';
  memset(entity_7, 'j', 39-1);
  entity_7[39-1]='';
  memset(entity_3, 'u', entity_0-1);
  entity_3[entity_0-1]='';
  entity_2 = (char*)malloc(53*sizeof(char));
  entity_2[53-1]='';
  entity_0 = 7;
  strcpy(entity_2, entity_3);
}