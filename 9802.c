void fun()
{
  int entity_4 = 4;
  char entity_6 = 'P';
  char entity_3[63] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_5 = 'x';
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  memset(entity_1, 'R', entity_4-1);
  entity_1[entity_4-1]='';
  entity_0 = (char*)malloc(64*sizeof(char));
  entity_0[64-1]='';
  memset(entity_3, 's', 63-1);
  entity_3[63-1]='';
  entity_4 = 47;
  memcpy(entity_0, entity_1, entity_4*sizeof(char));
}