void fun()
{
  char entity_5[33] = "";
  entity_5 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(6*sizeof(char));
  entity_4[6-1]='';
  memset(entity_5, 'W', 33-1);
  entity_5[33-1]='';
  strcpy(entity_4, entity_5);
}