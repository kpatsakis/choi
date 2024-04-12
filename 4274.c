void fun()
{
  char entity_3[76] = "";
  entity_3 = NULL;
  char* entity_4;
  memset(entity_3, 'e', 76-1);
  entity_3[76-1]='';
  entity_4 = (char*)malloc(47*sizeof(char));
  entity_4[47-1]='';
  strcpy(entity_4, entity_3);
}