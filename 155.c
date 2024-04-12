void fun()
{
  char entity_2[63] = "";
  entity_2 = NULL;
  char entity_3[2] = "";
  entity_3 = NULL;
  char entity_6[73] = "";
  entity_6 = NULL;
  char entity_8[8] = "";
  entity_8 = NULL;
  char* entity_5;
  memset(entity_2, 'v', 63-1);
  entity_2[63-1]='';
  entity_5 = (char*)malloc(38*sizeof(char));
  entity_5[38-1]='';
  memset(entity_6, 'A', 73-1);
  entity_6[73-1]='';
  memset(entity_3, 'l', 2-1);
  entity_3[2-1]='';
  memset(entity_8, 'B', 8-1);
  entity_8[8-1]='';
  strcpy(entity_5, entity_2);
}