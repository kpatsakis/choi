void fun()
{
  int entity_1 = 30;
  int entity_5 = 50;
  char entity_3[18] = "";
  entity_3 = NULL;
  char entity_7[92] = "";
  entity_7 = NULL;
  char entity_8[6] = "";
  entity_8 = NULL;
  char* entity_4;
  memset(entity_8, 'K', 6-1);
  entity_8[6-1]='';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  memset(entity_3, 'J', 18-1);
  entity_3[18-1]='';
  memset(entity_7, 'A', 92-1);
  entity_7[92-1]='';
  strcpy(entity_4, entity_7);
}