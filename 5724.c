void fun()
{
  int entity_4 = 7;
  entity_4 = 95;
  char entity_0[12] = "";
  entity_0 = NULL;
  char* entity_8;
  memset(entity_0, 'a', 12-1);
  entity_0[12-1]='';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  memcpy(entity_8, entity_0, 12*sizeof(char));
}