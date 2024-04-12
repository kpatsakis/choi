void fun()
{
  char entity_9[3] = "";
  entity_9 = NULL;
  char* entity_5;
  char* entity_8;
  memset(entity_9, 'J', 3-1);
  entity_9[3-1]='';
  entity_5 = (char*)malloc(28*sizeof(char));
  entity_5[28-1]='';
  entity_8 = (char*)malloc(5*sizeof(char));
  entity_8[5-1]='';
  strcpy(entity_5, entity_9);
}