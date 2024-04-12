void fun()
{
  int entity_5 = 2;
  char entity_8[28] = "";
  entity_8 = NULL;
  char* entity_6;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  memset(entity_7, 'e', entity_5-1);
  entity_7[entity_5-1]='';
  memset(entity_8, 'o', 28-1);
  entity_8[28-1]='';
  entity_6 = (char*)malloc(16*sizeof(char));
  entity_6[16-1]='';
  strcpy(entity_6, entity_7);
}