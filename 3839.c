void fun()
{
  int entity_1 = 24;
  int entity_6 = 57;
  int entity_4 = 32;
  char* entity_2;
  char entity_9[37] = "";
  entity_9 = NULL;
  char entity_0[entity_4] = "";
  entity_0 = NULL;
  memset(entity_0, 'Z', entity_4-1);
  entity_0[entity_4-1]='';
  memset(entity_9, 'B', 37-1);
  entity_9[37-1]='';
  entity_2 = (char*)malloc(40*sizeof(char));
  entity_2[40-1]='';
  memcpy(entity_2, entity_0, entity_4*sizeof(char));
}