void fun()
{
  int entity_0 = 43;
  entity_0 = 92;
  char* entity_6;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(78*sizeof(char));
  entity_6[78-1]='';
  memset(entity_5, 'Q', entity_0-1);
  entity_5[entity_0-1]='';
  memcpy(entity_6, entity_5, entity_0*sizeof(char));
}