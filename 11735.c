void fun()
{
  int entity_7 = 42;
  char entity_9[41] = "";
  char* entity_5;
  char entity_2[22] = "";
  memset(entity_9, 'S', 41-1);
  entity_9[41-1]='0';
  memset(entity_2, 'G', 22-1);
  entity_2[22-1]='0';
  entity_5 = (char*)malloc(98*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_9, 41*sizeof(char));
}