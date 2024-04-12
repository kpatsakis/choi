void fun()
{
  int entity_9 = 64;
  int entity_7 = 15;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(57*sizeof(char));
  entity_0[57-1]='';
  memset(entity_3, 'C', entity_7-1);
  entity_3[entity_7-1]='';
  entity_7 = 37;
  memcpy(entity_0, entity_3, entity_7*sizeof(char));
}