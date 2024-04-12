void fun()
{
  int entity_3 = 27;
  entity_3 = 27;
  char entity_2 = 'i';
  char entity_4[28] = "";
  entity_4 = NULL;
  char* entity_7;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  entity_7 = (char*)malloc(22*sizeof(char));
  entity_7[22-1]='';
  memset(entity_8, 'f', entity_3-1);
  entity_8[entity_3-1]='';
  memset(entity_4, 'W', 28-1);
  entity_4[28-1]='';
  strcpy(entity_7, entity_8);
}