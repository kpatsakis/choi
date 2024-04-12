void fun()
{
  int entity_2 = 3;
  char entity_4 = 'C';
  char* entity_0;
  char entity_5[entity_2] = "";
  char* entity_6;
  char entity_3[3] = "";
  entity_6 = (char*)malloc(40*sizeof(char));
  entity_6[0]='0';
  entity_0 = (char*)malloc(69*sizeof(char));
  entity_0[0]='0';
  memset(entity_5, 'Q', entity_2-1);
  entity_5[entity_2-1]='0';
  memset(entity_3, 'v', 3-1);
  entity_3[3-1]='0';
  memcpy(entity_6, entity_5, entity_2*sizeof(char));
}