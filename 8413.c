void fun()
{
  char entity_5[73] = "";
  entity_5 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(81*sizeof(char));
  entity_2[81-1]='';
  memset(entity_5, 'b', 73-1);
  entity_5[73-1]='';
  strcpy(entity_2, entity_5);
}