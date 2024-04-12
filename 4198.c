void fun()
{
  char* entity_7;
  char entity_8[81] = "";
  entity_8 = NULL;
  memset(entity_8, 'G', 81-1);
  entity_8[81-1]='';
  entity_7 = (char*)malloc(9*sizeof(char));
  entity_7[9-1]='';
  strcpy(entity_7, entity_8);
}