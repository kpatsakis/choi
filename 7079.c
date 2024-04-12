void fun()
{
  int entity_4 = 11;
  char* entity_3;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(15*sizeof(char));
  entity_3[15-1]='';
  memset(entity_0, 'e', entity_4-1);
  entity_0[entity_4-1]='';
  memcpy(entity_3, entity_0, entity_4*sizeof(char));
}