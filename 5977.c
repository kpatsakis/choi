void fun()
{
  int entity_1 = 54;
  int entity_7 = 15;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char entity_4[14] = "";
  entity_4 = NULL;
  char* entity_3;
  char* entity_2;
  memset(entity_8, 'E', entity_7-1);
  entity_8[entity_7-1]='';
  memset(entity_4, 'm', 14-1);
  entity_4[14-1]='';
  entity_2 = (char*)malloc(72*sizeof(char));
  entity_2[72-1]='';
  entity_3 = (char*)malloc(82*sizeof(char));
  entity_3[82-1]='';
  strcpy(entity_3, entity_8);
}