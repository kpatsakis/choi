void fun()
{
  int entity_0 = 41;
  int entity_1 = 39;
  entity_0 = 12;
  char* entity_3;
  char* entity_6;
  char entity_2[56] = "";
  memset(entity_2, 'L', 56-1);
  entity_2[56-1]='0';
  entity_6 = (char*)malloc(77*sizeof(char));
  entity_6[0]='0';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_2, 56*sizeof(char));
}