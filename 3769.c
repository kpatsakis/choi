void fun()
{
  int entity_3 = 43;
  char* entity_9;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char entity_2[21] = "";
  entity_2 = NULL;
  memset(entity_2, 'e', 21-1);
  entity_2[21-1]='';
  memset(entity_0, 'h', entity_3-1);
  entity_0[entity_3-1]='';
  entity_9 = (char*)malloc(9*sizeof(char));
  entity_9[9-1]='';
  memcpy(entity_9, entity_0, entity_3*sizeof(char));
}