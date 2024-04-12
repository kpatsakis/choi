void fun()
{
  int entity_2 = 46;
  char entity_8[86] = "";
  char entity_7[60] = "";
  char* entity_1;
  memset(entity_8, 'o', 86-1);
  entity_8[86-1]='0';
  memset(entity_7, 'o', 60-1);
  entity_7[60-1]='0';
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_8);
}