void fun()
{
  int entity_2 = 6;
  entity_2 = 53;
  char entity_6[48] = "";
  entity_6 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  memset(entity_6, 'n', 48-1);
  entity_6[48-1]='';
  memcpy(entity_4, entity_6, 48*sizeof(char));
}