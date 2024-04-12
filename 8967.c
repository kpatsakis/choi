void fun()
{
  char* entity_5;
  char entity_7[89] = "";
  entity_7 = NULL;
  entity_5 = (char*)malloc(75*sizeof(char));
  entity_5[75-1]='';
  memset(entity_7, 'F', 89-1);
  entity_7[89-1]='';
  strcpy(entity_5, entity_7);
}