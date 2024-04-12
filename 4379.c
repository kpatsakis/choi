void fun()
{
  int entity_3 = 74;
  entity_3 = 7;
  char* entity_6;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  memset(entity_9, 'h', entity_3-1);
  entity_9[entity_3-1]='';
  entity_6 = (char*)malloc(20*sizeof(char));
  entity_6[20-1]='';
  memcpy(entity_6, entity_9, entity_3*sizeof(char));
}