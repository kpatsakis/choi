void fun()
{
  int entity_8 = 18;
  entity_8 = 3;
  char* entity_3;
  char entity_6[71] = "";
  entity_6 = NULL;
  char entity_1 = 'W';
  memset(entity_6, 'k', 71-1);
  entity_6[71-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memcpy(entity_3, entity_6, 71*sizeof(char));
}