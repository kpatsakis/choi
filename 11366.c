void fun()
{
  int entity_9 = 81;
  char entity_3[79] = "";
  char entity_2[56] = "";
  char* entity_8;
  memset(entity_3, 'f', 79-1);
  entity_3[79-1]='0';
  entity_8 = (char*)malloc(26*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'S', 56-1);
  entity_2[56-1]='0';
  memcpy(entity_8, entity_2, 56*sizeof(char));
}