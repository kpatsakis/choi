void fun()
{
  int entity_5 = 79;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_9;
  memset(entity_1, 'G', entity_5-1);
  entity_1[entity_5-1]='';
  entity_9 = (char*)malloc(22*sizeof(char));
  entity_9[22-1]='';
  entity_1[22] = 'u';
}