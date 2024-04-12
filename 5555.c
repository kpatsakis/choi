void fun()
{
  int entity_5 = 5;
  entity_5 = 29;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_1[16] = "";
  entity_1 = NULL;
  memset(entity_1, 'A', 16-1);
  entity_1[16-1]='';
  memset(entity_3, 'x', entity_5-1);
  entity_3[entity_5-1]='';
  entity_0 = (char*)malloc(27*sizeof(char));
  entity_0[27-1]='';
  memcpy(entity_0, entity_3, entity_5*sizeof(char));
}