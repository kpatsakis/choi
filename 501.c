void fun()
{
  int entity_5 = 75;
  char entity_8[7] = "";
  entity_8 = NULL;
  char* entity_9;
  memset(entity_8, 'f', 7-1);
  entity_8[7-1]='';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[entity_5-1]='';
  memcpy(entity_9, entity_8, 7*sizeof(char));
}