void fun()
{
  int entity_6 = 12;
  entity_6 = 48;
  char entity_3[90] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_3, 'h', 90-1);
  entity_3[90-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memcpy(entity_7, entity_3, 90*sizeof(char));
}