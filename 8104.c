void fun()
{
  int entity_6 = 88;
  entity_6 = 91;
  char entity_3[17] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memset(entity_3, 'C', 17-1);
  entity_3[17-1]='';
  memcpy(entity_4, entity_3, 17*sizeof(char));
}