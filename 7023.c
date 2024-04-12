void fun()
{
  char entity_7[30] = "";
  entity_7 = NULL;
  char entity_6 = 'a';
  char* entity_5;
  char entity_9[39] = "";
  entity_9 = NULL;
  memset(entity_9, 'A', 39-1);
  entity_9[39-1]='';
  memset(entity_7, 'p', 30-1);
  entity_7[30-1]='';
  entity_5 = (char*)malloc(71*sizeof(char));
  entity_5[71-1]='';
  memcpy(entity_5, entity_9, 39*sizeof(char));
}