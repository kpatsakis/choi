void fun()
{
  char entity_5[89] = "";
  entity_5 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(19*sizeof(char));
  entity_1[19-1]='';
  memset(entity_5, 'p', 89-1);
  entity_5[89-1]='';
  strcpy(entity_1, entity_5);
}