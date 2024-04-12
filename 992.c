void fun()
{
  int entity_4 = 72;
  char* entity_6;
  char entity_0[88] = "";
  entity_0 = NULL;
  char entity_8 = 'G';
  char entity_9[48] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_9, 'z', 48-1);
  entity_9[48-1]='';
  memset(entity_0, 'N', 88-1);
  entity_0[88-1]='';
  memcpy(entity_6, entity_9, 48*sizeof(char));
}