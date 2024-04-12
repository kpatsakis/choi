void fun()
{
  int entity_5 = 22;
  int entity_2 = 78;
  char entity_0[76] = "";
  entity_0 = NULL;
  char entity_6 = 'D';
  char* entity_8;
  memset(entity_0, 'I', 76-1);
  entity_0[76-1]='';
  entity_8 = (char*)malloc(entity_5*sizeof(char));
  entity_8[entity_5-1]='';
  memcpy(entity_8, entity_0, 76*sizeof(char));
}