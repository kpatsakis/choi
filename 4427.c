void fun()
{
  char entity_1[72] = "";
  entity_1 = NULL;
  char* entity_5;
  char entity_3 = 'N';
  memset(entity_1, 'B', 72-1);
  entity_1[72-1]='';
  entity_5 = (char*)malloc(54*sizeof(char));
  entity_5[54-1]='';
  strcpy(entity_5, entity_1);
}