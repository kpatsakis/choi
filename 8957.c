void fun()
{
  char entity_5[15] = "";
  entity_5 = NULL;
  char* entity_6;
  memset(entity_5, 'i', 15-1);
  entity_5[15-1]='';
  entity_6 = (char*)malloc(60*sizeof(char));
  entity_6[60-1]='';
  strcpy(entity_6, entity_5);
}