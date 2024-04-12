void fun()
{
  int entity_9 = 52;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  char* entity_8;
  memset(entity_4, 'z', entity_9-1);
  entity_4[entity_9-1]='';
  entity_8 = (char*)malloc(84*sizeof(char));
  entity_8[84-1]='';
  memcpy(entity_8, entity_4, entity_9*sizeof(char));
}