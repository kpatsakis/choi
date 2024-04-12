void fun()
{
  char entity_5[90] = "";
  entity_5 = NULL;
  char* entity_3;
  memset(entity_5, 'Y', 90-1);
  entity_5[90-1]='';
  entity_3 = (char*)malloc(38*sizeof(char));
  entity_3[38-1]='';
  strcpy(entity_3, entity_5);
}