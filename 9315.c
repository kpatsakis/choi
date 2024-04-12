void fun()
{
  int entity_2 = 31;
  int entity_4 = 3;
  char entity_8[39] = "";
  entity_8 = NULL;
  char entity_1[37] = "";
  entity_1 = NULL;
  char* entity_5;
  char entity_6 = 'M';
  memset(entity_1, 'A', 37-1);
  entity_1[37-1]='';
  memset(entity_8, 'a', 39-1);
  entity_8[39-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  entity_2 = 60;
  memcpy(entity_5, entity_1, 37*sizeof(char));
}