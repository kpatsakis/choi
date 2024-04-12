void fun()
{
  int entity_5 = 2;
  entity_5 = 95;
  char entity_2[19] = "";
  entity_2 = NULL;
  char* entity_9;
  memset(entity_2, 'H', 19-1);
  entity_2[19-1]='';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[entity_5-1]='';
  memcpy(entity_9, entity_2, 19*sizeof(char));
}