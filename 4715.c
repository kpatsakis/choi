void fun()
{
  int entity_0 = 91;
  char entity_3[5] = "";
  entity_3 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  memset(entity_3, 'S', 5-1);
  entity_3[5-1]='';
  memcpy(entity_6, entity_3, 5*sizeof(char));
}