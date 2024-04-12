void fun()
{
  int entity_4 = 66;
  char entity_1[49] = "";
  char* entity_9;
  memset(entity_1, 'B', 49-1);
  entity_1[49-1]='0';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_1, 49*sizeof(char));
}