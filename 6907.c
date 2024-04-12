void fun()
{
  char* entity_6;
  char entity_4[12] = "";
  entity_4 = NULL;
  memset(entity_4, 'i', 12-1);
  entity_4[12-1]='';
  entity_6 = (char*)malloc(44*sizeof(char));
  entity_6[44-1]='';
  strcpy(entity_6, entity_4);
}