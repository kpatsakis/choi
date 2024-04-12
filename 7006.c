void fun()
{
  int entity_6 = 30;
  char* entity_3;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  entity_3 = (char*)malloc(61*sizeof(char));
  entity_3[61-1]='';
  memset(entity_4, 'M', entity_6-1);
  entity_4[entity_6-1]='';
  entity_6 = 93;
  memcpy(entity_3, entity_4, entity_6*sizeof(char));
}