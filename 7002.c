void fun()
{
  int entity_7 = 80;
  entity_7 = 4;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char* entity_0;
  char entity_3 = 'R';
  char entity_8 = 'f';
  memset(entity_6, 'j', entity_7-1);
  entity_6[entity_7-1]='';
  entity_0 = (char*)malloc(71*sizeof(char));
  entity_0[71-1]='';
  memcpy(entity_0, entity_6, entity_7*sizeof(char));
}