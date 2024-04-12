void fun()
{
  int entity_6 = 33;
  int entity_2 = 28;
  char entity_8 = 'S';
  char entity_3[20] = "";
  entity_3 = NULL;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char* entity_7;
  memset(entity_3, 'y', 20-1);
  entity_3[20-1]='';
  entity_7 = (char*)malloc(71*sizeof(char));
  entity_7[71-1]='';
  memset(entity_5, 'M', entity_6-1);
  entity_5[entity_6-1]='';
  memcpy(entity_7, entity_5, entity_6*sizeof(char));
}