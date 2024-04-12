void fun()
{
  char entity_2[96] = "";
  entity_2 = NULL;
  char* entity_5;
  char* entity_6;
  char entity_0[14] = "";
  entity_0 = NULL;
  entity_6 = (char*)malloc(4*sizeof(char));
  entity_6[4-1]='';
  memset(entity_2, 'j', 96-1);
  entity_2[96-1]='';
  entity_5 = (char*)malloc(73*sizeof(char));
  entity_5[73-1]='';
  memset(entity_0, 'n', 14-1);
  entity_0[14-1]='';
  strcpy(entity_5, entity_2);
}