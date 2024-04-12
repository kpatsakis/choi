void fun()
{
  char* entity_1;
  char entity_8[89] = "";
  entity_8 = NULL;
  memset(entity_8, 'K', 89-1);
  entity_8[89-1]='';
  entity_1 = (char*)malloc(54*sizeof(char));
  entity_1[54-1]='';
  strcpy(entity_1, entity_8);
}