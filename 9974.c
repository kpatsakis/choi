void fun()
{
  int entity_4 = 56;
  entity_4 = 62;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  char* entity_8;
  memset(entity_3, 'v', entity_4-1);
  entity_3[entity_4-1]='';
  entity_8 = (char*)malloc(44*sizeof(char));
  entity_8[44-1]='';
  memcpy(entity_8, entity_3, entity_4*sizeof(char));
}