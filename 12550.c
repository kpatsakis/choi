void fun()
{
  int entity_6 = 12;
  char* entity_0;
  char* entity_9;
  char* entity_2;
  char entity_1[entity_6] = "";
  entity_2 = (char*)malloc(9*sizeof(char));
  entity_2[0]='0';
  entity_9 = (char*)malloc(81*sizeof(char));
  entity_9[0]='0';
  entity_0 = (char*)malloc(37*sizeof(char));
  entity_0[0]='0';
  memset(entity_1, 'B', entity_6-1);
  entity_1[entity_6-1]='0';
  memcpy(entity_0, entity_1, entity_6*sizeof(char));
}