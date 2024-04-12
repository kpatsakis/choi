void fun()
{
  int entity_4 = 51;
  char* entity_7;
  char entity_5[58] = "";
  entity_5 = NULL;
  char entity_1[99] = "";
  entity_1 = NULL;
  memset(entity_1, 'Q', 99-1);
  entity_1[99-1]='';
  memset(entity_5, 'z', 58-1);
  entity_5[58-1]='';
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  memcpy(entity_7, entity_5, 58*sizeof(char));
}