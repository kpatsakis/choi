void fun()
{
  char entity_6[81] = "";
  entity_6 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(12*sizeof(char));
  entity_3[12-1]='';
  memset(entity_6, 'f', 81-1);
  entity_6[81-1]='';
  strcpy(entity_3, entity_6);
}