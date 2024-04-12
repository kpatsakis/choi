void fun()
{
  int entity_0 = 12;
  int entity_2 = 18;
  int entity_4 = 73;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char* entity_8;
  memset(entity_6, 'H', entity_2-1);
  entity_6[entity_2-1]='';
  entity_8 = (char*)malloc(56*sizeof(char));
  entity_8[56-1]='';
  entity_2 = 33;
  memcpy(entity_8, entity_6, entity_2*sizeof(char));
}