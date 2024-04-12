void fun()
{
  int entity_4 = 41;
  int entity_0 = 62;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  char* entity_3;
  memset(entity_7, 'g', entity_4-1);
  entity_7[entity_4-1]='';
  entity_3 = (char*)malloc(37*sizeof(char));
  entity_3[37-1]='';
  entity_4 = 96;
  memcpy(entity_3, entity_7, entity_4*sizeof(char));
}