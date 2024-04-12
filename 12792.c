void fun()
{
  int entity_5 = 51;
  int entity_6 = 75;
  char entity_2[entity_5] = "";
  char* entity_0;
  char entity_1[66] = "";
  memset(entity_1, 't', 66-1);
  entity_1[66-1]='0';
  memset(entity_2, 'A', entity_5-1);
  entity_2[entity_5-1]='0';
  entity_0 = (char*)malloc(52*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_0, entity_2, entity_5*sizeof(char));
}