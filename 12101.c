void fun()
{
  int entity_7 = 38;
  int entity_2 = 54;
  char entity_6 = 'm';
  char entity_0[entity_2] = "";
  char* entity_5;
  entity_5 = (char*)malloc(87*sizeof(char));
  entity_5[0]='0';
  memset(entity_0, 'e', entity_2-1);
  entity_0[entity_2-1]='0';
  memcpy(entity_5, entity_0, entity_2*sizeof(char));
}