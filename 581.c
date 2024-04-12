void fun()
{
  int entity_6 = 29;
  entity_6 = 99;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  char* entity_1;
  memset(entity_3, 'Y', entity_6-1);
  entity_3[entity_6-1]='';
  entity_1 = (char*)malloc(4*sizeof(char));
  entity_1[4-1]='';
  memcpy(entity_1, entity_3, entity_6*sizeof(char));
}