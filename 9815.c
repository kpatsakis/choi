void fun()
{
  int entity_7 = 23;
  char* entity_9;
  char entity_6[96] = "";
  entity_6 = NULL;
  memset(entity_6, 'c', 96-1);
  entity_6[96-1]='';
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  strcpy(entity_9, entity_6);
}