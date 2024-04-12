void fun()
{
  int entity_0 = 19;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char* entity_4;
  char* entity_6;
  entity_6 = (char*)malloc(99*sizeof(char));
  entity_6[99-1]='';
  entity_4 = (char*)malloc(55*sizeof(char));
  entity_4[55-1]='';
  memset(entity_3, 'H', entity_0-1);
  entity_3[entity_0-1]='';
  memcpy(entity_6, entity_3, entity_0*sizeof(char));
}