void fun()
{
  int entity_2 = 13;
  int entity_5 = 31;
  char* entity_0;
  char entity_3 = 'W';
  char entity_4[entity_2] = "";
  memset(entity_4, 'o', entity_2-1);
  entity_4[entity_2-1]='0';
  entity_0 = (char*)malloc(53*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_4, entity_2*sizeof(char));
}