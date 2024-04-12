void fun()
{
  int entity_6 = 87;
  int entity_1 = 75;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_3, 'i', entity_6-1);
  entity_3[entity_6-1]='';
  entity_7 = (char*)malloc(16*sizeof(char));
  entity_7[16-1]='';
  entity_6 = 24;
  memcpy(entity_7, entity_3, entity_6*sizeof(char));
}