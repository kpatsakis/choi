void fun()
{
  char* entity_5;
  char entity_9[38] = "";
  entity_9 = NULL;
  memset(entity_9, 'k', 38-1);
  entity_9[38-1]='';
  entity_5 = (char*)malloc(25*sizeof(char));
  entity_5[25-1]='';
  strcpy(entity_5, entity_9);
}