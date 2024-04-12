void fun()
{
  int entity_3 = 34;
  char* entity_0;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  memset(entity_2, 'l', entity_3-1);
  entity_2[entity_3-1]='';
  entity_0 = (char*)malloc(7*sizeof(char));
  entity_0[7-1]='';
  memcpy(entity_0, entity_2, entity_3*sizeof(char));
}