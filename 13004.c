void fun()
{
  int entity_9 = 60;
  int entity_6 = 24;
  entity_9 = 63;
  char* entity_2;
  char entity_0[81] = "";
  memset(entity_0, 't', 81-1);
  entity_0[81-1]='0';
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_0, 81*sizeof(char));
}