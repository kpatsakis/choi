void fun()
{
  int entity_7 = 34;
  int entity_5 = 82;
  char entity_3[entity_7] = "";
  entity_3 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(97*sizeof(char));
  entity_8[97-1]='';
  memset(entity_3, 'q', entity_7-1);
  entity_3[entity_7-1]='';
  memcpy(entity_8, entity_3, entity_7*sizeof(char));
}