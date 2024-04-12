void fun()
{
  int entity_5 = 90;
  int entity_8 = 44;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char entity_6[16] = "";
  entity_6 = NULL;
  char* entity_0;
  char entity_4[42] = "";
  entity_4 = NULL;
  memset(entity_1, 'f', entity_5-1);
  entity_1[entity_5-1]='';
  entity_0 = (char*)malloc(37*sizeof(char));
  entity_0[37-1]='';
  memset(entity_4, 'a', 42-1);
  entity_4[42-1]='';
  memset(entity_6, 'd', 16-1);
  entity_6[16-1]='';
  entity_5 = 92;
  memcpy(entity_0, entity_1, entity_5*sizeof(char));
}