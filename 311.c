void fun()
{
  char* entity_7;
  char entity_1[33] = "";
  entity_1 = NULL;
  memset(entity_1, 'x', 33-1);
  entity_1[33-1]='';
  entity_7 = (char*)malloc(41*sizeof(char));
  entity_7[41-1]='';
  strcpy(entity_7, entity_1);
}