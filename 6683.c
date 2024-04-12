void fun()
{
  int entity_7 = 34;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char* entity_4;
  memset(entity_0, 'f', entity_7-1);
  entity_0[entity_7-1]='';
  entity_4 = (char*)malloc(78*sizeof(char));
  entity_4[78-1]='';
  memcpy(entity_4, entity_0, entity_7*sizeof(char));
}