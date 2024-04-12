void fun()
{
  int entity_4 = 19;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  char entity_8 = 'O';
  char* entity_0;
  memset(entity_2, 'G', entity_4-1);
  entity_2[entity_4-1]='';
  entity_0 = (char*)malloc(6*sizeof(char));
  entity_0[6-1]='';
  entity_4 = 58;
  memcpy(entity_0, entity_2, entity_4*sizeof(char));
}