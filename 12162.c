void fun()
{
  int entity_7 = 90;
  int entity_0 = 95;
  char* entity_1;
  char entity_9 = 'E';
  char entity_3[56] = "";
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[0]='0';
  memset(entity_3, 'Q', 56-1);
  entity_3[56-1]='0';
  memcpy(entity_1, entity_3, 56*sizeof(char));
}