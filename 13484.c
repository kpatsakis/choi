void fun()
{
  int entity_0 = 75;
  char entity_7[69] = "";
  char* entity_2;
  char entity_6[56] = "";
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[0]='0';
  memset(entity_7, 'o', 69-1);
  entity_7[69-1]='0';
  memset(entity_6, 'b', 56-1);
  entity_6[56-1]='0';
  entity_0 = 75;
  memcpy(entity_2, entity_6, 56*sizeof(char));
}