void fun()
{
  int entity_2 = 42;
  char entity_9[6] = "";
  entity_9 = NULL;
  char* entity_8;
  memset(entity_9, 'v', 6-1);
  entity_9[6-1]='';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[entity_2-1]='';
  memcpy(entity_8, entity_9, 6*sizeof(char));
}