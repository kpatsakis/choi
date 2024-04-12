void fun()
{
  int entity_4 = 58;
  entity_4 = 13;
  char* entity_8;
  char entity_6[16] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  memset(entity_6, 'p', 16-1);
  entity_6[16-1]='';
  strcpy(entity_8, entity_6);
}