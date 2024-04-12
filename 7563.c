void fun()
{
  int entity_6 = 39;
  int entity_1 = 85;
  int entity_2 = 55;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_8;
  memset(entity_4, 'W', entity_6-1);
  entity_4[entity_6-1]='';
  entity_8 = (char*)malloc(28*sizeof(char));
  entity_8[28-1]='';
  entity_4[39] = 's';
}