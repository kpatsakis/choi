void fun()
{
  char entity_1[79] = "";
  entity_1 = NULL;
  char* entity_6;
  memset(entity_1, 'x', 79-1);
  entity_1[79-1]='';
  entity_6 = (char*)malloc(58*sizeof(char));
  entity_6[58-1]='';
  strcpy(entity_6, entity_1);
}