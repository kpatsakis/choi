void fun()
{
  int entity_7 = 58;
  char entity_3[9] = "";
  entity_3 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memset(entity_3, 'L', 9-1);
  entity_3[9-1]='';
  memcpy(entity_0, entity_3, 9*sizeof(char));
}