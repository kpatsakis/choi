void fun()
{
  int entity_3 = 58;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char entity_4 = 's';
  char* entity_6;
  entity_6 = (char*)malloc(24*sizeof(char));
  entity_6[24-1]='';
  memset(entity_9, 'd', entity_3-1);
  entity_9[entity_3-1]='';
  entity_3 = 80;
  strcpy(entity_6, entity_9);
}