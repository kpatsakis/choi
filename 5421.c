void fun()
{
  char* entity_6;
  char entity_4[21] = "";
  entity_4 = NULL;
  memset(entity_4, 'i', 21-1);
  entity_4[21-1]='';
  entity_6 = (char*)malloc(38*sizeof(char));
  entity_6[38-1]='';
  strcpy(entity_6, entity_4);
}