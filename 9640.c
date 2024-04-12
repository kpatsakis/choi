void fun()
{
  int entity_2 = 3;
  int entity_6 = 23;
  entity_2 = 93;
  char entity_4[4] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_4, 'T', 4-1);
  entity_4[4-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memcpy(entity_0, entity_4, 4*sizeof(char));
}