void fun()
{
  int entity_2 = 99;
  char* entity_5;
  char entity_4[34] = "";
  entity_4 = NULL;
  memset(entity_4, 'V', 34-1);
  entity_4[34-1]='';
  entity_5 = (char*)malloc(42*sizeof(char));
  entity_5[42-1]='';
  strcpy(entity_5, entity_4);
}