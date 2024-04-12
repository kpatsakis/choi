void fun()
{
  int entity_2 = 40;
  int entity_6 = 33;
  char entity_8[79] = "";
  entity_8 = NULL;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  char entity_7[15] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 'Z', 15-1);
  entity_7[15-1]='';
  memset(entity_8, 'r', 79-1);
  entity_8[79-1]='';
  entity_9 = (char*)malloc(49*sizeof(char));
  entity_9[49-1]='';
  memset(entity_0, 'B', entity_2-1);
  entity_0[entity_2-1]='';
  strcpy(entity_9, entity_0);
}