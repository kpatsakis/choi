void fun()
{
  int entity_7 = 32;
  char* entity_0;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  char entity_5 = 'h';
  memset(entity_2, 'T', entity_7-1);
  entity_2[entity_7-1]='';
  entity_0 = (char*)malloc(78*sizeof(char));
  entity_0[78-1]='';
  memcpy(entity_0, entity_2, entity_7*sizeof(char));
}