void fun()
{
  char entity_1[30] = "";
  entity_1 = NULL;
  char* entity_5;
  char entity_7 = 'r';
  entity_5 = (char*)malloc(49*sizeof(char));
  entity_5[49-1]='';
  memset(entity_1, 'o', 30-1);
  entity_1[30-1]='';
  strcpy(entity_5, entity_1);
}