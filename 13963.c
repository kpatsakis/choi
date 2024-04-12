void fun()
{
  int entity_5 = 60;
  int entity_2 = 59;
  char entity_8[entity_5] = "";
  char* entity_4;
  memset(entity_8, 'G', entity_5-1);
  entity_8[entity_5-1]='0';
  entity_4 = (char*)malloc(67*sizeof(char));
  entity_4[0]='0';
  entity_5 = 49;
  strcpy(entity_4, entity_8);
}