void fun()
{
  int entity_1 = 48;
  char entity_9[21] = "";
  entity_9 = NULL;
  char entity_8[29] = "";
  entity_8 = NULL;
  char entity_4 = 'x';
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char* entity_7;
  memset(entity_3, 'g', entity_1-1);
  entity_3[entity_1-1]='';
  entity_7 = (char*)malloc(15*sizeof(char));
  entity_7[15-1]='';
  memset(entity_8, 'u', 29-1);
  entity_8[29-1]='';
  memset(entity_9, 's', 21-1);
  entity_9[21-1]='';
  strcpy(entity_7, entity_3);
}