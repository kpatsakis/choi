void fun()
{
  int entity_8 = 56;
  int entity_7 = 28;
  char entity_6[83] = "";
  entity_6 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memset(entity_6, 'A', 83-1);
  entity_6[83-1]='';
  strcpy(entity_9, entity_6);
}