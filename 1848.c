void fun()
{
  int entity_3 = 82;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(41*sizeof(char));
  entity_6[41-1]='';
  memset(entity_8, 'C', entity_3-1);
  entity_8[entity_3-1]='';
  memcpy(entity_6, entity_8, entity_3*sizeof(char));
}