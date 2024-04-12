void fun()
{
  int entity_7 = 88;
  entity_7 = 20;
  char* entity_9;
  char* entity_3;
  char* entity_4;
  char entity_0[entity_7] = "";
  char entity_1[26] = "";
  memset(entity_0, 'K', entity_7-1);
  entity_0[entity_7-1]='0';
  entity_9 = (char*)malloc(14*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'l', 26-1);
  entity_1[26-1]='0';
  entity_3 = (char*)malloc(6*sizeof(char));
  entity_3[0]='0';
  entity_4 = (char*)malloc(33*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_0, entity_7*sizeof(char));
}