void fun()
{
  int entity_2 = 35;
  char* entity_7;
  char entity_9[81] = "";
  entity_9 = NULL;
  memset(entity_9, 'h', 81-1);
  entity_9[81-1]='';
  entity_7 = (char*)malloc(4*sizeof(char));
  entity_7[4-1]='';
  strcpy(entity_7, entity_9);
}