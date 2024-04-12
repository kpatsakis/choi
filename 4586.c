void fun()
{
  int entity_4 = 69;
  entity_4 = 66;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  char entity_7 = 'd';
  char entity_8 = 'J';
  char* entity_0;
  memset(entity_5, 'V', entity_4-1);
  entity_5[entity_4-1]='';
  entity_0 = (char*)malloc(22*sizeof(char));
  entity_0[22-1]='';
  memcpy(entity_0, entity_5, entity_4*sizeof(char));
}