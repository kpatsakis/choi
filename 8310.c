void fun()
{
  char entity_3[3] = "";
  entity_3 = NULL;
  char entity_0[87] = "";
  entity_0 = NULL;
  char entity_1[13] = "";
  entity_1 = NULL;
  char* entity_2;
  memset(entity_1, 'p', 13-1);
  entity_1[13-1]='';
  memset(entity_0, 'n', 87-1);
  entity_0[87-1]='';
  entity_2 = (char*)malloc(62*sizeof(char));
  entity_2[62-1]='';
  memset(entity_3, 'N', 3-1);
  entity_3[3-1]='';
  strcpy(entity_2, entity_0);
}