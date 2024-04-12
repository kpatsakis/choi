void fun()
{
  int entity_4 = 73;
  char* entity_8;
  char entity_7[44] = "";
  entity_7 = NULL;
  memset(entity_7, 'o', 44-1);
  entity_7[44-1]='';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  memcpy(entity_8, entity_7, 44*sizeof(char));
}