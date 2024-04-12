void fun()
{
  int entity_7 = 56;
  char entity_5[95] = "";
  entity_5 = NULL;
  char* entity_3;
  memset(entity_5, 'B', 95-1);
  entity_5[95-1]='';
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  entity_7 = 90;
  memcpy(entity_3, entity_5, 95*sizeof(char));
}