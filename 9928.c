void fun()
{
  char* entity_0;
  char entity_1[89] = "";
  entity_1 = NULL;
  entity_0 = (char*)malloc(42*sizeof(char));
  entity_0[42-1]='';
  memset(entity_1, 'M', 89-1);
  entity_1[89-1]='';
  strcpy(entity_0, entity_1);
}