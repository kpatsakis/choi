void fun()
{
  int entity_2 = 11;
  char entity_6[entity_2] = "";
  char entity_5 = 'Z';
  char* entity_4;
  entity_4 = (char*)malloc(62*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'X', entity_2-1);
  entity_6[entity_2-1]='0';
  memcpy(entity_4, entity_6, entity_2*sizeof(char));
}