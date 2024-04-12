void fun()
{
  int entity_5 = 14;
  char* entity_4;
  char entity_3 = 'q';
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  memset(entity_0, 'v', entity_5-1);
  entity_0[entity_5-1]='';
  entity_4 = (char*)malloc(98*sizeof(char));
  entity_4[98-1]='';
  entity_5 = 85;
  memcpy(entity_4, entity_0, entity_5*sizeof(char));
}