void fun()
{
  int entity_1 = 1;
  char* entity_0;
  char entity_5[90] = "";
  memset(entity_5, 'L', 90-1);
  entity_5[90-1]='0';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[0]='0';
  entity_1 = 55;
  memcpy(entity_0, entity_5, 90*sizeof(char));
}