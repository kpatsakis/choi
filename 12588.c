void fun()
{
  int entity_6 = 22;
  char* entity_9;
  char entity_2[88] = "";
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[0]='0';
  memset(entity_2, 'h', 88-1);
  entity_2[88-1]='0';
  memcpy(entity_9, entity_2, 88*sizeof(char));
}