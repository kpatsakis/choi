void fun()
{
  int entity_7 = 42;
  entity_7 = 24;
  char* entity_8;
  char entity_9[2] = "";
  char* entity_2;
  memset(entity_9, 'c', 2-1);
  entity_9[2-1]='0';
  entity_2 = (char*)malloc(99*sizeof(char));
  entity_2[0]='0';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_8, entity_9, 2*sizeof(char));
}