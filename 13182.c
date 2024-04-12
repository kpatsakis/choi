void fun()
{
  int entity_3 = 12;
  int entity_2 = 73;
  entity_2 = 99;
  char entity_0[entity_2] = "";
  char* entity_1;
  memset(entity_0, 'G', entity_2-1);
  entity_0[entity_2-1]='0';
  entity_1 = (char*)malloc(9*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_0, entity_2*sizeof(char));
}