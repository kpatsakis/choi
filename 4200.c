void fun()
{
  int entity_2 = 75;
  char entity_8 = 'K';
  char* entity_1;
  char entity_0[39] = "";
  entity_0 = NULL;
  memset(entity_0, 'P', 39-1);
  entity_0[39-1]='';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  memcpy(entity_1, entity_0, 39*sizeof(char));
}