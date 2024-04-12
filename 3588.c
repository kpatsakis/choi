void fun()
{
  int entity_8 = 76;
  entity_8 = 68;
  char entity_3 = 'I';
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_7;
  memset(entity_4, 'k', entity_8-1);
  entity_4[entity_8-1]='';
  entity_7 = (char*)malloc(57*sizeof(char));
  entity_7[57-1]='';
  memcpy(entity_7, entity_4, entity_8*sizeof(char));
}