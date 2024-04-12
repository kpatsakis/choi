void fun()
{
  char* entity_7;
  char entity_4[20] = "";
  entity_4 = NULL;
  memset(entity_4, 'J', 20-1);
  entity_4[20-1]='';
  entity_7 = (char*)malloc(33*sizeof(char));
  entity_7[33-1]='';
  strcpy(entity_7, entity_4);
}