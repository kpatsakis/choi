void fun()
{
  int entity_9 = 13;
  entity_9 = 22;
  char* entity_5;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  entity_5 = (char*)malloc(4*sizeof(char));
  entity_5[4-1]='';
  memset(entity_6, 'o', entity_9-1);
  entity_6[entity_9-1]='';
  memcpy(entity_5, entity_6, entity_9*sizeof(char));
}