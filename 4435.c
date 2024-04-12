void fun()
{
  int entity_1 = 28;
  entity_1 = 21;
  char entity_2[58] = "";
  entity_2 = NULL;
  char* entity_5;
  char* entity_8;
  char entity_4 = 's';
  entity_5 = (char*)malloc(entity_1*sizeof(char));
  entity_5[entity_1-1]='';
  memset(entity_2, 'i', 58-1);
  entity_2[58-1]='';
  entity_8 = (char*)malloc(89*sizeof(char));
  entity_8[89-1]='';
  memcpy(entity_5, entity_2, 58*sizeof(char));
}