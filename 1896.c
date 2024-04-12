void fun()
{
  char* entity_6;
  char entity_8[39] = "";
  entity_8 = NULL;
  memset(entity_8, 'V', 39-1);
  entity_8[39-1]='';
  entity_6 = (char*)malloc(22*sizeof(char));
  entity_6[22-1]='';
  strcpy(entity_6, entity_8);
}