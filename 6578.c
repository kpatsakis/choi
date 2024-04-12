void fun()
{
  int entity_5 = 34;
  char* entity_1;
  char entity_0[14] = "";
  entity_0 = NULL;
  char entity_8[36] = "";
  entity_8 = NULL;
  memset(entity_8, 'z', 36-1);
  entity_8[36-1]='';
  memset(entity_0, 'u', 14-1);
  entity_0[14-1]='';
  entity_1 = (char*)malloc(32*sizeof(char));
  entity_1[32-1]='';
  entity_5 = 60;
  entity_0[entity_5] = 'f';
}