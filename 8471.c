void fun()
{
  int entity_5 = 25;
  char* entity_0;
  char entity_4 = 'V';
  char entity_7 = 'v';
  char entity_1[35] = "";
  entity_1 = NULL;
  memset(entity_1, 'x', 35-1);
  entity_1[35-1]='';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  entity_5 = 98;
  memcpy(entity_0, entity_1, 35*sizeof(char));
}