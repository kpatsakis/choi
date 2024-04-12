void fun()
{
  int entity_8 = 25;
  char entity_7[44] = "";
  entity_7 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memset(entity_7, 'B', 44-1);
  entity_7[44-1]='';
  entity_8 = 71;
  memcpy(entity_6, entity_7, 44*sizeof(char));
}