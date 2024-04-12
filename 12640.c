void fun()
{
  int entity_2 = 30;
  char* entity_6;
  char entity_5[entity_2] = "";
  memset(entity_5, 'i', entity_2-1);
  entity_5[entity_2-1]='0';
  entity_6 = (char*)malloc(77*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_5, entity_2*sizeof(char));
}