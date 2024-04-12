void fun()
{
  int entity_4 = 72;
  char* entity_9;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  entity_9 = (char*)malloc(27*sizeof(char));
  entity_9[27-1]='';
  memset(entity_8, 'i', entity_4-1);
  entity_8[entity_4-1]='';
  memcpy(entity_9, entity_8, entity_4*sizeof(char));
}