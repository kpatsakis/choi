void fun()
{
  int entity_8 = 100;
  char entity_5[3] = "";
  entity_5 = NULL;
  char entity_3[5] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_5, 'p', 3-1);
  entity_5[3-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  memset(entity_3, 'h', 5-1);
  entity_3[5-1]='';
  entity_8 = 2;
  memcpy(entity_7, entity_5, 3*sizeof(char));
}