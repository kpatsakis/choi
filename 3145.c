void fun()
{
  int entity_2 = 12;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  char* entity_8;
  memset(entity_5, 'y', entity_2-1);
  entity_5[entity_2-1]='';
  entity_8 = (char*)malloc(88*sizeof(char));
  entity_8[88-1]='';
  memcpy(entity_8, entity_5, entity_2*sizeof(char));
}