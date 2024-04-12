void fun()
{
  int entity_3 = 87;
  entity_3 = 11;
  char* entity_7;
  char entity_2[12] = "";
  entity_2 = NULL;
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[entity_3-1]='';
  memset(entity_2, 'q', 12-1);
  entity_2[12-1]='';
  memcpy(entity_7, entity_2, 12*sizeof(char));
}