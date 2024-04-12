void fun()
{
  int entity_7 = 72;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(17*sizeof(char));
  entity_9[17-1]='';
  memset(entity_8, 'B', entity_7-1);
  entity_8[entity_7-1]='';
  memcpy(entity_9, entity_8, entity_7*sizeof(char));
}