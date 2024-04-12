void fun()
{
  int entity_8 = 4;
  char* entity_7;
  char entity_6[53] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memset(entity_6, 'A', 53-1);
  entity_6[53-1]='';
  memcpy(entity_7, entity_6, 53*sizeof(char));
}