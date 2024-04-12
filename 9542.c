void fun()
{
  int entity_7 = 6;
  char entity_6[48] = "";
  entity_6 = NULL;
  char* entity_4;
  memset(entity_6, 'Y', 48-1);
  entity_6[48-1]='';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  entity_7 = 6;
  memcpy(entity_4, entity_6, 48*sizeof(char));
}