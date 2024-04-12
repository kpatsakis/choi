void fun()
{
  char* entity_5;
  char entity_2[100] = "";
  entity_2 = NULL;
  memset(entity_2, 'X', 100-1);
  entity_2[100-1]='';
  entity_5 = (char*)malloc(58*sizeof(char));
  entity_5[58-1]='';
  strcpy(entity_5, entity_2);
}