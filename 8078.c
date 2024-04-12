void fun()
{
  char entity_1[42] = "";
  entity_1 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(19*sizeof(char));
  entity_6[19-1]='';
  memset(entity_1, 'H', 42-1);
  entity_1[42-1]='';
  strcpy(entity_6, entity_1);
}