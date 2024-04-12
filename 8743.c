void fun()
{
  char* entity_4;
  char entity_5[34] = "";
  entity_5 = NULL;
  entity_4 = (char*)malloc(11*sizeof(char));
  entity_4[11-1]='';
  memset(entity_5, 't', 34-1);
  entity_5[34-1]='';
  strcpy(entity_4, entity_5);
}