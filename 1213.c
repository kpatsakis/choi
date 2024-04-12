void fun()
{
  int entity_7 = 18;
  char entity_2[entity_7] = "";
  entity_2 = NULL;
  char* entity_0;
  memset(entity_2, 'X', entity_7-1);
  entity_2[entity_7-1]='';
  entity_0 = (char*)malloc(61*sizeof(char));
  entity_0[61-1]='';
  memcpy(entity_0, entity_2, entity_7*sizeof(char));
}