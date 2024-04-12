void fun()
{
  int entity_7 = 28;
  char entity_9[49] = "";
  entity_9 = NULL;
  char* entity_1;
  memset(entity_9, 'Y', 49-1);
  entity_9[49-1]='';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  entity_7 = 74;
  memcpy(entity_1, entity_9, 49*sizeof(char));
}