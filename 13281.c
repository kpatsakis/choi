void fun()
{
  int entity_4 = 74;
  char* entity_0;
  char entity_5[entity_4] = "";
  memset(entity_5, 'k', entity_4-1);
  entity_5[entity_4-1]='0';
  entity_0 = (char*)malloc(94*sizeof(char));
  entity_0[0]='0';
  entity_4 = 15;
  memcpy(entity_0, entity_5, entity_4*sizeof(char));
}