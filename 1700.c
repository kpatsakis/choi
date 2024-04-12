void fun()
{
  char entity_7[90] = "";
  entity_7 = NULL;
  char* entity_3;
  memset(entity_7, 'J', 90-1);
  entity_7[90-1]='';
  entity_3 = (char*)malloc(58*sizeof(char));
  entity_3[58-1]='';
  strcpy(entity_3, entity_7);
}