void fun()
{
  int entity_7 = 46;
  char entity_9[57] = "";
  entity_9 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_7*sizeof(char));
  entity_5[entity_7-1]='';
  memset(entity_9, 'M', 57-1);
  entity_9[57-1]='';
  strcpy(entity_5, entity_9);
}