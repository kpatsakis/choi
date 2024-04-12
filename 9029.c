void fun()
{
  int entity_4 = 13;
  entity_4 = 67;
  char* entity_6;
  char entity_5[71] = "";
  entity_5 = NULL;
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_5, 'a', 71-1);
  entity_5[71-1]='';
  memcpy(entity_6, entity_5, 71*sizeof(char));
}