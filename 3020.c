void fun()
{
  int entity_5 = 71;
  int entity_4 = 69;
  char* entity_3;
  char entity_0[86] = "";
  entity_0 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_4*sizeof(char));
  entity_2[entity_4-1]='';
  memset(entity_0, 'y', 86-1);
  entity_0[86-1]='';
  entity_3 = (char*)malloc(34*sizeof(char));
  entity_3[34-1]='';
  memcpy(entity_2, entity_0, 86*sizeof(char));
}