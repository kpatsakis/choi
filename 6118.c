void fun()
{
  char* entity_5;
  char entity_3[55] = "";
  entity_3 = NULL;
  memset(entity_3, 'l', 55-1);
  entity_3[55-1]='';
  entity_5 = (char*)malloc(23*sizeof(char));
  entity_5[23-1]='';
  strcpy(entity_5, entity_3);
}