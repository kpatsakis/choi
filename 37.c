void fun()
{
  int entity_0 = 40;
  entity_0 = 62;
  char* entity_6;
  char entity_4[55] = "";
  entity_4 = NULL;
  char entity_9[90] = "";
  entity_9 = NULL;
  memset(entity_9, 'z', 90-1);
  entity_9[90-1]='';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  memset(entity_4, 'R', 55-1);
  entity_4[55-1]='';
  memcpy(entity_6, entity_4, 55*sizeof(char));
}