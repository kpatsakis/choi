void fun()
{
  char* entity_5;
  char entity_4 = 'v';
  char entity_3 = 'G';
  char entity_9[49] = "";
  entity_9 = NULL;
  entity_5 = (char*)malloc(86*sizeof(char));
  entity_5[86-1]='';
  memset(entity_9, 'c', 49-1);
  entity_9[49-1]='';
  strcpy(entity_5, entity_9);
}