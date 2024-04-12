void fun()
{
  int entity_1 = 66;
  entity_1 = 66;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char entity_0 = 'C';
  char entity_4[16] = "";
  entity_4 = NULL;
  char* entity_8;
  memset(entity_7, 'm', entity_1-1);
  entity_7[entity_1-1]='';
  entity_8 = (char*)malloc(35*sizeof(char));
  entity_8[35-1]='';
  memset(entity_4, 'J', 16-1);
  entity_4[16-1]='';
  strcpy(entity_8, entity_7);
}