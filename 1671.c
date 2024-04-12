void fun()
{
  int entity_8 = 81;
  int entity_2 = 49;
  char entity_3[87] = "";
  entity_3 = NULL;
  char* entity_5;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'e', entity_8-1);
  entity_7[entity_8-1]='';
  entity_5 = (char*)malloc(18*sizeof(char));
  entity_5[18-1]='';
  memset(entity_3, 'y', 87-1);
  entity_3[87-1]='';
  memcpy(entity_5, entity_7, entity_8*sizeof(char));
}