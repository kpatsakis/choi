void fun()
{
  int entity_5 = 35;
  char entity_3[9] = "";
  entity_3 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  memset(entity_3, 'q', 9-1);
  entity_3[9-1]='';
  memcpy(entity_0, entity_3, 9*sizeof(char));
}