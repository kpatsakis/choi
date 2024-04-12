void fun()
{
  int entity_0 = 69;
  char* entity_6;
  char entity_5[5] = "";
  entity_5 = NULL;
  char entity_3 = 'x';
  memset(entity_5, 'j', 5-1);
  entity_5[5-1]='';
  entity_6 = (char*)malloc(entity_0*sizeof(char));
  entity_6[entity_0-1]='';
  entity_0 = 83;
  memcpy(entity_6, entity_5, 5*sizeof(char));
}