void fun()
{
  int entity_6 = 88;
  int entity_5 = 11;
  char* entity_4;
  char entity_8[57] = "";
  entity_8 = NULL;
  char entity_1 = 'X';
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memset(entity_8, 'g', 57-1);
  entity_8[57-1]='';
  memcpy(entity_4, entity_8, 57*sizeof(char));
}