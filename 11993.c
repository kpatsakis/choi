void fun()
{
  int entity_2 = 60;
  char entity_1[15] = "";
  char* entity_9;
  memset(entity_1, 'w', 15-1);
  entity_1[15-1]='0';
  entity_9 = (char*)malloc(5*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_1, 15*sizeof(char));
}