void fun()
{
  char entity_7[91] = "";
  entity_7 = NULL;
  char* entity_6;
  memset(entity_7, 'X', 91-1);
  entity_7[91-1]='';
  entity_6 = (char*)malloc(9*sizeof(char));
  entity_6[9-1]='';
  strcpy(entity_6, entity_7);
}