void fun()
{
  char entity_0[82] = "";
  entity_0 = NULL;
  char entity_3[56] = "";
  entity_3 = NULL;
  char* entity_4;
  char* entity_1;
  memset(entity_0, 'u', 82-1);
  entity_0[82-1]='';
  memset(entity_3, 'I', 56-1);
  entity_3[56-1]='';
  entity_4 = (char*)malloc(24*sizeof(char));
  entity_4[24-1]='';
  entity_1 = (char*)malloc(58*sizeof(char));
  entity_1[58-1]='';
  strcpy(entity_1, entity_3);
}