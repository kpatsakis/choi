void fun()
{
  int entity_2 = 50;
  entity_2 = 37;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(51*sizeof(char));
  entity_6[51-1]='';
  memset(entity_8, 'P', entity_2-1);
  entity_8[entity_2-1]='';
  memcpy(entity_6, entity_8, entity_2*sizeof(char));
}