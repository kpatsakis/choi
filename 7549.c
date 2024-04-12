void fun()
{
  int entity_8 = 31;
  int entity_7 = 70;
  int entity_0 = 31;
  char entity_3[17] = "";
  entity_3 = NULL;
  char* entity_5;
  memset(entity_3, 'Q', 17-1);
  entity_3[17-1]='';
  entity_5 = (char*)malloc(entity_8*sizeof(char));
  entity_5[entity_8-1]='';
  strcpy(entity_5, entity_3);
}