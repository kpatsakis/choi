void fun()
{
  int entity_7 = 75;
  entity_7 = 37;
  char* entity_9;
  char entity_8[50] = "";
  entity_8 = NULL;
  memset(entity_8, 'x', 50-1);
  entity_8[50-1]='';
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memcpy(entity_9, entity_8, 50*sizeof(char));
}