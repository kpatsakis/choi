void fun()
{
  int entity_8 = 16;
  char* entity_3;
  char entity_1[61] = "";
  entity_1 = NULL;
  char entity_2[95] = "";
  entity_2 = NULL;
  entity_3 = (char*)malloc(95*sizeof(char));
  entity_3[95-1]='';
  memset(entity_2, 'U', 95-1);
  entity_2[95-1]='';
  memset(entity_1, 'B', 61-1);
  entity_1[61-1]='';
  entity_8 = 66;
  entity_2[entity_8] = 'I';
}