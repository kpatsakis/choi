void fun()
{
  int entity_1 = 43;
  entity_1 = 4;
  char entity_4[65] = "";
  entity_4 = NULL;
  char* entity_0;
  char entity_3 = 'l';
  entity_0 = (char*)malloc(entity_1*sizeof(char));
  entity_0[entity_1-1]='';
  memset(entity_4, 'C', 65-1);
  entity_4[65-1]='';
  memcpy(entity_0, entity_4, 65*sizeof(char));
}