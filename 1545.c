void fun()
{
  int entity_8 = 91;
  char entity_6[17] = "";
  entity_6 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  memset(entity_6, 'E', 17-1);
  entity_6[17-1]='';
  entity_8 = 36;
  memcpy(entity_3, entity_6, 17*sizeof(char));
}