void fun()
{
  int entity_1 = 17;
  int entity_7 = 59;
  char entity_2[65] = "";
  entity_2 = NULL;
  char* entity_6;
  char entity_0[78] = "";
  entity_0 = NULL;
  memset(entity_2, 'd', 65-1);
  entity_2[65-1]='';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[entity_7-1]='';
  memset(entity_0, 'p', 78-1);
  entity_0[78-1]='';
  entity_7 = 39;
  strcpy(entity_6, entity_0);
}