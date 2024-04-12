void fun()
{
  int entity_3 = 26;
  char entity_8 = 'i';
  char* entity_0;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'b', entity_3-1);
  entity_6[entity_3-1]='';
  entity_0 = (char*)malloc(71*sizeof(char));
  entity_0[71-1]='';
  memcpy(entity_0, entity_6, entity_3*sizeof(char));
}