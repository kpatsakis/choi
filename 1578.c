void fun()
{
  int entity_5 = 39;
  char entity_4[44] = "";
  entity_4 = NULL;
  char* entity_6;
  char entity_7 = 'W';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memset(entity_4, 'z', 44-1);
  entity_4[44-1]='';
  memcpy(entity_6, entity_4, 44*sizeof(char));
}