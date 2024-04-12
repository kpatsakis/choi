void fun()
{
  int entity_2 = 88;
  int entity_6 = 50;
  char* entity_5;
  char entity_9[entity_2] = "";
  char entity_4[63] = "";
  memset(entity_9, 'S', entity_2-1);
  entity_9[entity_2-1]='0';
  memset(entity_4, 'i', 63-1);
  entity_4[63-1]='0';
  entity_5 = (char*)malloc(1*sizeof(char));
  entity_5[0]='0';
  entity_2 = 64;
  memcpy(entity_5, entity_9, entity_2*sizeof(char));
}