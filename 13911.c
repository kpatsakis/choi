void fun()
{
  int entity_0 = 85;
  entity_0 = 75;
  char entity_5[2] = "";
  char* entity_1;
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'v', 2-1);
  entity_5[2-1]='0';
  memcpy(entity_1, entity_5, 2*sizeof(char));
}