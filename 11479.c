void fun()
{
  int entity_7 = 1;
  char entity_9[37] = "";
  char entity_6[6] = "";
  char* entity_1;
  memset(entity_6, 'B', 6-1);
  entity_6[6-1]='0';
  entity_1 = (char*)malloc(64*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'A', 37-1);
  entity_9[37-1]='0';
  memcpy(entity_1, entity_9, 37*sizeof(char));
}