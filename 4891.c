void fun()
{
  int entity_8 = 37;
  int entity_4 = 47;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  char* entity_0;
  memset(entity_6, 'M', entity_8-1);
  entity_6[entity_8-1]='';
  entity_0 = (char*)malloc(48*sizeof(char));
  entity_0[48-1]='';
  entity_6[21] = 'N';
}