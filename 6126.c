void fun()
{
  int entity_6 = 13;
  char entity_3[12] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_3, 'd', 12-1);
  entity_3[12-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  entity_6 = 73;
  memcpy(entity_7, entity_3, 12*sizeof(char));
}