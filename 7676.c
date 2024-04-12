void fun()
{
  int entity_3 = 37;
  char* entity_7;
  char entity_9[1] = "";
  entity_9 = NULL;
  char entity_4 = 'h';
  memset(entity_9, 'n', 1-1);
  entity_9[1-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  entity_3 = 28;
  strcpy(entity_7, entity_9);
}