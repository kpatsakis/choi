void fun()
{
  int entity_8 = 62;
  char* entity_5;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  entity_5 = (char*)malloc(57*sizeof(char));
  entity_5[57-1]='';
  memset(entity_0, 'c', entity_8-1);
  entity_0[entity_8-1]='';
  entity_8 = 45;
  memcpy(entity_5, entity_0, entity_8*sizeof(char));
}