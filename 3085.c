void fun()
{
  int entity_7 = 67;
  int entity_1 = 56;
  char* entity_3;
  char entity_6[33] = "";
  entity_6 = NULL;
  memset(entity_6, 'g', 33-1);
  entity_6[33-1]='';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  entity_7 = 81;
  memcpy(entity_3, entity_6, 33*sizeof(char));
}