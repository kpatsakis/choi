void fun()
{
  int entity_3 = 13;
  int entity_6 = 58;
  char* entity_0;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(41*sizeof(char));
  entity_8[41-1]='';
  memset(entity_5, 'H', entity_3-1);
  entity_5[entity_3-1]='';
  entity_0 = (char*)malloc(99*sizeof(char));
  entity_0[99-1]='';
  entity_3 = 5;
  strcpy(entity_8, entity_5);
}