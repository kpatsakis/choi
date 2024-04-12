void fun()
{
  char entity_4[71] = "";
  entity_4 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(74*sizeof(char));
  entity_5[74-1]='';
  memset(entity_4, 'J', 71-1);
  entity_4[71-1]='';
  strcpy(entity_5, entity_4);
}