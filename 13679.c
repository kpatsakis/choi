void fun()
{
  int entity_2 = 81;
  entity_2 = 96;
  char* entity_1;
  char entity_7[entity_2] = "";
  memset(entity_7, 'H', entity_2-1);
  entity_7[entity_2-1]='0';
  entity_1 = (char*)malloc(43*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_7, entity_2*sizeof(char));
}