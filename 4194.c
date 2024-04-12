void fun()
{
  char entity_9[15] = "";
  entity_9 = NULL;
  char entity_4 = 'q';
  char* entity_7;
  char* entity_5;
  entity_5 = (char*)malloc(88*sizeof(char));
  entity_5[88-1]='';
  memset(entity_9, 'G', 15-1);
  entity_9[15-1]='';
  entity_7 = (char*)malloc(54*sizeof(char));
  entity_7[54-1]='';
  strcpy(entity_5, entity_9);
}