void fun()
{
  char entity_3[89] = "";
  entity_3 = NULL;
  char* entity_0;
  memset(entity_3, 'c', 89-1);
  entity_3[89-1]='';
  entity_0 = (char*)malloc(7*sizeof(char));
  entity_0[7-1]='';
  strcpy(entity_0, entity_3);
}