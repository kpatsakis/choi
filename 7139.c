void fun()
{
  int entity_8 = 63;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(41*sizeof(char));
  entity_4[41-1]='';
  memset(entity_3, 'A', entity_8-1);
  entity_3[entity_8-1]='';
  memcpy(entity_4, entity_3, entity_8*sizeof(char));
}