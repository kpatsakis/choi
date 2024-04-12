void fun()
{
  int entity_4 = 39;
  char* entity_2;
  char entity_1[8] = "";
  char* entity_0;
  char entity_8[entity_4] = "";
  entity_0 = (char*)malloc(44*sizeof(char));
  entity_0[0]='0';
  entity_2 = (char*)malloc(3*sizeof(char));
  entity_2[0]='0';
  memset(entity_8, 'R', entity_4-1);
  entity_8[entity_4-1]='0';
  memset(entity_1, 'o', 8-1);
  entity_1[8-1]='0';
  entity_4 = 34;
  memcpy(entity_0, entity_8, entity_4*sizeof(char));
}