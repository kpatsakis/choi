void fun()
{
  int entity_1 = 19;
  int entity_4 = 61;
  char* entity_0;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  memset(entity_5, 'v', entity_1-1);
  entity_5[entity_1-1]='';
  entity_0 = (char*)malloc(23*sizeof(char));
  entity_0[23-1]='';
  entity_1 = 22;
  entity_5[37] = 'p';
}