void fun()
{
  int entity_7 = 20;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char* entity_4;
  memset(entity_0, 'r', entity_7-1);
  entity_0[entity_7-1]='';
  entity_4 = (char*)malloc(99*sizeof(char));
  entity_4[99-1]='';
  memcpy(entity_4, entity_0, entity_7*sizeof(char));
}