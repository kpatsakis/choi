void fun()
{
  int entity_5 = 78;
  int entity_2 = 77;
  int entity_7 = 87;
  entity_5 = 50;
  char entity_1 = 'M';
  char* entity_0;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  memset(entity_4, 'V', entity_5-1);
  entity_4[entity_5-1]='';
  entity_0 = (char*)malloc(48*sizeof(char));
  entity_0[48-1]='';
  memcpy(entity_0, entity_4, entity_5*sizeof(char));
}