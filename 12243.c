void fun()
{
  int entity_6 = 76;
  int entity_2 = 14;
  char entity_5[80] = "";
  char entity_0[50] = "";
  char* entity_9;
  entity_9 = (char*)malloc(entity_2*sizeof(char));
  entity_9[0]='0';
  memset(entity_0, 'Q', 50-1);
  entity_0[50-1]='0';
  memset(entity_5, 'Q', 80-1);
  entity_5[80-1]='0';
  memcpy(entity_9, entity_0, 50*sizeof(char));
}