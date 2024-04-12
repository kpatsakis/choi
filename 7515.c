void fun()
{
  int entity_4 = 23;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char entity_5 = 'C';
  char* entity_7;
  entity_7 = (char*)malloc(15*sizeof(char));
  entity_7[15-1]='';
  memset(entity_6, 'X', entity_4-1);
  entity_6[entity_4-1]='';
  memcpy(entity_7, entity_6, entity_4*sizeof(char));
}