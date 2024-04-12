void fun()
{
  int entity_1 = 13;
  int entity_9 = 18;
  char entity_3 = 'C';
  char* entity_2;
  char entity_0[entity_9] = "";
  entity_2 = (char*)malloc(79*sizeof(char));
  entity_2[0]='0';
  memset(entity_0, 'Q', entity_9-1);
  entity_0[entity_9-1]='0';
  memcpy(entity_2, entity_0, entity_9*sizeof(char));
}