void fun()
{
  int entity_1 = 72;
  int entity_6 = 1;
  char* entity_5;
  char entity_3[8] = "";
  entity_3 = NULL;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  memset(entity_0, 'Q', entity_1-1);
  entity_0[entity_1-1]='';
  entity_5 = (char*)malloc(15*sizeof(char));
  entity_5[15-1]='';
  memset(entity_3, 'B', 8-1);
  entity_3[8-1]='';
  entity_1 = 20;
  memcpy(entity_5, entity_0, entity_1*sizeof(char));
}