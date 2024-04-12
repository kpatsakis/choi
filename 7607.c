void fun()
{
  int entity_3 = 75;
  char* entity_7;
  char entity_9[13] = "";
  entity_9 = NULL;
  memset(entity_9, 'd', 13-1);
  entity_9[13-1]='';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  strcpy(entity_7, entity_9);
}