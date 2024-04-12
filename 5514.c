void fun()
{
  int entity_6 = 7;
  char entity_8[61] = "";
  entity_8 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  memset(entity_8, 'B', 61-1);
  entity_8[61-1]='';
  entity_6 = 93;
  memcpy(entity_5, entity_8, 61*sizeof(char));
}