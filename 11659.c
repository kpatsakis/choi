void fun()
{
  int entity_2 = 63;
  char* entity_9;
  char entity_0 = 'X';
  char entity_1[10] = "";
  entity_9 = (char*)malloc(51*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'h', 10-1);
  entity_1[10-1]='0';
  memcpy(entity_9, entity_1, 10*sizeof(char));
}