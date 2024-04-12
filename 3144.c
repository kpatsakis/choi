void fun()
{
  char* entity_6;
  char entity_3[2] = "";
  entity_3 = NULL;
  char entity_4 = 'X';
  char entity_0[28] = "";
  entity_0 = NULL;
  memset(entity_0, 'V', 28-1);
  entity_0[28-1]='';
  entity_6 = (char*)malloc(12*sizeof(char));
  entity_6[12-1]='';
  memset(entity_3, 'K', 2-1);
  entity_3[2-1]='';
  strcpy(entity_6, entity_3);
}