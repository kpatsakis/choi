void fun()
{
  char entity_5[36] = "";
  entity_5 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(44*sizeof(char));
  entity_4[44-1]='';
  memset(entity_5, 'b', 36-1);
  entity_5[36-1]='';
  strcpy(entity_4, entity_5);
}