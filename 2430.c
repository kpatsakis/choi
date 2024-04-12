void fun()
{
  int entity_3 = 44;
  char* entity_8;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  entity_8 = (char*)malloc(16*sizeof(char));
  entity_8[16-1]='';
  memset(entity_0, 'p', entity_3-1);
  entity_0[entity_3-1]='';
  entity_0[91] = 'K';
}