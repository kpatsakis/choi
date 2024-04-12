void fun()
{
  int entity_5 = 74;
  entity_5 = 92;
  char entity_3[94] = "";
  entity_3 = NULL;
  char* entity_6;
  char entity_8[82] = "";
  entity_8 = NULL;
  memset(entity_8, 'p', 82-1);
  entity_8[82-1]='';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  memset(entity_3, 'h', 94-1);
  entity_3[94-1]='';
  strcpy(entity_6, entity_8);
}