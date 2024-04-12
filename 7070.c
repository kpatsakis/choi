void fun()
{
  char entity_2[31] = "";
  entity_2 = NULL;
  char entity_1[30] = "";
  entity_1 = NULL;
  char entity_3 = 'x';
  char* entity_9;
  entity_9 = (char*)malloc(55*sizeof(char));
  entity_9[55-1]='';
  memset(entity_2, 'Q', 31-1);
  entity_2[31-1]='';
  memset(entity_1, 'b', 30-1);
  entity_1[30-1]='';
  strcpy(entity_9, entity_1);
}