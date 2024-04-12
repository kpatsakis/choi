void fun()
{
  int entity_8 = 40;
  char* entity_6;
  char entity_3[65] = "";
  entity_3 = NULL;
  memset(entity_3, 'Z', 65-1);
  entity_3[65-1]='';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  memcpy(entity_6, entity_3, 65*sizeof(char));
}