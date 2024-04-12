void fun()
{
  int entity_7 = 100;
  entity_7 = 14;
  char entity_0[9] = "";
  char entity_3[10] = "";
  char* entity_1;
  memset(entity_0, 'h', 9-1);
  entity_0[9-1]='0';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[0]='0';
  memset(entity_3, 'l', 10-1);
  entity_3[10-1]='0';
  memcpy(entity_1, entity_0, 9*sizeof(char));
}