void fun()
{
  int entity_6 = 70;
  char entity_3[95] = "";
  entity_3 = NULL;
  char* entity_4;
  char entity_7[31] = "";
  entity_7 = NULL;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memset(entity_3, 'E', 95-1);
  entity_3[95-1]='';
  memset(entity_7, 'x', 31-1);
  entity_7[31-1]='';
  entity_6 = 84;
  memcpy(entity_4, entity_3, 95*sizeof(char));
}