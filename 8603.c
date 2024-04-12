void fun()
{
  int entity_4 = 66;
  char entity_3[81] = "";
  entity_3 = NULL;
  char* entity_6;
  memset(entity_3, 'B', 81-1);
  entity_3[81-1]='';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memcpy(entity_6, entity_3, 81*sizeof(char));
}