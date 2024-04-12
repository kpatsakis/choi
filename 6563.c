void fun()
{
  int entity_4 = 52;
  entity_4 = 40;
  char* entity_3;
  char entity_0[99] = "";
  entity_0 = NULL;
  memset(entity_0, 'L', 99-1);
  entity_0[99-1]='';
  entity_3 = (char*)malloc(entity_4*sizeof(char));
  entity_3[entity_4-1]='';
  memcpy(entity_3, entity_0, 99*sizeof(char));
}