void fun()
{
  int entity_3 = 15;
  entity_3 = 80;
  char* entity_1;
  char entity_2[62] = "";
  entity_2 = NULL;
  char entity_7[15] = "";
  entity_7 = NULL;
  memset(entity_2, 'H', 62-1);
  entity_2[62-1]='';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[entity_3-1]='';
  memset(entity_7, 'n', 15-1);
  entity_7[15-1]='';
  memcpy(entity_1, entity_2, 62*sizeof(char));
}