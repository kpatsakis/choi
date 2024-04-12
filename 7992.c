void fun()
{
  int entity_0 = 66;
  char* entity_3;
  char entity_5[61] = "";
  entity_5 = NULL;
  char entity_4[24] = "";
  entity_4 = NULL;
  memset(entity_5, 'L', 61-1);
  entity_5[61-1]='';
  memset(entity_4, 'd', 24-1);
  entity_4[24-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  memcpy(entity_3, entity_5, 61*sizeof(char));
}