void fun()
{
  char entity_1[42] = "";
  entity_1 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(31*sizeof(char));
  entity_3[31-1]='';
  memset(entity_1, 'Y', 42-1);
  entity_1[42-1]='';
  strcpy(entity_3, entity_1);
}