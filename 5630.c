void fun()
{
  char entity_5[52] = "";
  entity_5 = NULL;
  char* entity_9;
  memset(entity_5, 'i', 52-1);
  entity_5[52-1]='';
  entity_9 = (char*)malloc(9*sizeof(char));
  entity_9[9-1]='';
  strcpy(entity_9, entity_5);
}