void fun()
{
  int entity_4 = 43;
  entity_4 = 33;
  char* entity_0;
  char entity_9[53] = "";
  entity_9 = NULL;
  char entity_2[58] = "";
  entity_2 = NULL;
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  memset(entity_2, 'N', 58-1);
  entity_2[58-1]='';
  memset(entity_9, 'X', 53-1);
  entity_9[53-1]='';
  memcpy(entity_0, entity_9, 53*sizeof(char));
}