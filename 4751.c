void fun()
{
  int entity_4 = 64;
  char* entity_8;
  char* entity_2;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  memset(entity_0, 'E', entity_4-1);
  entity_0[entity_4-1]='';
  entity_2 = (char*)malloc(96*sizeof(char));
  entity_2[96-1]='';
  entity_8 = (char*)malloc(81*sizeof(char));
  entity_8[81-1]='';
  entity_4 = 93;
  memcpy(entity_2, entity_0, entity_4*sizeof(char));
}