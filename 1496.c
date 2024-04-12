void fun()
{
  int entity_5 = 9;
  char* entity_1;
  char entity_8[4] = "";
  entity_8 = NULL;
  memset(entity_8, 'L', 4-1);
  entity_8[4-1]='';
  entity_1 = (char*)malloc(12*sizeof(char));
  entity_1[12-1]='';
  entity_8[entity_5] = 'a';
}