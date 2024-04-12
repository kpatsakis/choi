void fun()
{
  char entity_8[18] = "";
  entity_8 = NULL;
  char entity_4[88] = "";
  entity_4 = NULL;
  char* entity_6;
  memset(entity_4, 'G', 88-1);
  entity_4[88-1]='';
  memset(entity_8, 's', 18-1);
  entity_8[18-1]='';
  entity_6 = (char*)malloc(43*sizeof(char));
  entity_6[43-1]='';
  strcpy(entity_6, entity_4);
}