void fun()
{
  int entity_2 = 49;
  entity_2 = 31;
  char entity_4[31] = "";
  entity_4 = NULL;
  char entity_6[60] = "";
  entity_6 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_2*sizeof(char));
  entity_1[entity_2-1]='';
  memset(entity_4, 'S', 31-1);
  entity_4[31-1]='';
  memset(entity_6, 'h', 60-1);
  entity_6[60-1]='';
  memcpy(entity_1, entity_4, 31*sizeof(char));
}