void fun()
{
  int entity_0 = 10;
  int entity_2 = 20;
  char* entity_4;
  char entity_1[entity_2] = "";
  memset(entity_1, 'q', entity_2-1);
  entity_1[entity_2-1]='0';
  entity_4 = (char*)malloc(57*sizeof(char));
  entity_4[0]='0';
  entity_2 = 21;
  strcpy(entity_4, entity_1);
}