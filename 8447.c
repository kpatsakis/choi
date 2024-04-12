void fun()
{
  int entity_3 = 52;
  int entity_0 = 39;
  int entity_8 = 86;
  char entity_2[entity_3] = "";
  entity_2 = NULL;
  char* entity_6;
  char entity_5 = 'h';
  entity_6 = (char*)malloc(11*sizeof(char));
  entity_6[11-1]='';
  memset(entity_2, 's', entity_3-1);
  entity_2[entity_3-1]='';
  memcpy(entity_6, entity_2, entity_3*sizeof(char));
}