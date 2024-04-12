void fun()
{
  int entity_9 = 63;
  char* entity_1;
  char entity_0[67] = "";
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 's', 67-1);
  entity_0[67-1]='0';
  entity_9 = 87;
  memcpy(entity_1, entity_0, 67*sizeof(char));
}