void fun()
{
  char* entity_4;
  char entity_8[28] = "";
  entity_8 = NULL;
  char entity_3[19] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_4 = (char*)malloc(30*sizeof(char));
  entity_4[30-1]='';
  memset(entity_3, 'G', 19-1);
  entity_3[19-1]='';
  memset(entity_8, 'i', 28-1);
  entity_8[28-1]='';
  entity_5 = (char*)malloc(71*sizeof(char));
  entity_5[71-1]='';
  strcpy(entity_5, entity_3);
}