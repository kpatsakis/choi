void fun()
{
  char entity_2[63] = "";
  entity_2 = NULL;
  char entity_8[35] = "";
  entity_8 = NULL;
  char* entity_0;
  char* entity_4;
  memset(entity_8, 'R', 35-1);
  entity_8[35-1]='';
  memset(entity_2, 'h', 63-1);
  entity_2[63-1]='';
  entity_4 = (char*)malloc(7*sizeof(char));
  entity_4[7-1]='';
  entity_0 = (char*)malloc(15*sizeof(char));
  entity_0[15-1]='';
  strcpy(entity_4, entity_2);
}