void fun()
{
  int entity_0 = 88;
  char* entity_2;
  char entity_1[entity_0] = "";
  memset(entity_1, 'G', entity_0-1);
  entity_1[entity_0-1]='0';
  entity_2 = (char*)malloc(52*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_1, entity_0*sizeof(char));
}