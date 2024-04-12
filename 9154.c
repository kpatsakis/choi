void fun()
{
  int entity_7 = 36;
  char entity_3[12] = "";
  entity_3 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memset(entity_3, 'e', 12-1);
  entity_3[12-1]='';
  memcpy(entity_0, entity_3, 12*sizeof(char));
}