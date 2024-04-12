void fun()
{
  int entity_3 = 60;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_8;
  char entity_1[79] = "";
  entity_1 = NULL;
  char entity_6[4] = "";
  entity_6 = NULL;
  memset(entity_1, 'D', 79-1);
  entity_1[79-1]='';
  memset(entity_6, 'x', 4-1);
  entity_6[4-1]='';
  entity_8 = (char*)malloc(14*sizeof(char));
  entity_8[14-1]='';
  memset(entity_0, 'q', entity_3-1);
  entity_0[entity_3-1]='';
  entity_3 = 33;
  memcpy(entity_8, entity_0, entity_3*sizeof(char));
}