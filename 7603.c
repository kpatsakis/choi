void fun()
{
  int entity_7 = 42;
  entity_7 = 79;
  char entity_3[23] = "";
  entity_3 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_3, 'w', 23-1);
  entity_3[23-1]='';
  memcpy(entity_8, entity_3, 23*sizeof(char));
}