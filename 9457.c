void fun()
{
  int entity_9 = 7;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char* entity_7;
  memset(entity_6, 'A', entity_9-1);
  entity_6[entity_9-1]='';
  entity_7 = (char*)malloc(86*sizeof(char));
  entity_7[86-1]='';
  entity_9 = 50;
  memcpy(entity_7, entity_6, entity_9*sizeof(char));
}