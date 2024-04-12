void fun()
{
  int entity_6 = 12;
  int entity_1 = 60;
  char entity_0[15] = "";
  entity_0 = NULL;
  char* entity_5;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_4, 'N', entity_6-1);
  entity_4[entity_6-1]='';
  entity_5 = (char*)malloc(42*sizeof(char));
  entity_5[42-1]='';
  memset(entity_0, 'j', 15-1);
  entity_0[15-1]='';
  memcpy(entity_5, entity_4, entity_6*sizeof(char));
}