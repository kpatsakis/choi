void fun()
{
  char entity_9[55] = "";
  entity_9 = NULL;
  char* entity_5;
  char* entity_2;
  entity_2 = (char*)malloc(7*sizeof(char));
  entity_2[7-1]='';
  memset(entity_9, 'V', 55-1);
  entity_9[55-1]='';
  entity_5 = (char*)malloc(91*sizeof(char));
  entity_5[91-1]='';
  strcpy(entity_2, entity_9);
}