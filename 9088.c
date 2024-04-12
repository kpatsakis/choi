void fun()
{
  int entity_0 = 100;
  entity_0 = 4;
  char entity_9[53] = "";
  entity_9 = NULL;
  char* entity_4;
  memset(entity_9, 'B', 53-1);
  entity_9[53-1]='';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[entity_0-1]='';
  memcpy(entity_4, entity_9, 53*sizeof(char));
}