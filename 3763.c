void fun()
{
  int entity_4 = 15;
  char entity_1 = 'K';
  char entity_2 = 'H';
  char entity_0[91] = "";
  entity_0 = NULL;
  char* entity_6;
  memset(entity_0, 'P', 91-1);
  entity_0[91-1]='';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  entity_4 = 64;
  memcpy(entity_6, entity_0, 91*sizeof(char));
}