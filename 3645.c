void fun()
{
  int entity_4 = 58;
  char entity_1[61] = "";
  entity_1 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_4*sizeof(char));
  entity_0[entity_4-1]='';
  memset(entity_1, 'w', 61-1);
  entity_1[61-1]='';
  entity_4 = 82;
  memcpy(entity_0, entity_1, 61*sizeof(char));
}