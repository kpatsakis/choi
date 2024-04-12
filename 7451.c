void fun()
{
  int entity_4 = 81;
  char entity_1[entity_4] = "";
  entity_1 = NULL;
  char* entity_6;
  char entity_7[49] = "";
  entity_7 = NULL;
  entity_6 = (char*)malloc(59*sizeof(char));
  entity_6[59-1]='';
  memset(entity_7, 'x', 49-1);
  entity_7[49-1]='';
  memset(entity_1, 'z', entity_4-1);
  entity_1[entity_4-1]='';
  entity_1[71] = 'E';
}