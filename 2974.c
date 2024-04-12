void fun()
{
  int entity_3 = 12;
  entity_3 = 95;
  char* entity_1;
  char entity_5[11] = "";
  entity_5 = NULL;
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memset(entity_5, 'v', 11-1);
  entity_5[11-1]='';
  memcpy(entity_1, entity_5, 11*sizeof(char));
}