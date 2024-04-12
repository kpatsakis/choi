void fun()
{
  int entity_3 = 67;
  char* entity_8;
  char entity_4 = 'B';
  char entity_6[6] = "";
  entity_6 = NULL;
  char entity_7[84] = "";
  entity_7 = NULL;
  memset(entity_6, 'P', 6-1);
  entity_6[6-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memset(entity_7, 'E', 84-1);
  entity_7[84-1]='';
  entity_3 = 95;
  strcpy(entity_8, entity_7);
}