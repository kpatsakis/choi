void fun()
{
  int entity_3 = 40;
  char entity_7[99] = "";
  entity_7 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_7, 'n', 99-1);
  entity_7[99-1]='';
  entity_3 = 53;
  memcpy(entity_4, entity_7, 99*sizeof(char));
}