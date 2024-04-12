void fun()
{
  int entity_6 = 26;
  char entity_8[53] = "";
  entity_8 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memset(entity_8, 'e', 53-1);
  entity_8[53-1]='';
  memcpy(entity_1, entity_8, 53*sizeof(char));
}