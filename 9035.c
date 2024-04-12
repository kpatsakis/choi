void fun()
{
  int entity_2 = 66;
  char* entity_5;
  char entity_8[4] = "";
  entity_8 = NULL;
  char entity_4 = 'V';
  char entity_1[89] = "";
  entity_1 = NULL;
  memset(entity_8, 'v', 4-1);
  entity_8[4-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memset(entity_1, 'b', 89-1);
  entity_1[89-1]='';
  entity_2 = 52;
  memcpy(entity_5, entity_8, 4*sizeof(char));
}