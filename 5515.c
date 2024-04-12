void fun()
{
  int entity_4 = 56;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(97*sizeof(char));
  entity_3[97-1]='';
  memset(entity_7, 'x', entity_4-1);
  entity_7[entity_4-1]='';
  entity_4 = 15;
  memcpy(entity_3, entity_7, entity_4*sizeof(char));
}