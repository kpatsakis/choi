void fun()
{
  int entity_5 = 16;
  int entity_2 = 85;
  char entity_8 = 'G';
  char* entity_6;
  char entity_4[entity_2] = "";
  memset(entity_4, 'm', entity_2-1);
  entity_4[entity_2-1]='0';
  entity_6 = (char*)malloc(62*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_4);
}