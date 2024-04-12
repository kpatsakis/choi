void fun()
{
  char entity_2[39] = "";
  entity_2 = NULL;
  char* entity_5;
  memset(entity_2, 'w', 39-1);
  entity_2[39-1]='';
  entity_5 = (char*)malloc(15*sizeof(char));
  entity_5[15-1]='';
  strcpy(entity_5, entity_2);
}