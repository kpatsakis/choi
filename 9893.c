void fun()
{
  int entity_6 = 59;
  char* entity_1;
  char entity_4[90] = "";
  entity_4 = NULL;
  memset(entity_4, 'y', 90-1);
  entity_4[90-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  entity_6 = 8;
  memcpy(entity_1, entity_4, 90*sizeof(char));
}