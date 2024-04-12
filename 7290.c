void fun()
{
  int entity_7 = 39;
  char* entity_4;
  char entity_3 = 'T';
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  memset(entity_8, 'q', entity_7-1);
  entity_8[entity_7-1]='';
  entity_4 = (char*)malloc(9*sizeof(char));
  entity_4[9-1]='';
  entity_7 = 48;
  memcpy(entity_4, entity_8, entity_7*sizeof(char));
}