void fun()
{
  int entity_7 = 58;
  int entity_0 = 64;
  entity_7 = 79;
  char entity_3[22] = "";
  entity_3 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memset(entity_3, 'x', 22-1);
  entity_3[22-1]='';
  strcpy(entity_9, entity_3);
}