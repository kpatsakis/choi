void fun()
{
  char* entity_5;
  char entity_4[59] = "";
  entity_4 = NULL;
  memset(entity_4, 'G', 59-1);
  entity_4[59-1]='';
  entity_5 = (char*)malloc(18*sizeof(char));
  entity_5[18-1]='';
  strcpy(entity_5, entity_4);
}