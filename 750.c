void fun()
{
  int entity_4 = 99;
  char entity_1[21] = "";
  entity_1 = NULL;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(72*sizeof(char));
  entity_7[72-1]='';
  memset(entity_8, 'w', entity_4-1);
  entity_8[entity_4-1]='';
  memset(entity_1, 'W', 21-1);
  entity_1[21-1]='';
  memcpy(entity_7, entity_8, entity_4*sizeof(char));
}