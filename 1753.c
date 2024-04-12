void fun()
{
  int entity_8 = 80;
  char entity_5[17] = "";
  entity_5 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  memset(entity_5, 'p', 17-1);
  entity_5[17-1]='';
  memcpy(entity_4, entity_5, 17*sizeof(char));
}