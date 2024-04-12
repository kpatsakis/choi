void fun()
{
  int entity_2 = 6;
  char entity_0[9] = "";
  entity_0 = NULL;
  char* entity_5;
  char entity_7[39] = "";
  entity_7 = NULL;
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memset(entity_0, 'G', 9-1);
  entity_0[9-1]='';
  memset(entity_7, 'd', 39-1);
  entity_7[39-1]='';
  entity_2 = 12;
  memcpy(entity_5, entity_7, 39*sizeof(char));
}