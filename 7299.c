void fun()
{
  int entity_6 = 17;
  char entity_7[62] = "";
  entity_7 = NULL;
  char entity_5[32] = "";
  entity_5 = NULL;
  char* entity_2;
  memset(entity_5, 'x', 32-1);
  entity_5[32-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  memset(entity_7, 'l', 62-1);
  entity_7[62-1]='';
  memcpy(entity_2, entity_7, 62*sizeof(char));
}