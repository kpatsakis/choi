void fun()
{
  int entity_5 = 72;
  int entity_2 = 15;
  int entity_7 = 26;
  char* entity_1;
  char entity_4[58] = "";
  entity_4 = NULL;
  memset(entity_4, 'y', 58-1);
  entity_4[58-1]='';
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[entity_7-1]='';
  memcpy(entity_1, entity_4, 58*sizeof(char));
}