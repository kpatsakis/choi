void fun()
{
  int entity_9 = 8;
  entity_9 = 25;
  char* entity_2;
  char entity_0[99] = "";
  entity_0 = NULL;
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  memset(entity_0, 'X', 99-1);
  entity_0[99-1]='';
  memcpy(entity_2, entity_0, 99*sizeof(char));
}