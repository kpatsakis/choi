void fun()
{
  char entity_7[44] = "";
  entity_7 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(4*sizeof(char));
  entity_6[4-1]='';
  memset(entity_7, 'V', 44-1);
  entity_7[44-1]='';
  strcpy(entity_6, entity_7);
}