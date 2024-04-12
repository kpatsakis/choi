void fun()
{
  int entity_0 = 71;
  int entity_1 = 90;
  int entity_2 = 24;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(20*sizeof(char));
  entity_5[20-1]='';
  memset(entity_6, 'R', entity_0-1);
  entity_6[entity_0-1]='';
  memcpy(entity_5, entity_6, entity_0*sizeof(char));
}