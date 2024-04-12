void fun()
{
  char entity_3[76] = "";
  entity_3 = NULL;
  char entity_8 = 'p';
  char* entity_6;
  char entity_1 = 'G';
  memset(entity_3, 't', 76-1);
  entity_3[76-1]='';
  entity_6 = (char*)malloc(9*sizeof(char));
  entity_6[9-1]='';
  strcpy(entity_6, entity_3);
}