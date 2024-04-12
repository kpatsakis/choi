void fun()
{
  int entity_1 = 5;
  int entity_9 = 7;
  entity_9 = 63;
  char* entity_2;
  char entity_0[2] = "";
  char* entity_7;
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'l', 2-1);
  entity_0[2-1]='0';
  entity_7 = (char*)malloc(56*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_2, entity_0, 2*sizeof(char));
}