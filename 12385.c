void fun()
{
  int entity_5 = 80;
  char* entity_2;
  char entity_0[4] = "";
  char entity_3[40] = "";
  char* entity_1;
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[0]='0';
  memset(entity_3, 'f', 40-1);
  entity_3[40-1]='0';
  entity_2 = (char*)malloc(28*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'w', 4-1);
  entity_0[4-1]='0';
  memcpy(entity_1, entity_3, 40*sizeof(char));
}