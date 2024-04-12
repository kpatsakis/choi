void fun()
{
  int entity_5 = 4;
  char* entity_2;
  char entity_9[79] = "";
  entity_9 = NULL;
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memset(entity_9, 'K', 79-1);
  entity_9[79-1]='';
  memcpy(entity_2, entity_9, 79*sizeof(char));
}