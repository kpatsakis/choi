void fun()
{
  int entity_1 = 98;
  char entity_4[64] = "";
  entity_4 = NULL;
  char* entity_0;
  char entity_8[entity_1] = "";
  entity_8 = NULL;
  entity_0 = (char*)malloc(37*sizeof(char));
  entity_0[37-1]='';
  memset(entity_4, 'B', 64-1);
  entity_4[64-1]='';
  memset(entity_8, 'E', entity_1-1);
  entity_8[entity_1-1]='';
  entity_1 = 4;
  entity_8[56] = 'h';
}