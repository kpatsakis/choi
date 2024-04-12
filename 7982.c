void fun()
{
  int entity_5 = 18;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  char* entity_3;
  char entity_0[20] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(24*sizeof(char));
  entity_3[24-1]='';
  memset(entity_0, 'F', 20-1);
  entity_0[20-1]='';
  memset(entity_4, 'D', entity_5-1);
  entity_4[entity_5-1]='';
  memcpy(entity_3, entity_4, entity_5*sizeof(char));
}