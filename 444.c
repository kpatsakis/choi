void fun()
{
  int entity_1 = 87;
  char* entity_7;
  char entity_2[21] = "";
  entity_2 = NULL;
  char entity_8[28] = "";
  entity_8 = NULL;
  memset(entity_8, 'X', 28-1);
  entity_8[28-1]='';
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  memset(entity_2, 'D', 21-1);
  entity_2[21-1]='';
  strcpy(entity_7, entity_2);
}