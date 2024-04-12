void fun()
{
  int entity_6 = 9;
  int entity_7 = 18;
  char entity_2[entity_7] = "";
  char* entity_4;
  char entity_9 = 'l';
  memset(entity_2, 'm', entity_7-1);
  entity_2[entity_7-1]='0';
  entity_4 = (char*)malloc(53*sizeof(char));
  entity_4[0]='0';
  entity_7 = 43;
  memcpy(entity_4, entity_2, entity_7*sizeof(char));
}