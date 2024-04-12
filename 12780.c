void fun()
{
  int entity_5 = 2;
  char entity_6 = 'k';
  char entity_9[63] = "";
  char* entity_3;
  char* entity_0;
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'L', 63-1);
  entity_9[63-1]='0';
  entity_0 = (char*)malloc(53*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_3, entity_9, 63*sizeof(char));
}