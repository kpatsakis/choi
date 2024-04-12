void fun()
{
  int entity_4 = 50;
  char entity_8[56] = "";
  entity_8 = NULL;
  char entity_7[86] = "";
  entity_7 = NULL;
  char* entity_1;
  memset(entity_7, 'z', 86-1);
  entity_7[86-1]='';
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[entity_4-1]='';
  memset(entity_8, 'x', 56-1);
  entity_8[56-1]='';
  strcpy(entity_1, entity_8);
}