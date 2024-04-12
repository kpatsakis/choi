void fun()
{
  char entity_0[7] = "";
  entity_0 = NULL;
  char* entity_1;
  char entity_3[30] = "";
  entity_3 = NULL;
  memset(entity_3, 't', 30-1);
  entity_3[30-1]='';
  memset(entity_0, 'f', 7-1);
  entity_0[7-1]='';
  entity_1 = (char*)malloc(87*sizeof(char));
  entity_1[87-1]='';
  strcpy(entity_1, entity_3);
}