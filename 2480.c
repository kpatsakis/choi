void fun()
{
  char entity_7 = 'R';
  char* entity_4;
  char entity_3[91] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(58*sizeof(char));
  entity_4[58-1]='';
  memset(entity_3, 'c', 91-1);
  entity_3[91-1]='';
  strcpy(entity_4, entity_3);
}