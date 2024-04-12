void fun()
{
  int entity_9 = 76;
  int entity_6 = 83;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(97*sizeof(char));
  entity_8[97-1]='';
  memset(entity_3, 'A', entity_6-1);
  entity_3[entity_6-1]='';
  memcpy(entity_8, entity_3, entity_6*sizeof(char));
}