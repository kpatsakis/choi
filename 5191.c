void fun()
{
  int entity_7 = 31;
  int entity_2 = 34;
  entity_7 = 31;
  char* entity_3;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(18*sizeof(char));
  entity_3[18-1]='';
  memset(entity_8, 'u', entity_7-1);
  entity_8[entity_7-1]='';
  strcpy(entity_3, entity_8);
}