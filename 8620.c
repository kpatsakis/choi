void fun()
{
  int entity_3 = 85;
  int entity_7 = 62;
  entity_3 = 87;
  char* entity_5;
  char entity_4[37] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(entity_3*sizeof(char));
  entity_5[entity_3-1]='';
  memset(entity_4, 'F', 37-1);
  entity_4[37-1]='';
  memcpy(entity_5, entity_4, 37*sizeof(char));
}