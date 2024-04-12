void fun()
{
  int entity_2 = 72;
  int entity_6 = 58;
  char* entity_3;
  char* entity_8;
  char entity_1[entity_2] = "";
  char entity_0[57] = "";
  memset(entity_0, 'T', 57-1);
  entity_0[57-1]='0';
  memset(entity_1, 'B', entity_2-1);
  entity_1[entity_2-1]='0';
  entity_8 = (char*)malloc(8*sizeof(char));
  entity_8[0]='0';
  entity_3 = (char*)malloc(51*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_8, entity_1, entity_2*sizeof(char));
}