void fun()
{
  char* entity_1;
  char entity_5[36] = "";
  entity_5 = NULL;
  entity_1 = (char*)malloc(12*sizeof(char));
  entity_1[12-1]='';
  memset(entity_5, 'Q', 36-1);
  entity_5[36-1]='';
  strcpy(entity_1, entity_5);
}