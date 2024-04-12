void fun()
{
  int entity_6 = 88;
  int entity_3 = 2;
  int entity_5 = 56;
  char* entity_2;
  char* entity_7;
  char entity_0[entity_3] = "";
  entity_2 = (char*)malloc(42*sizeof(char));
  entity_2[0]='0';
  entity_7 = (char*)malloc(99*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'e', entity_3-1);
  entity_0[entity_3-1]='0';
  memcpy(entity_7, entity_0, entity_3*sizeof(char));
}