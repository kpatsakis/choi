void fun()
{
  int entity_9 = 91;
  char entity_6[90] = "";
  entity_6 = NULL;
  char* entity_1;
  char entity_4[49] = "";
  entity_4 = NULL;
  memset(entity_6, 'M', 90-1);
  entity_6[90-1]='';
  entity_1 = (char*)malloc(73*sizeof(char));
  entity_1[73-1]='';
  memset(entity_4, 'z', 49-1);
  entity_4[49-1]='';
  entity_6[entity_9] = 'd';
}