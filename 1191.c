void fun()
{
  int entity_7 = 91;
  int entity_4 = 32;
  char* entity_9;
  char entity_3[5] = "";
  entity_3 = NULL;
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memset(entity_3, 'K', 5-1);
  entity_3[5-1]='';
  strcpy(entity_9, entity_3);
}