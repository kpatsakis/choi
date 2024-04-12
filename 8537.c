void fun()
{
  char* entity_5;
  char entity_6[10] = "";
  entity_6 = NULL;
  memset(entity_6, 'T', 10-1);
  entity_6[10-1]='';
  entity_5 = (char*)malloc(76*sizeof(char));
  entity_5[76-1]='';
  strcpy(entity_5, entity_6);
}