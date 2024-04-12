void fun()
{
  int entity_4 = 36;
  char* entity_8;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(88*sizeof(char));
  entity_8[88-1]='';
  memset(entity_6, 'Q', entity_4-1);
  entity_6[entity_4-1]='';
  entity_4 = 78;
  memcpy(entity_8, entity_6, entity_4*sizeof(char));
}