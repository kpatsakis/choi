void fun()
{
  int entity_5 = 31;
  char entity_1[entity_5] = "";
  char* entity_3;
  char* entity_4;
  char* entity_0;
  entity_3 = (char*)malloc(54*sizeof(char));
  entity_3[0]='0';
  memset(entity_1, 'D', entity_5-1);
  entity_1[entity_5-1]='0';
  entity_0 = (char*)malloc(52*sizeof(char));
  entity_0[0]='0';
  entity_4 = (char*)malloc(84*sizeof(char));
  entity_4[0]='0';
  entity_5 = 100;
  memcpy(entity_3, entity_1, entity_5*sizeof(char));
}