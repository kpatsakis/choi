void fun()
{
  int entity_5 = 95;
  entity_5 = 95;
  char entity_7[26] = "";
  entity_7 = NULL;
  char* entity_3;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  memset(entity_8, 'd', entity_5-1);
  entity_8[entity_5-1]='';
  memset(entity_7, 'Z', 26-1);
  entity_7[26-1]='';
  entity_3 = (char*)malloc(98*sizeof(char));
  entity_3[98-1]='';
  strcpy(entity_3, entity_8);
}