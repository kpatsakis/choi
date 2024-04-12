void fun()
{
  int entity_4 = 41;
  char* entity_9;
  char entity_8[87] = "";
  entity_8 = NULL;
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  memset(entity_8, 'x', 87-1);
  entity_8[87-1]='';
  entity_4 = 33;
  memcpy(entity_9, entity_8, 87*sizeof(char));
}