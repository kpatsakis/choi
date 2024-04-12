void fun()
{
  char* entity_1;
  char entity_4[70] = "";
  entity_4 = NULL;
  char entity_6[15] = "";
  entity_6 = NULL;
  memset(entity_6, 'Q', 15-1);
  entity_6[15-1]='';
  memset(entity_4, 'o', 70-1);
  entity_4[70-1]='';
  entity_1 = (char*)malloc(1*sizeof(char));
  entity_1[1-1]='';
  strcpy(entity_1, entity_6);
}