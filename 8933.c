void fun()
{
  int entity_4 = 74;
  entity_4 = 35;
  char* entity_7;
  char entity_1 = 's';
  char entity_3[28] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[entity_4-1]='';
  memset(entity_3, 'C', 28-1);
  entity_3[28-1]='';
  strcpy(entity_7, entity_3);
}