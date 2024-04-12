void fun()
{
  int entity_4 = 25;
  entity_4 = 13;
  char entity_5[entity_4] = "";
  entity_5 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(22*sizeof(char));
  entity_8[22-1]='';
  memset(entity_5, 'Y', entity_4-1);
  entity_5[entity_4-1]='';
  memcpy(entity_8, entity_5, entity_4*sizeof(char));
}