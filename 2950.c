void fun()
{
  int entity_7 = 90;
  entity_7 = 84;
  char entity_6[71] = "";
  entity_6 = NULL;
  char* entity_4;
  memset(entity_6, 'f', 71-1);
  entity_6[71-1]='';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memcpy(entity_4, entity_6, 71*sizeof(char));
}