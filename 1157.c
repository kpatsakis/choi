void fun()
{
  int entity_4 = 91;
  char entity_8[54] = "";
  entity_8 = NULL;
  char entity_3[23] = "";
  entity_3 = NULL;
  char entity_2[68] = "";
  entity_2 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_3, 'j', 23-1);
  entity_3[23-1]='';
  memset(entity_2, 'T', 68-1);
  entity_2[68-1]='';
  memset(entity_8, 'w', 54-1);
  entity_8[54-1]='';
  entity_4 = 91;
  strcpy(entity_6, entity_8);
}