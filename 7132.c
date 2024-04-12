void fun()
{
  int entity_5 = 90;
  char entity_3[72] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_4[5] = "";
  entity_4 = NULL;
  entity_0 = (char*)malloc(8*sizeof(char));
  entity_0[8-1]='';
  memset(entity_3, 'l', 72-1);
  entity_3[72-1]='';
  memset(entity_4, 'f', 5-1);
  entity_4[5-1]='';
  memcpy(entity_0, entity_3, 72*sizeof(char));
}