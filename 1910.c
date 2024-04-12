void fun()
{
  int entity_6 = 45;
  int entity_2 = 50;
  char entity_7[49] = "";
  entity_7 = NULL;
  char* entity_5;
  char entity_3[78] = "";
  entity_3 = NULL;
  char entity_4[15] = "";
  entity_4 = NULL;
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  memset(entity_4, 'T', 15-1);
  entity_4[15-1]='';
  memset(entity_3, 'G', 78-1);
  entity_3[78-1]='';
  memset(entity_7, 'F', 49-1);
  entity_7[49-1]='';
  memcpy(entity_5, entity_7, 49*sizeof(char));
}