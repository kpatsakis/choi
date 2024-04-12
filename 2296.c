void fun()
{
  int entity_8 = 16;
  char* entity_9;
  char entity_1[99] = "";
  entity_1 = NULL;
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memset(entity_1, 'c', 99-1);
  entity_1[99-1]='';
  entity_8 = 5;
  memcpy(entity_9, entity_1, 99*sizeof(char));
}