void fun()
{
  int entity_8 = 83;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(4*sizeof(char));
  entity_4[4-1]='';
  memset(entity_3, 'C', entity_8-1);
  entity_3[entity_8-1]='';
  entity_8 = 49;
  memcpy(entity_4, entity_3, entity_8*sizeof(char));
}