void fun()
{
  int entity_4 = 34;
  int entity_9 = 99;
  int entity_6 = 92;
  char entity_5[37] = "";
  entity_5 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  memset(entity_5, 'n', 37-1);
  entity_5[37-1]='';
  memcpy(entity_7, entity_5, 37*sizeof(char));
}