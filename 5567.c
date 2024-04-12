void fun()
{
  int entity_2 = 84;
  char entity_7[53] = "";
  entity_7 = NULL;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  char* entity_0;
  memset(entity_7, 'F', 53-1);
  entity_7[53-1]='';
  memset(entity_3, 'U', entity_2-1);
  entity_3[entity_2-1]='';
  entity_0 = (char*)malloc(24*sizeof(char));
  entity_0[24-1]='';
  entity_2 = 87;
  memcpy(entity_0, entity_3, entity_2*sizeof(char));
}