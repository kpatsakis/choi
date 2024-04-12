void fun()
{
  int entity_2 = 60;
  int entity_3 = 2;
  char* entity_4;
  char entity_9[46] = "";
  entity_9 = NULL;
  char* entity_0;
  memset(entity_9, 'W', 46-1);
  entity_9[46-1]='';
  entity_0 = (char*)malloc(55*sizeof(char));
  entity_0[55-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  entity_2 = 38;
  memcpy(entity_4, entity_9, 46*sizeof(char));
}