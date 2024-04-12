void fun()
{
  int entity_5 = 94;
  char entity_9 = 'Z';
  char* entity_1;
  char entity_3 = 'E';
  char entity_6[89] = "";
  entity_6 = NULL;
  char entity_4 = 'I';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_6, 'c', 89-1);
  entity_6[89-1]='';
  strcpy(entity_1, entity_6);
}