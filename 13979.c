void fun()
{
  int entity_7 = 91;
  entity_7 = 38;
  char* entity_2;
  char* entity_0;
  char entity_6[34] = "";
  char* entity_4;
  char entity_5[entity_7] = "";
  memset(entity_5, 'f', entity_7-1);
  entity_5[entity_7-1]='0';
  entity_4 = (char*)malloc(26*sizeof(char));
  entity_4[0]='0';
  entity_0 = (char*)malloc(36*sizeof(char));
  entity_0[0]='0';
  memset(entity_6, 'j', 34-1);
  entity_6[34-1]='0';
  entity_2 = (char*)malloc(51*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_5, entity_7*sizeof(char));
}