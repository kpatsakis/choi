void fun()
{
  int entity_2 = 17;
  entity_2 = 45;
  char entity_9[55] = "";
  entity_9 = NULL;
  char entity_8[9] = "";
  entity_8 = NULL;
  char* entity_0;
  memset(entity_8, 'G', 9-1);
  entity_8[9-1]='';
  entity_0 = (char*)malloc(88*sizeof(char));
  entity_0[88-1]='';
  memset(entity_9, 'l', 55-1);
  entity_9[55-1]='';
  entity_8[entity_2] = 'k';
}